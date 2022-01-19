#ifndef ITERATOR_HPP
# define ITERATOR_HPP

#include <iostream>

namespace ft {

template <class T>
class random_access_iterator {
	public:
		/****************/
		/* Member Types */
		typedef T                                            value_type;
		typedef std::ptrdiff_t                               difference_type;
		typedef T                                            *pointer;
		typedef T                                            &reference;
		typedef std::random_access_iterator_tag              iterator_category;

		/********************/
		/* Member functions */

		/****
		** Constructors
		*/

		random_access_iterator() :   _pointer(pointer())
		{};

		random_access_iterator(pointer ptr) :	_pointer(ptr)
		{};

		template <class S>
		random_access_iterator(const random_access_iterator<S> & rhs)
											:	_pointer(rhs.base())
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

		difference_type operator-(const random_access_iterator & rhs) const {
			return (_pointer - rhs.base());
		}

		/****
		** Assignment Operators
		*/

		random_access_iterator & operator+=(difference_type n) {
			_pointer += n;
			return *this;
		};

		random_access_iterator & operator-=(difference_type n) {
			_pointer -=  n;
			return *this;
		};

		/****
		** Base
		*/

		pointer		base() const {
			return _pointer;
		};

	private:
		pointer     _pointer;
};

/****
** Relational Operators
*/

template <typename IteratorL, typename IteratorR>
inline bool operator== (const random_access_iterator<IteratorL> & lhs,
		                const random_access_iterator<IteratorR> & rhs)
{
	return (lhs.base() == rhs.base());
}

template <typename Iterator>
inline bool operator== (const random_access_iterator<Iterator> & lhs,
		                const random_access_iterator<Iterator> & rhs)
{
	return (lhs.base() == rhs.base());
}

template <typename IteratorL, typename IteratorR>
inline bool operator!= (const random_access_iterator<IteratorL> & lhs,
		               const random_access_iterator<IteratorR> & rhs)
{
	return (lhs.base() != rhs.base());
}

template <typename Iterator>
inline bool operator!= (const random_access_iterator<Iterator> & lhs,
		   				const random_access_iterator<Iterator> & rhs)
{
	return (lhs.base() != rhs.base());
}

template <typename IteratorL, typename IteratorR>
inline bool operator< (const random_access_iterator<IteratorL> & lhs,
		   			  const random_access_iterator<IteratorR> & rhs)
{
	return (lhs.base() < rhs.base());
}

template <typename Iterator>
inline bool operator< (const random_access_iterator<Iterator> & lhs,
		   			  const random_access_iterator<Iterator> & rhs)
{
	return (lhs.base() < rhs.base());
}

template <typename IteratorL, typename IteratorR>
inline bool operator<= (const random_access_iterator<IteratorL> & lhs,
		   			  const random_access_iterator<IteratorR> & rhs)
{
	return (lhs.base() <= rhs.base());
}

template <typename Iterator>
inline bool operator<= (const random_access_iterator<Iterator> & lhs,
		   				const random_access_iterator<Iterator> & rhs)
{
	return (lhs.base() <= rhs.base());
}

template <typename IteratorL, typename IteratorR>
inline bool operator> (const random_access_iterator<IteratorL> & lhs,
		   				const random_access_iterator<IteratorR> & rhs)
{
	return (lhs.base() > rhs.base());
}

template <typename Iterator>
inline bool operator> (const random_access_iterator<Iterator> & lhs,
		   				const random_access_iterator<Iterator> & rhs)
{
	return (lhs.base() > rhs.base());
}

template <typename IteratorL, typename IteratorR>
inline bool operator>= (const random_access_iterator<IteratorL> & lhs,
						const random_access_iterator<IteratorR> & rhs)
{
	return (lhs.base() >= rhs.base());
}

template <typename Iterator>
inline bool operator>= (const random_access_iterator<Iterator> & lhs,
						const random_access_iterator<Iterator> & rhs)
{
	return (lhs.base() >= rhs.base());
}

/****
** Arithmetic Operators
*/

template <typename IteratorL, typename IteratorR>
inline typename random_access_iterator<IteratorL>::difference_type
operator-(const random_access_iterator<IteratorL> & lhs,
		  const random_access_iterator<IteratorR> & rhs )
{
	return (lhs.base() - rhs.base());
}

template <typename Iterator>
inline typename random_access_iterator<Iterator>::difference_type
operator-(const random_access_iterator<Iterator> & lhs,
		  const random_access_iterator<Iterator> & rhs )
{
	return (lhs.base() - rhs.base());
}

template <typename Iterator>
inline random_access_iterator<Iterator>
operator+(typename random_access_iterator<Iterator>::difference_type n,
		  const random_access_iterator<Iterator> & rhs)
{
	return (random_access_iterator<Iterator>(rhs.base() + n));
}


}


#endif
