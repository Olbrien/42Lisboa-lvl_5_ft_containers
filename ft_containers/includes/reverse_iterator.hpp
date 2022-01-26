#ifndef REVERSE_ITERATOR_HPP
# define REVERSE_ITERATOR_HPP

#include <iostream>
#include "iterator_traits.hpp"

namespace ft {

template <class Iterator>
class reverse_iterator {
	public:
         /****************/
        /* Member Types */

		typedef ft::iterator_traits<Iterator>				traits_type;

		typedef Iterator									iterator_type;
		typedef typename traits_type::value_type			value_type;
		typedef typename traits_type::difference_type		difference_type;
		typedef typename traits_type::pointer				pointer;
		typedef typename traits_type::reference				reference;
		typedef typename traits_type::iterator_category		iterator_category;

		/********************/
		/* Member functions */

		/****
		** Constructors
		*/

		reverse_iterator() : _pointer(pointer())
		{};

		explicit
		reverse_iterator (iterator_type it) : _pointer(it)
		{};

		template <class Iter>
		reverse_iterator (const reverse_iterator<Iter> & rev_it) {
			_pointer = rev_it._pointer;
			*this = rev_it;
		};

		/****
		** Destructor
		*/

		~reverse_iterator()
		{};

		/****
		** Dereferences
		*/

		reference	operator*() const {
			return *_pointer;
		};

		pointer		operator->() const {
			return &(operator*());
		};

		reference	operator[](difference_type n) const {
			return base()[-n-1];
		};

		/****
		** Increment and Decrement Operators
		*/

		// ++ Prefix
		reverse_iterator & operator++() {
			--_pointer;
			return *this;
		};

		// Postfix ++
		reverse_iterator operator++(int) {
			reverse_iterator temp;
			temp._pointer = _pointer--;
			return temp;
		};

		// -- Prefix
		reverse_iterator & operator--() {
			++_pointer;
			return *this;
		};

		// Postfix --
		reverse_iterator operator--(int) {
			reverse_iterator temp;
			temp._pointer = _pointer++;
			return temp;
		};

		/****
		** Arithmetic Operators
		*/

		reverse_iterator operator+(difference_type n) {
			_pointer -= n;
			return *this;
		};

		reverse_iterator operator-(difference_type n) {
			_pointer += n;
			return *this;
		};

		difference_type operator-(const reverse_iterator & rhs) const {
			difference_type a =  rhs.base() - this->_pointer - 1;
			return (a);
		}

		/****
		** Assignment Operators
		*/

		reverse_iterator & operator+=(difference_type n) {
			_pointer -= n;
			return *this;
		};

		reverse_iterator & operator-=(difference_type n) {
			_pointer +=  n;
			return *this;
		};

		/****
		** Base
		*/

		iterator_type	base() const {
			return _pointer + 1;
		};



	private:
		pointer		_pointer;
};

/****
** Relational Operators
*/

template <typename IteratorL, typename IteratorR>
inline bool operator==(reverse_iterator<IteratorL> & lhs, reverse_iterator<IteratorR> & rhs) {
	return (lhs.base() == rhs.base());
};

template <typename Iterator>
inline bool operator==(reverse_iterator<Iterator> & lhs, reverse_iterator<Iterator> & rhs) {
	return (lhs.base() == rhs.base());
};

template <typename IteratorL, typename IteratorR>
inline bool operator!=(reverse_iterator<IteratorL> & lhs, reverse_iterator<IteratorR> & rhs) {
	return (lhs.base() != rhs.base());
};

template <typename Iterator>
inline bool operator!=(reverse_iterator<Iterator> & lhs, reverse_iterator<Iterator> & rhs) {
	return (lhs.base() != rhs.base());
};

template <typename IteratorL, typename IteratorR>
inline bool operator<(reverse_iterator<IteratorL> & lhs, reverse_iterator<IteratorR> & rhs) {
	return (lhs.base() > rhs.base());
};

template <typename Iterator>
inline bool operator<(reverse_iterator<Iterator> & lhs, reverse_iterator<Iterator> & rhs) {
	return (lhs.base() > rhs.base());
};

template <typename IteratorL, typename IteratorR>
inline bool operator<=(reverse_iterator<IteratorL> & lhs, reverse_iterator<IteratorR> & rhs) {
	return (lhs.base() >= rhs.base());
};

template <typename Iterator>
inline bool operator<=(reverse_iterator<Iterator> & lhs, reverse_iterator<Iterator> & rhs) {
	return (lhs.base() >= rhs.base());
};

template <typename IteratorL, typename IteratorR>
inline bool operator>(reverse_iterator<IteratorL> & lhs, reverse_iterator<IteratorR> & rhs) {
	return (lhs.base() < rhs.base());
};

template <typename Iterator>
inline bool operator>(reverse_iterator<Iterator> & lhs, reverse_iterator<Iterator> & rhs) {
	return (lhs.base() < rhs.base());
};

template <typename IteratorL, typename IteratorR>
inline bool operator>=(reverse_iterator<IteratorL> & lhs, reverse_iterator<IteratorR> & rhs) {
	return (lhs.base() <= rhs.base());
};

template <typename Iterator>
inline bool operator>=(reverse_iterator<Iterator> & lhs, reverse_iterator<Iterator> & rhs) {
	return (lhs.base() <= rhs.base());
};

/****
** Arithmetic Operators
*/

template <typename IteratorL, typename IteratorR>
inline typename reverse_iterator<IteratorL>::difference_type
operator-(const reverse_iterator<IteratorL> & lhs,
		  const reverse_iterator<IteratorR> & rhs )
{
	return (lhs.base() + rhs.base());
}

template <typename Iterator>
inline typename reverse_iterator<Iterator>::difference_type
operator-(const reverse_iterator<Iterator> & lhs,
		  const reverse_iterator<Iterator> & rhs )
{
	return (lhs.base() + rhs.base());
}

template <typename Iterator>
inline reverse_iterator<Iterator>
operator+(typename reverse_iterator<Iterator>::difference_type n,
		  const reverse_iterator<Iterator> & rhs)
{
	return (reverse_iterator<Iterator>(rhs.base() - n));
}

}

#endif
