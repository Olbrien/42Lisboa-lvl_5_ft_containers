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

	if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__capacity__size(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__capacity__max_size(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__capacity__resize(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__capacity__capacity(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__capacity__empty(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__capacity__reserve(); return 0; }

	if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__element__operator_at_position(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__element__at(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__element__front(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__element__back(); return 0; }

	if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__modifiers__assign(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__modifiers__push_back(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__modifiers__pop_back(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__modifiers__insert(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__modifiers__erase(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__modifiers__swap(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__modifiers__clear(); return 0; }

	if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__allocator__get_allocator(); return 0; }

	if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__overloads__relational_operators(); return 0; }
	else if (!argument.compare("xx")) { header_text("vector"); testVector::member_functions__overloads__swap(); return 0; }

	return 1;
}
int		extras_argument(std::string argument) {
	if (!argument.compare("200")) { header_text("extras"); testExtras::extras__iterator_traits(); return 0; }
	else if (!argument.compare("201")) { header_text("extras"); testExtras::extras__enable_if(); return 0; }
	else if (!argument.compare("202")) { header_text("extras"); testExtras::extras__is_integral(); return 0; }

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
	std::cout << "*              size					      xx    *" << std::endl;
	std::cout << "*              max_size					      xx    *" << std::endl;
	std::cout << "*              resize					      xx    *" << std::endl;
	std::cout << "*              capacity					      xx    *" << std::endl;
	std::cout << "*              empty					      xx    *" << std::endl;
	std::cout << "*              reserve					      xx    *" << std::endl;
	std::cout << "*          Element Access:					    *" << std::endl;
	std::cout << "*              operator[]				      xx    *" << std::endl;
	std::cout << "*              at					      xx    *" << std::endl;
	std::cout << "*              front					      xx    *" << std::endl;
	std::cout << "*              back					      xx    *" << std::endl;
	std::cout << "*          Modifiers:						    *" << std::endl;
	std::cout << "*              assign					      xx    *" << std::endl;
	std::cout << "*              push_back				      xx    *" << std::endl;
	std::cout << "*              pop_back					      xx    *" << std::endl;
	std::cout << "*              insert					      xx    *" << std::endl;
	std::cout << "*              erase					      xx    *" << std::endl;
	std::cout << "*              swap					      xx    *" << std::endl;
	std::cout << "*              clear					      xx    *" << std::endl;
	std::cout << "*          Allocator:						    *" << std::endl;
	std::cout << "*              get_allocator				      xx    *" << std::endl;
	std::cout << "*          Non-member Function Overloads:			    *" << std::endl;
	std::cout << "*              relational operators			      xx    *" << std::endl;
	std::cout << "*              swap					      xx    *" << std::endl;
	std::cout << "*								    *" << std::endl;
	std::cout << "*  Extras:							    *" << std::endl;
	std::cout << "*      iterator_traits					     200    *" << std::endl;
	std::cout << "*      enable_if					     201    *" << std::endl;
	std::cout << "*      is_integral					     202    *" << std::endl;
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
	else if (extras_argument(argument) == 0)
		return 0;

	// no valid argument found
	welcome_message();
}
