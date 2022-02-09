#ifndef MAP_HPP
# define MAP_HPP

#include <iostream>
#include "../includes/utils/utility.hpp"

namespace ft {


template < class Key, class T, class Compare = std::less<Key>,
		   class Alloc = std::allocator<ft::pair<const Key,T> > >
class map {
		/****************/
		/* Member Types */

		typedef Key									key_type;						
		typedef T									mapped_type;
		typedef ft::pair<key_type, mapped_type>		value_type;
		typedef Compare								key_compare;
		typedef Alloc   							allocator_type;

		class value_compare : std::binary_function<value_type, value_type, bool> {

		};

};

}

#endif
