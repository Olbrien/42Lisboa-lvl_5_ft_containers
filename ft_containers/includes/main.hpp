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
	void	member_types__iterator__relational_operators();
	void	member_types__iterator__dereferences();
	void	member_types__iterator__increment_decrement_operators();
	void	member_types__iterator__arithmetic_operators();
	//void	member_types__iterator__assignment_operators();

	void	member_functions__default_constructor();
	void	member_functions__fill_constructor();
	void	member_functions__range_constructor();
	void	member_functions__copy_constructor();
	void	member_functions__destructor();
	void	member_functions__operator_equal();

	void	member_functions__iterator__begin();
	void	member_functions__iterator__end();
	void	member_functions__iterator__rbegin();
	void	member_functions__iterator__rend();

	void	member_functions__capacity__size();
	void	member_functions__capacity__max_size();
	void	member_functions__capacity__resize();
	void	member_functions__capacity__capacity();
	void	member_functions__capacity__empty();
	void	member_functions__capacity__reserve();

	void	member_functions__element__operator_at_position();
	void	member_functions__element__at();
	void	member_functions__element__front();
	void	member_functions__element__back();

	void	member_functions__modifiers__assign();
	void	member_functions__modifiers__push_back();
	void	member_functions__modifiers__pop_back();
	void	member_functions__modifiers__insert();
	void	member_functions__modifiers__erase();
	void	member_functions__modifiers__swap();
	void	member_functions__modifiers__clear();

	void	member_functions__allocator__get_allocator();

	void	member_functions__overloads__relational_operators();
	void	member_functions__overloads__swap();
}

#endif
