#include "../includes/main.hpp"

void	header_text(std::string str) {
	if (!str.compare("vector")) {
		std::cout << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
		std::cout << "				Vector				" << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
	}
	else if (!str.compare("map")) {
		std::cout << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
		std::cout << "				Map				" << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
	}
	else if (!str.compare("stack")) {
		std::cout << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
		std::cout << "				Stack				" << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
	}
	else if (!str.compare("extras")) {
		std::cout << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
		std::cout << "				Extras				" << std::endl;
		std::cout << "*********************************************************************"
				<< std::endl;
	}
}

int		vector_argument(std::string argument) {
	if (!argument.compare("0")) { header_text("vector"); testVector::member_types__value_type();	return 0; }
	else if (!argument.compare("1")) { header_text("vector"); testVector::member_types__allocator_type(); return 0; }
	else if (!argument.compare("2")) {	header_text("vector"); testVector::member_types__reference(); return 0; }
	else if (!argument.compare("3")) { header_text("vector"); testVector::member_types__const_reference(); return 0;	}
	else if (!argument.compare("4")) { header_text("vector"); testVector::member_types__pointer(); return 0; }
	else if (!argument.compare("5")) { header_text("vector"); testVector::member_types__const_pointer();	return 0; }
	else if (!argument.compare("6")) { header_text("vector"); testVector::member_types__difference_type(); return 0;	}
	else if (!argument.compare("7")) { header_text("vector"); testVector::member_types__size_type(); return 0; }

	if (!argument.compare("8")) { header_text("vector"); testVector::member_types__iterator__default_member_functions(); return 0; }
	else if (!argument.compare("9")) { header_text("vector"); testVector::member_types__iterator__relational_operators(); return 0; }
	else if (!argument.compare("10")) { header_text("vector"); testVector::member_types__iterator__dereferences(); return 0; }
	else if (!argument.compare("11")) { header_text("vector"); testVector::member_types__iterator__increment_decrement_operators(); return 0; }
	else if (!argument.compare("12")) { header_text("vector"); testVector::member_types__iterator__arithmetic_operators(); return 0; }
	else if (!argument.compare("13")) { header_text("vector"); testVector::member_types__iterator__assignment_operators(); return 0; }

	if (!argument.compare("14")) { header_text("vector"); testVector::member_types__const_iterator__default_member_functions(); return 0; }
	else if (!argument.compare("15")) { header_text("vector"); testVector::member_types__const_iterator__relational_operators(); return 0; }
	else if (!argument.compare("16")) { header_text("vector"); testVector::member_types__const_iterator__dereferences(); return 0; }
	else if (!argument.compare("17")) { header_text("vector"); testVector::member_types__const_iterator__increment_decrement_operators(); return 0; }
	else if (!argument.compare("18")) { header_text("vector"); testVector::member_types__const_iterator__arithmetic_operators(); return 0; }
	else if (!argument.compare("19")) { header_text("vector"); testVector::member_types__const_iterator__assignment_operators(); return 0; }
	else if (!argument.compare("20")) { header_text("vector"); testVector::member_types__const_iterator__extras__iterator_to_const_iterator(); return 0; }

	if (!argument.compare("21")) { header_text("vector"); testVector::member_types__reverse_iterator__default_member_functions(); return 0; }
	else if (!argument.compare("22")) { header_text("vector"); testVector::member_types__reverse_iterator__relational_operators(); return 0; }
	else if (!argument.compare("23")) { header_text("vector"); testVector::member_types__reverse_iterator__dereferences(); return 0; }
	else if (!argument.compare("24")) { header_text("vector"); testVector::member_types__reverse_iterator__increment_decrement_operators(); return 0; }
	else if (!argument.compare("25")) { header_text("vector"); testVector::member_types__reverse_iterator__arithmetic_operators(); return 0; }
	else if (!argument.compare("26")) { header_text("vector"); testVector::member_types__reverse_iterator__assignment_operators(); return 0; }
	else if (!argument.compare("27")) { header_text("vector"); testVector::member_types__reverse_iterator__base(); return 0; }

	if (!argument.compare("28")) { header_text("vector"); testVector::member_types__const_reverse_iterator__default_member_functions(); return 0; }
	else if (!argument.compare("29")) { header_text("vector"); testVector::member_types__const_reverse_iterator__relational_operators(); return 0; }
	else if (!argument.compare("30")) { header_text("vector"); testVector::member_types__const_reverse_iterator__dereferences(); return 0; }
	else if (!argument.compare("31")) { header_text("vector"); testVector::member_types__const_reverse_iterator__increment_decrement_operators(); return 0; }
	else if (!argument.compare("32")) { header_text("vector"); testVector::member_types__const_reverse_iterator__arithmetic_operators(); return 0; }
	else if (!argument.compare("33")) { header_text("vector"); testVector::member_types__const_reverse_iterator__assignment_operators(); return 0; }
	else if (!argument.compare("34")) { header_text("vector"); testVector::member_types__const_reverse_iterator__base(); return 0; }
	else if (!argument.compare("35")) { header_text("vector"); testVector::member_types__const_reverse_iterator__extras__iterator_to_const_iterator(); return 0; }

	if (!argument.compare("36")) { header_text("vector"); testVector::member_functions__default_constructor(); return 0; }
	else if (!argument.compare("37")) { header_text("vector"); testVector::member_functions__fill_constructor(); return 0; }
	else if (!argument.compare("38")) { header_text("vector"); testVector::member_functions__range_constructor(); return 0; }
	else if (!argument.compare("39")) { header_text("vector"); testVector::member_functions__copy_constructor(); return 0; }
	else if (!argument.compare("40")) { header_text("vector"); testVector::member_functions__destructor(); return 0; }
	else if (!argument.compare("41")) { header_text("vector"); testVector::member_functions__operator_equal(); return 0; }

	if (!argument.compare("42")) { header_text("vector"); testVector::member_functions__iterator__begin(); return 0; }
	else if (!argument.compare("43")) { header_text("vector"); testVector::member_functions__iterator__end(); return 0; }
	else if (!argument.compare("44")) { header_text("vector"); testVector::member_functions__iterator__rbegin(); return 0; }
	else if (!argument.compare("45")) { header_text("vector"); testVector::member_functions__iterator__rend(); return 0; }

	if (!argument.compare("46")) { header_text("vector"); testVector::member_functions__capacity__size(); return 0; }
	else if (!argument.compare("47")) { header_text("vector"); testVector::member_functions__capacity__max_size(); return 0; }
	else if (!argument.compare("48")) { header_text("vector"); testVector::member_functions__capacity__resize(); return 0; }
	else if (!argument.compare("49")) { header_text("vector"); testVector::member_functions__capacity__capacity(); return 0; }
	else if (!argument.compare("50")) { header_text("vector"); testVector::member_functions__capacity__empty(); return 0; }
	else if (!argument.compare("51")) { header_text("vector"); testVector::member_functions__capacity__reserve(); return 0; }

	if (!argument.compare("52")) { header_text("vector"); testVector::member_functions__element__operator_at_position(); return 0; }
	else if (!argument.compare("53")) { header_text("vector"); testVector::member_functions__element__at(); return 0; }
	else if (!argument.compare("54")) { header_text("vector"); testVector::member_functions__element__front(); return 0; }
	else if (!argument.compare("55")) { header_text("vector"); testVector::member_functions__element__back(); return 0; }

	if (!argument.compare("56")) { header_text("vector"); testVector::member_functions__modifiers__assign_range(); return 0; }
	else if (!argument.compare("57")) { header_text("vector"); testVector::member_functions__modifiers__assign_fill(); return 0; }
	else if (!argument.compare("58")) { header_text("vector"); testVector::member_functions__modifiers__push_back(); return 0; }
	else if (!argument.compare("59")) { header_text("vector"); testVector::member_functions__modifiers__pop_back(); return 0; }
	else if (!argument.compare("60")) { header_text("vector"); testVector::member_functions__modifiers__insert_single_element(); return 0; }
	else if (!argument.compare("61")) { header_text("vector"); testVector::member_functions__modifiers__insert_fill(); return 0; }
	else if (!argument.compare("62")) { header_text("vector"); testVector::member_functions__modifiers__insert_range(); return 0; }
	else if (!argument.compare("63")) { header_text("vector"); testVector::member_functions__modifiers__erase_position(); return 0; }
	else if (!argument.compare("64")) { header_text("vector"); testVector::member_functions__modifiers__erase_range(); return 0; }
	else if (!argument.compare("65")) { header_text("vector"); testVector::member_functions__modifiers__swap(); return 0; }
	else if (!argument.compare("66")) { header_text("vector"); testVector::member_functions__modifiers__clear(); return 0; }

	if (!argument.compare("67")) { header_text("vector"); testVector::member_functions__allocator__get_allocator(); return 0; }

	if (!argument.compare("68")) { header_text("vector"); testVector::member_functions__overloads__relational_operators(); return 0; }
	else if (!argument.compare("69")) { header_text("vector"); testVector::member_functions__overloads__swap(); return 0; }

	return 1;
}
int		map_argument(std::string argument) {
	if (!argument.compare("70")) { header_text("map"); testMap::member_types__key_type();	return 0; }
	else if (!argument.compare("71")) { header_text("map"); testMap::member_types__mapped_type();	return 0; }
	else if (!argument.compare("72")) { header_text("map"); testMap::member_types__value_type();	return 0; }
	else if (!argument.compare("73")) { header_text("map"); testMap::member_types__allocator_type(); return 0; }
	else if (!argument.compare("74")) {	header_text("map"); testMap::member_types__reference(); return 0; }
	else if (!argument.compare("75")) { header_text("map"); testMap::member_types__const_reference(); return 0;	}
	else if (!argument.compare("76")) { header_text("map"); testMap::member_types__pointer(); return 0; }
	else if (!argument.compare("77")) { header_text("map"); testMap::member_types__const_pointer();	return 0; }
	else if (!argument.compare("78")) { header_text("map"); testMap::member_types__difference_type(); return 0;	}
	else if (!argument.compare("79")) { header_text("map"); testMap::member_types__size_type(); return 0; }

	if (!argument.compare("80")) { header_text("map"); testMap::member_types__iterator__default_member_functions(); return 0; }
	else if (!argument.compare("81")) { header_text("map"); testMap::member_types__iterator__relational_operators(); return 0; }
	else if (!argument.compare("82")) { header_text("map"); testMap::member_types__iterator__dereferences(); return 0; }
	else if (!argument.compare("83")) { header_text("map"); testMap::member_types__iterator__increment_decrement_operators(); return 0; }

	if (!argument.compare("84")) { header_text("map"); testMap::member_types__const_iterator__default_member_functions(); return 0; }
	else if (!argument.compare("85")) { header_text("map"); testMap::member_types__const_iterator__relational_operators(); return 0; }
	else if (!argument.compare("86")) { header_text("map"); testMap::member_types__const_iterator__dereferences(); return 0; }
	else if (!argument.compare("87")) { header_text("map"); testMap::member_types__const_iterator__increment_decrement_operators(); return 0; }
	else if (!argument.compare("88")) { header_text("map"); testMap::member_types__const_iterator__extras__iterator_to_const_iterator(); return 0; }

	// if (!argument.compare("89")) { header_text("map"); testMap::member_types__reverse_iterator__default_member_functions(); return 0; }
	// else if (!argument.compare("90")) { header_text("map"); testMap::member_types__reverse_iterator__relational_operators(); return 0; }
	// else if (!argument.compare("91")) { header_text("map"); testMap::member_types__reverse_iterator__dereferences(); return 0; }
	// else if (!argument.compare("92")) { header_text("map"); testMap::member_types__reverse_iterator__increment_decrement_operators(); return 0; }
	// else if (!argument.compare("93")) { header_text("map"); testMap::member_types__reverse_iterator__arithmetic_operators(); return 0; }
	// else if (!argument.compare("94")) { header_text("map"); testMap::member_types__reverse_iterator__assignment_operators(); return 0; }
	// else if (!argument.compare("95")) { header_text("map"); testMap::member_types__reverse_iterator__base(); return 0; }

	// if (!argument.compare("96")) { header_text("map"); testMap::member_types__const_reverse_iterator__default_member_functions(); return 0; }
	// else if (!argument.compare("97")) { header_text("map"); testMap::member_types__const_reverse_iterator__relational_operators(); return 0; }
	// else if (!argument.compare("98")) { header_text("map"); testMap::member_types__const_reverse_iterator__dereferences(); return 0; }
	// else if (!argument.compare("99")) { header_text("map"); testMap::member_types__const_reverse_iterator__increment_decrement_operators(); return 0; }
	// else if (!argument.compare("100")) { header_text("map"); testMap::member_types__const_reverse_iterator__arithmetic_operators(); return 0; }
	// else if (!argument.compare("101")) { header_text("map"); testMap::member_types__const_reverse_iterator__assignment_operators(); return 0; }
	// else if (!argument.compare("102")) { header_text("map"); testMap::member_types__const_reverse_iterator__base(); return 0; }
	// else if (!argument.compare("103")) { header_text("map"); testMap::member_types__const_reverse_iterator__extras__iterator_to_const_iterator(); return 0; }

	// if (!argument.compare("104")) { header_text("map"); testMap::member_functions__default_constructor(); return 0; }
	// else if (!argument.compare("105")) { header_text("map"); testMap::member_functions__range_constructor(); return 0; }
	// else if (!argument.compare("106")) { header_text("map"); testMap::member_functions__copy_constructor(); return 0; }
	// else if (!argument.compare("107")) { header_text("map"); testMap::member_functions__destructor(); return 0; }
	// else if (!argument.compare("108")) { header_text("map"); testMap::member_functions__operator_equal(); return 0; }

	if (!argument.compare("109")) { header_text("map"); testMap::member_functions__iterator__begin(); return 0; }
	else if (!argument.compare("110")) { header_text("map"); testMap::member_functions__iterator__end(); return 0; }
	// else if (!argument.compare("111")) { header_text("map"); testMap::member_functions__iterator__rbegin(); return 0; }
	// else if (!argument.compare("112")) { header_text("map"); testMap::member_functions__iterator__rend(); return 0; }

	// if (!argument.compare("113")) { header_text("map"); testMap::member_functions__capacity__empty(); return 0; }
	// else if (!argument.compare("114")) { header_text("map"); testMap::member_functions__capacity__size(); return 0; }
	// else if (!argument.compare("115")) { header_text("map"); testMap::member_functions__capacity__max_size(); return 0; }

	// if (!argument.compare("116")) { header_text("map"); testMap::member_functions__element__operator_at_position(); return 0; }

	// if (!argument.compare("117")) { header_text("map"); testMap::member_functions__modifiers__insert_single_element(); return 0; }
	// else if (!argument.compare("118")) { header_text("map"); testMap::member_functions__modifiers__insert_with_hint(); return 0; }
	// else if (!argument.compare("119")) { header_text("map"); testMap::member_functions__modifiers__insert_range(); return 0; }
	// else if (!argument.compare("120")) { header_text("map"); testMap::member_functions__modifiers__insert_initializer_list(); return 0; }
	// else if (!argument.compare("121")) { header_text("map"); testMap::member_functions__modifiers__erase(); return 0; }
	// else if (!argument.compare("122")) { header_text("map"); testMap::member_functions__modifiers__swap(); return 0; }
	// else if (!argument.compare("123")) { header_text("map"); testMap::member_functions__modifiers__clear(); return 0; }

	// if (!argument.compare("124")) { header_text("map"); testMap::member_functions__observers__key_comp(); return 0; }
	// else if (!argument.compare("125")) { header_text("map"); testMap::member_functions__observers__value_comp(); return 0; }

	// if (!argument.compare("126")) { header_text("map"); testMap::member_functions__operations__find(); return 0; }
	// else if (!argument.compare("127")) { header_text("map"); testMap::member_functions__operations__count(); return 0; }
	// else if (!argument.compare("128")) { header_text("map"); testMap::member_functions__operations__lower_bound(); return 0; }
	// else if (!argument.compare("129")) { header_text("map"); testMap::member_functions__operations__upper_bound(); return 0; }
	// else if (!argument.compare("130")) { header_text("map"); testMap::member_functions__operations__equal_range(); return 0; }

	// if (!argument.compare("131")) { header_text("map"); testMap::member_functions__allocator__get_allocator(); return 0; }

	return 1;
}
int		extras_argument(std::string argument) {
	if (!argument.compare("200")) { header_text("extras"); testExtras::extras__iterator_traits(); return 0; }
	else if (!argument.compare("201")) { header_text("extras"); testExtras::extras__enable_if(); return 0; }
	else if (!argument.compare("202")) { header_text("extras"); testExtras::extras__is_integral(); return 0; }
	else if (!argument.compare("203")) { header_text("extras"); testExtras::extras__equal(); return 0; }
	else if (!argument.compare("204")) { header_text("extras"); testExtras::extras__lexicographical_compare(); return 0; }
	else if (!argument.compare("205")) { header_text("extras"); testExtras::extras__pair(); return 0; }
	else if (!argument.compare("206")) { header_text("extras"); testExtras::extras__make_pair(); return 0; }

	return 1;
}

void	welcome_message() {
	std::cout << std::endl;
	std::cout << "*********************************************************************"
				<< std::endl;
	if (FT == 0)
		std::cout << "*		Welcome to the std::container tester!		    *" << std::endl;
	else if (FT == 1)
		std::cout << "*		Welcome to the ft::container tester!		    *" << std::endl;
	std::cout << "*								    *" << std::endl;
	std::cout << "*  To use the tester you have to run the binary with one of the     *"
				<< std::endl;
	std::cout << "*  following arguments.						    *"
				<< std::endl;
	std::cout << "*								    *" << std::endl;
	std::cout << "*  Vectors:							    *" << std::endl;
	std::cout << "*      Member Types:						    *" << std::endl;
	std::cout << "*          value_type					      0     *" << std::endl;
	std::cout << "*          allocator_type				      1     *" << std::endl;
	std::cout << "*          reference					      2     *" << std::endl;
	std::cout << "*          const_reference				      3     *" << std::endl;
	std::cout << "*          pointer					      4     *" << std::endl;
	std::cout << "*          const_pointer				      5     *" << std::endl;
	std::cout << "*          difference_type				      6     *" << std::endl;
	std::cout << "*          size_type					      7     *" << std::endl;
	std::cout << "*          iterator:						    *" << std::endl;
	std::cout << "*              Default Member Functions			      8     *" << std::endl;
	std::cout << "*              Relational Operators			      9     *" << std::endl;
	std::cout << "*              Dereferences				      10    *" << std::endl;
	std::cout << "*              Increment and Decrement Operators	      11    *" << std::endl;
	std::cout << "*              Arithmetic Operators			      12    *" << std::endl;
	std::cout << "*              Assigment Operators			      13    *" << std::endl;
	std::cout << "*          const_iterator:					    *" << std::endl;
	std::cout << "*              Default Member Functions			      14    *" << std::endl;
	std::cout << "*              Relational Operators			      15    *" << std::endl;
	std::cout << "*              Dereferences				      16    *" << std::endl;
	std::cout << "*              Increment and Decrement Operators	      17    *" << std::endl;
	std::cout << "*              Arithmetic Operators			      18    *" << std::endl;
	std::cout << "*              Assigment Operators			      19    *" << std::endl;
	std::cout << "*              Extras:						    *" << std::endl;
	std::cout << "*                  Iterator With Const Iterator		      20    *" << std::endl;
	std::cout << "*          reverse_iterator:					    *" << std::endl;
	std::cout << "*              Default Member Functions			      21    *" << std::endl;
	std::cout << "*              Relational Operators			      22    *" << std::endl;
	std::cout << "*              Dereferences				      23    *" << std::endl;
	std::cout << "*              Increment and Decrement Operators	      24    *" << std::endl;
	std::cout << "*              Arithmetic Operators			      25    *" << std::endl;
	std::cout << "*              Assigment Operators			      26    *" << std::endl;
	std::cout << "*              base					      27    *" << std::endl;
	std::cout << "*          const_reverse_iterator:				    *" << std::endl;
	std::cout << "*              Default Member Functions			      28    *" << std::endl;
	std::cout << "*              Relational Operators			      29    *" << std::endl;
	std::cout << "*              Dereferences				      30    *" << std::endl;
	std::cout << "*              Increment and Decrement Operators	      31    *" << std::endl;
	std::cout << "*              Arithmetic Operators			      32    *" << std::endl;
	std::cout << "*              Assigment Operators			      33    *" << std::endl;
	std::cout << "*              base					      34    *" << std::endl;
	std::cout << "*              Extras:						    *" << std::endl;
	std::cout << "*                  Reverse It With Const Reverse It	      35    *" << std::endl;
	std::cout << "*								    *" << std::endl;
	std::cout << "*      Member Functions:					    *" << std::endl;
	std::cout << "*          Default:						    *" << std::endl;
	std::cout << "*              default constructor			      36    *" << std::endl;
	std::cout << "*              fill constructor				      37    *" << std::endl;
	std::cout << "*              range constructor			      38    *" << std::endl;
	std::cout << "*              copy constructor				      39    *" << std::endl;
	std::cout << "*              destructor				      40    *" << std::endl;
	std::cout << "*              operator=				      41    *" << std::endl;
	std::cout << "*          Iterators:						    *" << std::endl;
	std::cout << "*              begin					      42    *" << std::endl;
	std::cout << "*              end					      43    *" << std::endl;
	std::cout << "*              rbegin					      44    *" << std::endl;
	std::cout << "*              rend					      45    *" << std::endl;
	std::cout << "*          Capacity:						    *" << std::endl;
	std::cout << "*              size					      46    *" << std::endl;
	std::cout << "*              max_size					      47    *" << std::endl;
	std::cout << "*              resize					      48    *" << std::endl;
	std::cout << "*              capacity					      49    *" << std::endl;
	std::cout << "*              empty					      50    *" << std::endl;
	std::cout << "*              reserve					      51    *" << std::endl;
	std::cout << "*          Element Access:					    *" << std::endl;
	std::cout << "*              operator[]				      52    *" << std::endl;
	std::cout << "*              at					      53    *" << std::endl;
	std::cout << "*              front					      54    *" << std::endl;
	std::cout << "*              back					      55    *" << std::endl;
	std::cout << "*          Modifiers:						    *" << std::endl;
	std::cout << "*              assign:					            *" << std::endl;
	std::cout << "*                  range				      56    *" << std::endl;
	std::cout << "*                  fill					      57    *" << std::endl;
	std::cout << "*              push_back				      58    *" << std::endl;
	std::cout << "*              pop_back					      59    *" << std::endl;
	std::cout << "*              insert:					            *" << std::endl;
	std::cout << "*                  single element			      60    *" << std::endl;
	std::cout << "*                  fill					      61    *" << std::endl;
	std::cout << "*                  range				      62    *" << std::endl;
	std::cout << "*              erase:					            *" << std::endl;
	std::cout << "*                  position				      63    *" << std::endl;
	std::cout << "*                  range				      64    *" << std::endl;
	std::cout << "*              swap					      65    *" << std::endl;
	std::cout << "*              clear					      66    *" << std::endl;
	std::cout << "*          Allocator:						    *" << std::endl;
	std::cout << "*              get_allocator				      67    *" << std::endl;
	std::cout << "*          Non-member Function Overloads:			    *" << std::endl;
	std::cout << "*              relational operators			      68    *" << std::endl;
	std::cout << "*              swap					      69    *" << std::endl;
	std::cout << "*								    *" << std::endl;
	std::cout << "*  Map:								    *" << std::endl;
	std::cout << "*      Member Types:						    *" << std::endl;
	std::cout << "*          key_type					      70    *" << std::endl;
	std::cout << "*          mapped_type					      71    *" << std::endl;
	std::cout << "*          value_type					      72    *" << std::endl;
	std::cout << "*          allocator_type				      73    *" << std::endl;
	std::cout << "*          reference					      74    *" << std::endl;
	std::cout << "*          const_reference				      75    *" << std::endl;
	std::cout << "*          pointer					      76    *" << std::endl;
	std::cout << "*          const_pointer				      77    *" << std::endl;
	std::cout << "*          difference_type				      78    *" << std::endl;
	std::cout << "*          size_type					      79    *" << std::endl;
	std::cout << "*          iterator:						    *" << std::endl;
	std::cout << "*              Default Member Functions			      80    *" << std::endl;
	std::cout << "*              Relational Operators			      81    *" << std::endl;
	std::cout << "*              Dereferences				      82    *" << std::endl;
	std::cout << "*              Increment and Decrement Operators	      83    *" << std::endl;
	std::cout << "*          const_iterator:					    *" << std::endl;
	std::cout << "*              Default Member Functions			      84    *" << std::endl;
	std::cout << "*              Relational Operators			      85    *" << std::endl;
	std::cout << "*              Dereferences				      86    *" << std::endl;
	std::cout << "*              Increment and Decrement Operators	      87    *" << std::endl;
	std::cout << "*              Extras:						    *" << std::endl;
	std::cout << "*                  Iterator With Const Iterator		      88    *" << std::endl;
	std::cout << "*          reverse_iterator:					    *" << std::endl;
	std::cout << "*              Default Member Functions			      89    *" << std::endl;
	std::cout << "*              Relational Operators			      90    *" << std::endl;
	std::cout << "*              Dereferences				      91    *" << std::endl;
	std::cout << "*              Increment and Decrement Operators	      92    *" << std::endl;
	std::cout << "*              Arithmetic Operators			      93    *" << std::endl;
	std::cout << "*              Assigment Operators			      94    *" << std::endl;
	std::cout << "*              base					      95    *" << std::endl;
	std::cout << "*          const_reverse_iterator:				    *" << std::endl;
	std::cout << "*              Default Member Functions			      96    *" << std::endl;
	std::cout << "*              Relational Operators			      97    *" << std::endl;
	std::cout << "*              Dereferences				      98    *" << std::endl;
	std::cout << "*              Increment and Decrement Operators	      99    *" << std::endl;
	std::cout << "*              Arithmetic Operators			     100    *" << std::endl;
	std::cout << "*              Assigment Operators			     101    *" << std::endl;
	std::cout << "*              base					     102    *" << std::endl;
	std::cout << "*              Extras:						    *" << std::endl;
	std::cout << "*                  Reverse It With Const Reverse It	     103    *" << std::endl;
	std::cout << "*								    *" << std::endl;
	std::cout << "*      Member Functions:					    *" << std::endl;
	std::cout << "*          Default:						    *" << std::endl;
	std::cout << "*              default constructor			     104    *" << std::endl;
	std::cout << "*              range constructor			     105    *" << std::endl;
	std::cout << "*              copy constructor				     106    *" << std::endl;
	std::cout << "*              destructor				     107    *" << std::endl;
	std::cout << "*              operator=				     108    *" << std::endl;
	std::cout << "*          Iterators:						    *" << std::endl;
	std::cout << "*              begin					     109    *" << std::endl;
	std::cout << "*              end					     110    *" << std::endl;
	std::cout << "*              rbegin					     111    *" << std::endl;
	std::cout << "*              rend					     112    *" << std::endl;
	std::cout << "*          Capacity:						    *" << std::endl;
	std::cout << "*              empty					     113    *" << std::endl;
	std::cout << "*              size					     114    *" << std::endl;
	std::cout << "*              max_size					     115    *" << std::endl;
	std::cout << "*          Element Access:					    *" << std::endl;
	std::cout << "*              operator[]				     116    *" << std::endl;
	std::cout << "*          Modifiers:						    *" << std::endl;
	std::cout << "*              insert:					            *" << std::endl;
	std::cout << "*                  single element			     117    *" << std::endl;
	std::cout << "*                  with hint				     118    *" << std::endl;
	std::cout << "*                  range				     119    *" << std::endl;
	std::cout << "*                  initializer_list			     120    *" << std::endl;
	std::cout << "*              erase					     121    *" << std::endl;
	std::cout << "*              swap					     122    *" << std::endl;
	std::cout << "*              clear					     123    *" << std::endl;
	std::cout << "*          observers:						    *" << std::endl;
	std::cout << "*              key_comp					     124    *" << std::endl;
	std::cout << "*              value_comp				     125    *" << std::endl;
	std::cout << "*          operations:						    *" << std::endl;
	std::cout << "*              find					     126    *" << std::endl;
	std::cout << "*              count					     127    *" << std::endl;
	std::cout << "*              lower_bound				     128    *" << std::endl;
	std::cout << "*              upper_bound				     129    *" << std::endl;
	std::cout << "*              equal_range				     130    *" << std::endl;
	std::cout << "*          Allocator:						    *" << std::endl;
	std::cout << "*              get_allocator				     131    *" << std::endl;
	std::cout << "*								    *" << std::endl;
	std::cout << "*  Extras:							    *" << std::endl;
	std::cout << "*      iterator_traits					     200    *" << std::endl;
	std::cout << "*      enable_if					     201    *" << std::endl;
	std::cout << "*      is_integral					     202    *" << std::endl;
	std::cout << "*      equal						     203    *" << std::endl;
	std::cout << "*      lexicographical_compare				     204    *" << std::endl;
	std::cout << "*      pair						     205    *" << std::endl;
	std::cout << "*      make_pair					     206    *" << std::endl;
	std::cout << "*								    *" << std::endl;
	std::cout << "*********************************************************************"
				<< std::endl;

	std::cout << std::endl;

}

int		main(int argc, char **argv) {
	// if no argument
	if (argc != 2) {
		welcome_message();
		return 0;
	}

	// trying to find matching argument
	std::string argument = std::string(argv[1]);
	if (vector_argument(argument) == 0)
		return 0;
	else if (map_argument(argument) == 0)
		return 0;
	else if (extras_argument(argument) == 0)
		return 0;

	// no valid argument found
	welcome_message();
}
