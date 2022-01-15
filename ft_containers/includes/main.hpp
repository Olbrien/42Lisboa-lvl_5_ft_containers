#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <typeinfo>
#include <stdlib.h>

#ifndef FT
# define FT 1    // 0 == Tests the original containers
                 // 1 == Tests my containers
#endif

#if FT
	#include "../includes/vector.hpp"
#else
	#include <vector>
	namespace ft = std;
#endif

namespace testVector {
	void	member_types__value_type();
	void	member_types__allocator_type();
	void	member_types__reference();
	void	member_types__const_reference();
	void	member_types__pointer();
	void	member_types__const_pointer();
	void	member_types__difference_type();
	void	member_types__size_type();

	void	member_types__iterator__default_member_functions();
	//void	member_types__iterator__relational_operators();
	//void	member_types__iterator__dereferences();
	//void	member_types__iterator__increment_decrement_operators();
	//void	member_types__iterator__arithmetic_operators();
	//void	member_types__iterator__assignment_operators();
}

#endif
