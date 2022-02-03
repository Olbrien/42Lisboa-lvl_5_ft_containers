#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <iostream>
#include <typeinfo>
#include <stdexcept>
#include "utils.hpp"
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
																	_capacity(n),
																	_buffer(0)
		{
			if (n == 0) {
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
		// enable_if is used here to distinguish between the Range and Fill
		// otherwise it would give an error for being "ambiguous"
		// https://stackoverflow.com/questions/14035520/choose-which-constructor-in-c
		template <class InputIterator>
		vector (InputIterator first, InputIterator last,
				const allocator_type& alloc = allocator_type(),
				typename enable_if<!is_integral<InputIterator>::value>::type* = 0)
																:  _alloc(alloc),
																_size(last - first),
																_capacity(last - first),
																_buffer(0)
		{
			if (_size <= 0) {
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
									_buffer(0)
		{
			*this = x;
		}

		/****
		** Destructor
		*/

		~vector() {
			clear();
			if (_capacity > 0)
				_alloc.deallocate(_buffer, _capacity);
			_capacity = 0;
		};

		/****
		** Operator= (Assignment Operator)
		*/

		vector & operator=(const vector & x) {
			if (this == &x) {
				return *this;
			}
			if (_capacity >= x._size) {
				clear();
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
		** Capacity
		*/

		size_type size() const {
			return _size;
		};

		size_type max_size() const {
			return _alloc.max_size();
		};

		void resize (size_type n, value_type val = value_type()) {
			if (n < _size) {
				for (; _size > n; _size--) {
					_alloc.destroy(_buffer + (_size - n));
				}
			}
			else if (n > _size) {
				if (_size * 2 < n) {
					this->reserve(n);
				}
				size_type i = n - _size;
				for (; i > 0; i--) {
					this->push_back(val);
				}
			}
		};

		size_type capacity() const {
			return _capacity;
		};

		bool empty() const {
			return (_size == 0 ? true : false);
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
		** Element Access
		*/

		reference operator[] (size_type n) {
			return reference(_buffer[n]);
		};

		const_reference operator[] (size_type n) const {
			return const_reference(_buffer[n]);
		};

		reference at (size_type n) {
			if (n >= _size) {
				std::string error("vector::_M_range_check: n (which is ");
				error += to_string(n)
				         + std::string(")")
						 + std::string(" >= this->size() ")
						 + std::string("(which is "
						 + to_string(_size)
						 + std::string(")"));
				throw(std::out_of_range(error));
			}
			return reference(_buffer[n]);
		};
		const_reference at (size_type n) const {
			if (n >= _size) {
				std::string error("vector::_M_range_check: n (which is ");
				error += to_string(n)
				         + std::string(")")
						 + std::string(" >= this->size() ")
						 + std::string("(which is "
						 + to_string(_size)
						 + std::string(")"));
				throw(std::out_of_range(error));
			}
			return const_reference(_buffer[n]);
		};

		reference front() {
			return reference(*_buffer);
		};

		const_reference front() const {
			return const_reference(*_buffer);
		};

		reference back() {
			return reference(*(_buffer + _size - 1));
		};

		const_reference back() const {
			return const_reference(*(_buffer + _size - 1));
		};


		/****
		** Modifiers
		*/

		// Range
		// enable_if used as same reason as Range / Fill constructor
		template <class InputIterator>
		void assign (InputIterator first, InputIterator last,
					 typename enable_if<!is_integral<InputIterator>::value>::type* = 0) {
			clear();
			reserve(last - first);
			for (; first != last; first++) {
				push_back(*first);
			}
		};

		// Fill
		void assign (size_type n, const value_type& val) {
			clear();
			reserve(n);
			for (; _size < n;) {
				push_back(val);
			}
		};

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

		void pop_back() {
			_alloc.destroy(_buffer + _size - 1);
			if (_size > 0) {
				_size--;
			}
		};

		// Single element
		iterator insert (iterator position, const value_type& val) {
			size_type pos = position - begin();
			size_type diff_until_end = end() - position;

			if (diff_until_end > 0) {
				// push_back() but without constructing last element
				push_back_no_construct();

				// Swap 1 by 1 from "end() - 1" until position
				for (size_type size_temp = _size - 1; pos < size_temp ; size_temp--) {
					_alloc.construct(_buffer + size_temp, *(_buffer + size_temp - 1));
					_alloc.destroy(_buffer + size_temp - 1);
				}
				// Insert new value on the correct position
				_alloc.construct(_buffer + pos, val);
			}
			else {
				this->push_back(val);
			}
			return iterator(_buffer + pos);
		};

		// Fill
		void insert (iterator position, size_type n, const value_type& val) {
			size_type pos = position - begin();
			size_type initial_size = end() - begin();

			// if n >= capacity then you have to put _size == _capacity, otherwise
			// it can be (x2)
			if (n >= _capacity) {
				reserve(_size + n);
			}

			// This is case the pos is not in the end, otherwise you just push_back()
			if (n > 0 && pos != initial_size) {
				for (size_type i = 0; n > i; i++) {
					push_back_no_construct();
				}

				// offset by 1 because you don't want end() but end() - 1
				initial_size--;
				// current_size = the current _size
				// initial_size = is the _size before allocating more space with reserve() and
				// push_back_no_construct()
				// Swap 1 by 1 the new current_size-- with the initial_size--
				// Until the initial_size reaches the position where new elements will be inserted
				for (size_type current_size = _size - 1; initial_size >= pos; current_size--, initial_size--) {
					_alloc.construct(_buffer + current_size, *(_buffer + initial_size));
					_alloc.destroy(_buffer + initial_size);
					if (initial_size == 0)
						break ;
				}
				// Inserts new values on the correct positions
				for (; n > 0; n--, pos++) {
					_alloc.construct(_buffer + pos, val);
				}
			}
			else if (pos == initial_size) {
				// if elements are being inserted at the end
				for (size_type i = 0; n > i; i++) {
					push_back(val);
				}
			}
		};

		// Range
		template <class InputIterator>
		void insert (iterator position, InputIterator first, InputIterator last,
					typename enable_if<!is_integral<InputIterator>::value>::type* = 0) {
			size_type pos = position - begin();
			size_type size_of_range = last - first;
			size_type initial_size = end() - begin();

			// if size_of_range >= capacity then you have to put _size == _capacity, otherwise
			// it can be (x2)
			if (size_of_range >= _capacity) {
				reserve(_size + size_of_range);
			}

			if (size_of_range > 0 && pos != initial_size) {
				for (size_type i = 0; size_of_range > i; i++) {
					push_back_no_construct();
				}
				--initial_size;
				// same logic as Fill
				for (size_type current_size = _size - 1; initial_size >= pos; current_size--, initial_size--) {
					_alloc.construct(_buffer + current_size, *(_buffer + initial_size));
					_alloc.destroy(_buffer + initial_size);
					if (initial_size == 0)
						break ;
				}
				// Inserts new values on the correct positions
				while (first != last) {
					_alloc.construct(_buffer + pos, *first);
					first++;
					pos++;
				}
			}
			else if (pos == initial_size) {
				while (first != last) {
					push_back(*first);
					first++;
				}
			}
		};


		// https://stackoverflow.com/questions/17492092/stdvectoreraseiterator-position-does-not-necessarily-invoke-the-correspond
		iterator erase (iterator position) {
			size_type pos = position - begin();

			// Destroys element at position
			_alloc.destroy(_buffer + pos);

			// Constructs at position with the pos + 1, then it destroys pos + 1
			for (iterator begin = _buffer + pos; begin != this->end() - 1; begin++, pos++) {
				_alloc.construct(_buffer + pos, *(begin + 1));
				_alloc.destroy(_buffer + pos + 1);
			}
			_size--;
			return position;
		};

		iterator erase (iterator first, iterator last) {
			size_type range_to_erase = last - first;
			size_type pos = first - begin();
			size_type diff_until_end = end() - last;

			// Deletes the range of elements
			for (size_type temp_pos = pos ; temp_pos < range_to_erase; temp_pos++) {
				_alloc.destroy(_buffer + temp_pos);
			}

			// Constructs at position with the pos + 1, then it destroys pos + 1
			iterator begin = _buffer + range_to_erase + pos;
			for ( ; diff_until_end > 0; pos++, begin++, --diff_until_end) {
				_alloc.construct(_buffer + pos, *(begin));
				_alloc.destroy(_buffer + pos + 1);
			}

			_size -= range_to_erase;
			return first;
		};

		void swap (vector& x) {
			allocator_type  alloc_temp = x._alloc;
			size_type       size_temp = x._size;
			size_type       capacity_temp = x._capacity;
			pointer         buffer_temp = x._buffer;

			x._alloc = _alloc;
			x._size = _size;
			x._capacity = _capacity;
			x._buffer = _buffer;

			_alloc = alloc_temp;
			_size = size_temp;
			_capacity = capacity_temp;
			_buffer = buffer_temp;
		}

		void clear() {
			for (size_type i = 0; i < _size; i++) {
				_alloc.destroy(_buffer + i);
			}
			_size = 0;
		};

		/****
		** Allocator
		*/

		allocator_type get_allocator() const {
			return _alloc;
		};


	private:
		/********************/
		/* Helper Functions */

		void shrink_to_fit() {
			pointer temp = _alloc.allocate(_size);

			for (size_type i = 0; i < _size; i++) {
				_alloc.construct(temp + i, _buffer[i]);
				_alloc.destroy(_buffer + i);
			}
			_alloc.deallocate(_buffer, _capacity);

			_buffer = temp;
			_capacity = _size;
		};

		void push_back_no_construct () {
			if (_capacity == 0) {
				reserve(1);
			}
			else if (_capacity == _size) {
				reserve(_capacity * 2);
			}
			_size++;
		};

		/****************/
		/* Private Data */

		allocator_type  _alloc;
		size_type       _size;
		size_type       _capacity;
		pointer         _buffer;

};

}

#endif
