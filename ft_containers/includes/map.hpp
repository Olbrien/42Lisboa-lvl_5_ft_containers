#ifndef MAP_HPP
# define MAP_HPP

#include <iostream>
#include "../includes/utils/utility.hpp"

namespace ft {

template < class Key, class T, class Compare = std::less<Key>,
		   class Alloc = std::allocator<ft::pair<const Key,T> > >
class map {
	public:
		/****************/
		/* Member Types */

		typedef Key									key_type;
		typedef T									mapped_type;
		typedef ft::pair<key_type, mapped_type>		value_type;
		typedef Compare								key_compare;
		typedef Alloc   							allocator_type;

		class value_compare : std::binary_function<value_type, value_type, bool> {
			private:
				friend class map;

			protected:
				Compare comp;
				value_compare (Compare c) : comp(c) {};

			public:
				typedef bool result_type;
				typedef value_type first_argument_type;
				typedef value_type second_argument_type;
				bool operator() (const value_type& x, const value_type& y) const {
					return comp(x.first, y.first);
				}
		};

	private:
};

}

#endif
