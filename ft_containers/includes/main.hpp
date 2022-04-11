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
	#include "../includes/map.hpp"
	#include "../includes/stack.hpp"
	#include "../includes/utils/utility.hpp"
#else
	#include <vector>
	#include <map>
	#include <stack>
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
	void	member_types__iterator__assignment_operators();

	void	member_types__const_iterator__default_member_functions();
	void	member_types__const_iterator__relational_operators();
	void	member_types__const_iterator__dereferences();
	void	member_types__const_iterator__increment_decrement_operators();
	void	member_types__const_iterator__arithmetic_operators();
	void	member_types__const_iterator__assignment_operators();
	void	member_types__const_iterator__extras__iterator_to_const_iterator();

	void	member_types__reverse_iterator__default_member_functions();
	void	member_types__reverse_iterator__relational_operators();
	void	member_types__reverse_iterator__dereferences();
	void	member_types__reverse_iterator__increment_decrement_operators();
	void	member_types__reverse_iterator__arithmetic_operators();
	void	member_types__reverse_iterator__assignment_operators();
	void	member_types__reverse_iterator__base();

	void	member_types__const_reverse_iterator__default_member_functions();
	void	member_types__const_reverse_iterator__relational_operators();
	void	member_types__const_reverse_iterator__dereferences();
	void	member_types__const_reverse_iterator__increment_decrement_operators();
	void	member_types__const_reverse_iterator__arithmetic_operators();
	void	member_types__const_reverse_iterator__assignment_operators();
	void	member_types__const_reverse_iterator__base();
	void	member_types__const_reverse_iterator__extras__iterator_to_const_iterator();

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

	void	member_functions__modifiers__assign_range();
	void	member_functions__modifiers__assign_fill();
	void	member_functions__modifiers__push_back();
	void	member_functions__modifiers__pop_back();
	void	member_functions__modifiers__insert_single_element();
	void	member_functions__modifiers__insert_fill();
	void	member_functions__modifiers__insert_range();
	void	member_functions__modifiers__erase_position();
	void	member_functions__modifiers__erase_range();
	void	member_functions__modifiers__swap();
	void	member_functions__modifiers__clear();

	void	member_functions__allocator__get_allocator();

	void	member_functions__overloads__relational_operators();
	void	member_functions__overloads__swap();
}
namespace testMap {
	void	member_types__key_type();
	void	member_types__mapped_type();
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

	void	member_types__const_iterator__default_member_functions();
	void	member_types__const_iterator__relational_operators();
	void	member_types__const_iterator__dereferences();
	void	member_types__const_iterator__increment_decrement_operators();
	void	member_types__const_iterator__extras__iterator_to_const_iterator();

	void	member_types__reverse_iterator__default_member_functions();
	void	member_types__reverse_iterator__relational_operators();
	void	member_types__reverse_iterator__dereferences();
	void	member_types__reverse_iterator__increment_decrement_operators();

	void	member_types__const_reverse_iterator__default_member_functions();
	void	member_types__const_reverse_iterator__relational_operators();
	void	member_types__const_reverse_iterator__dereferences();
	void	member_types__const_reverse_iterator__increment_decrement_operators();
	void	member_types__const_reverse_iterator__extras__iterator_to_const_iterator();

	void	member_functions__empty_constructor();
	void	member_functions__range_constructor();
	void	member_functions__copy_constructor();
	void	member_functions__destructor();
	void	member_functions__operator_equal();

	void	member_functions__iterator__begin();
	void	member_functions__iterator__end();
	void	member_functions__iterator__rbegin();
	void	member_functions__iterator__rend();

	void	member_functions__capacity__empty();
	void	member_functions__capacity__size();
	void	member_functions__capacity__max_size();

	void	member_functions__element__operator_at_position();

	void	member_functions__modifiers__insert_single_element();
	void	member_functions__modifiers__insert_with_hint();
	void	member_functions__modifiers__insert_range();
	void	member_functions__modifiers__erase_position();
	void	member_functions__modifiers__erase_key();
	void	member_functions__modifiers__erase_range();
	void	member_functions__modifiers__swap();
	void	member_functions__modifiers__clear();

	void	member_functions__observers__key_comp();
	void	member_functions__observers__value_comp();

	void	member_functions__operations__find();
	void	member_functions__operations__count();
	void	member_functions__operations__lower_bound();
	void	member_functions__operations__upper_bound();
	void	member_functions__operations__equal_range();

	void	member_functions__allocator__get_allocator();
}
namespace testStack {
	void	member_types__value_type();
	void	member_types__container_type();
	void	member_types__size_type();

	void	member_functions__stack_constructor();
	void	member_functions__stack_empty();
	void	member_functions__stack_size();
	void	member_functions__stack_top();
	void	member_functions__stack_push();
	// void	member_functions__stack_pop();

	// void	member_functions__overloads__relational_operators();
}

namespace testExtras {
	void	extras__iterator_traits();
	void	extras__enable_if();
	void	extras__is_integral();
	void	extras__equal();
	void	extras__lexicographical_compare();
	void	extras__pair();
	void	extras__make_pair();
}
namespace testAnything {
	void	anything__tests();
}

#endif
