#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <iostream>
#include <typeinfo>
#include <stdexcept>
#include "iterator.hpp"
#include "reverse_iterator.hpp"
#include "type_traits.hpp"

namespace ft {

template < class T, class Alloc = std::allocator<T> >
class vector {
    public:
         /****************/
        /* Member Types */

        typedef T                                                       value_type;
        typedef Alloc                                                   allocator_type;
        typedef typename allocator_type::reference                      reference;
        typedef typename allocator_type::const_reference                const_reference;
        typedef typename allocator_type::pointer                        pointer;
        typedef typename allocator_type::const_pointer                  const_pointer;
        typedef typename std::ptrdiff_t                                 difference_type;
        typedef typename std::size_t                                    size_type;
        typedef typename ft::random_access_iterator<pointer>            iterator;
        typedef typename ft::random_access_iterator<const_pointer>      const_iterator;
        typedef typename ft::reverse_iterator<pointer>                  reverse_iterator;
        typedef typename ft::reverse_iterator<const_pointer>            const_reverse_iterator;

         /********************/
        /* Member functions */

        /****
        ** Constructors
        */

        // Default
        explicit
        vector (const allocator_type& alloc = allocator_type()) :   _alloc(alloc),
                                                                    _size(0),
                                                                    _capacity(0),
                                                                    _buffer(0)
        {};

        // Fill
        explicit
        vector (size_type n, const value_type& val = value_type(),
                 const allocator_type& alloc = allocator_type()) :  _alloc(alloc),
                                                                    _size(n),
                                                                    _capacity(n)
        {
			if (n == 0) {
				_buffer = NULL;
				return ;
			}
            if (n > max_size()){
                throw std::length_error("cannot create ft::vector larger than max_size()");
            }
            _buffer = _alloc.allocate(n);
            for (size_type i = 0; i < n; i++) {
                _alloc.construct(_buffer + i, val);
            }
        };

		// Range
		template <class InputIterator>
        vector (InputIterator first, InputIterator last,
                const allocator_type& alloc = allocator_type(),
				typename enable_if<!is_integral<InputIterator>::value>::type* = 0)
																:  _alloc(alloc),
																   _size(last - first),
																   _capacity(last - first)
		{
			if (_size <= 0) {
				_buffer = 0;
				return ;
			}
			_buffer = _alloc.allocate(_size);
			size_type i = 0;
			for (; first != last; first++) {
				_alloc.construct(_buffer + i, *first);
				i++;
			}
		};

		// Copy Constructor
		vector (const vector & x) : _alloc(x._alloc),
									_size(0),
									_capacity(0),
									_buffer(NULL)
		{
			*this = x;
		}

        /****
        ** Destructor
        */

        ~vector() {
			destroy_buffer();
			if (_capacity > 0)
            	_alloc.deallocate(_buffer, _capacity);
        };

		/****
		** Operator= (Assignment Operator)
		*/

		vector & operator=(const vector & x) {
			if (this == &x) {
				return *this;
			}
			if (_capacity >= x._size) {
				destroy_buffer();
			}
			else {
				this->~vector();
				_buffer = _alloc.allocate(x._size);
				_capacity = x._capacity;
			}
			for (size_type i = 0; i < x._size; i++) {
				_alloc.construct(_buffer + i, x._buffer[i]);
			}
			_size = x._size;
			return *this;
		};

        /****
        ** Capacity
        */

        size_type size() const {
            return _size;
        };

        size_type max_size() const {
            return _alloc.max_size();
        };

        size_type capacity() const {
            return _capacity;
        };

        void reserve (size_type n) {
            if (n > max_size()){
                throw std::length_error("vector::reserve");
            }
            if (n > _capacity) {
                pointer temp = _alloc.allocate(n);

                for (size_type i = 0; i < _size; i++) {
                    _alloc.construct(temp + i, _buffer[i]);
                    _alloc.destroy(_buffer + i);
                }
                _alloc.deallocate(_buffer, _capacity);

                _buffer = temp;
                _capacity = n;
            }
        };

        /****
        ** Iterators
        */

        iterator begin() {
            return iterator(_buffer);
        };

        const_iterator begin() const {
            return const_iterator(_buffer);
        };

        iterator end() {
            return iterator(_buffer + _size);
        };

        const_iterator end() const {
            return const_iterator(_buffer + _size);
        };

		reverse_iterator rbegin() {
			return reverse_iterator(_buffer + _size - 1);
		};

		const_reverse_iterator rbegin() const {
			return const_reverse_iterator(_buffer + _size - 1);
		};

		reverse_iterator rend() {
			return reverse_iterator(_buffer - 1);
		};

		const_reverse_iterator rend() const {
			return reverse_iterator(_buffer - 1);
		};

        /****
        ** Modifiers
        */

        void push_back (const value_type& val) {
            if (_capacity == 0) {
                reserve(1);
            }
            else if (_capacity == _size) {
                reserve(_capacity * 2);
            }
            _alloc.construct(_buffer + _size, val);
            _size++;
        };


    private:
         /********************/
        /* Helper Functions */

		void destroy_buffer() {
			for (size_type i = 0; i < _size; i++) {
				_alloc.destroy(_buffer + i);
			}
		}

         /****************/
        /* Private Data */

        allocator_type  _alloc;
        size_type       _size;
        size_type       _capacity;
        pointer         _buffer;

};

}

#endif
