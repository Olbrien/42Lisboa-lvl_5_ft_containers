#ifndef ITERATOR_HPP
# define ITERATOR_HPP

#include <iostream>

namespace ft {

template <class iterator_tag, class T>
class random_access_iterator {
	public:
		/****************/
		/* Member Types */

		typedef T                                            value_type;
		typedef std::ptrdiff_t                               difference_type;
		typedef T                                            *pointer;
		typedef T                                            &reference;
		typedef iterator_tag                                 iterator_category;

		/********************/
		/* Member functions */

		/****
		** Constructors
		*/

		random_access_iterator() :   _pointer(pointer())
		{};

		random_access_iterator(pointer ptr) :   _pointer(ptr)
		{};

		random_access_iterator(const random_access_iterator & rhs) {
			_pointer = rhs._pointer;
			*this = rhs;
		};

		random_access_iterator & operator=(const random_access_iterator & rhs) {
			_pointer = rhs._pointer;
			return *this;
		};

		/****
		** Destructor
		*/

		~random_access_iterator()
		{};

		/****
		** Relational Operators
		*/

		bool operator==(const random_access_iterator & rhs) {	// Temp until I get to do const_iterator
			return (_pointer == rhs._pointer);
		};

		bool operator!=(const random_access_iterator & rhs) {	// Temp until I get to do const_iterator
			return (_pointer != rhs._pointer);
		};

		bool operator<(const random_access_iterator & rhs) {	// Temp until I get to do const_iterator
			return (_pointer < rhs._pointer);
		};

		bool operator<=(const random_access_iterator & rhs) {	// Temp until I get to do const_iterator
			return (_pointer <= rhs._pointer);
		};

		bool operator>(const random_access_iterator & rhs) {	// Temp until I get to do const_iterator
			return (_pointer > rhs._pointer);
		};

		bool operator>=(const random_access_iterator & rhs) {	// Temp until I get to do const_iterator
			return (_pointer >= rhs._pointer);
		};

		/****
		** Dereferences
		*/

		reference	operator*() const {
			return *_pointer;
		};

		pointer		operator->() const {
			return _pointer;
		};

		reference	operator[](difference_type n) const {
			return _pointer[n];
		};

		/****
		** Increment and Decrement Operators
		*/

		// ++ Prefix
		random_access_iterator operator++() {
			random_access_iterator temp;
			temp._pointer = ++_pointer;
			return temp;
		};

		// Postfix ++
		random_access_iterator operator++(int) {
			random_access_iterator temp;
			temp._pointer = _pointer++;
			return temp;
		};

		// -- Prefix
		random_access_iterator operator--() {
			random_access_iterator temp;
			temp._pointer = --_pointer;
			return temp;
		};

		// Postfix --
		random_access_iterator operator--(int) {
			random_access_iterator temp;
			temp._pointer = _pointer--;
			return temp;
		};

		/****
		** Arithmetic Operators
		*/

		random_access_iterator operator+(difference_type n) {
			return (_pointer + n);
		};

		random_access_iterator operator-(difference_type n) {
			return (_pointer - n);
		};

		difference_type operator-(const random_access_iterator & rhs)  {
			return (_pointer - rhs.base());
		}

		/****
		** Base
		*/

		pointer		base() const {
			return _pointer;
		};

	private:
		pointer     _pointer;
};

}


#endif
