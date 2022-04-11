#include "../../../includes/main.hpp"

void	testStack::member_types__value_type() {
			std::cout << "Value Type: " << std::endl << std::endl;

	ft::stack<std::string, ft::vector<std::string> >::value_type stackA_value;
	ft::stack<int>::value_type stackB_value;
	ft::stack<double, ft::vector<std::string> >::value_type stackC_value;

			std::cout << "  stack<std::string, ft::vector<std::string>>::value_type stackA_value;"
					  << std::endl;
			std::cout << "  stack<int>::value_type stackB_value;" << std::endl;
			std::cout << "  stack<double, ft::vector<std::string> >::value_type stackC_value;" << std::endl
																					   << std::endl;

			std::cout << "      typeid(stackA_value).name()  is	" << typeid(stackA_value).name()
																  << std::endl;
			std::cout << "      typeid(stackB_value).name() is	" << typeid(stackB_value).name()
																  << std::endl;
			std::cout << "      typeid(stackC_value).name() is	" << typeid(stackC_value).name()
																  << std::endl << std::endl;
}
void	testStack::member_types__container_type() {
			std::cout << "Container Type: " << std::endl << std::endl;

	ft::stack<std::string, ft::vector<std::string> >::container_type stackA_value;
	ft::stack<int>::container_type stackB_value;
	ft::stack<double, ft::vector<std::string> >::container_type stackC_value;

			std::cout << "  stack<std::string, ft::vector<std::string>>::container_type stackA_value;"
					  << std::endl;
			std::cout << "  stack<int>::container_type stackB_value;" << std::endl;
			std::cout << "  stack<double, ft::vector<std::string> >::container_type stackC_value;" << std::endl
																					   << std::endl;

			std::cout << "      typeid(stackA_value).name()  is	" << typeid(stackA_value).name()
																  << std::endl;
			std::cout << "      typeid(stackB_value).name() is	" << typeid(stackB_value).name()
																  << std::endl;
			std::cout << "      typeid(stackC_value).name() is	" << typeid(stackC_value).name()
																  << std::endl << std::endl;

}
void	testStack::member_types__size_type() {
			std::cout << "Size Type: " << std::endl << std::endl;

	ft::stack<std::string, ft::vector<std::string> >::size_type stackA_size;

			std::cout << "  stack<std::string, ft::vector<std::string> >::size_type stackA_size;" << std::endl << std::endl;

	stackA_size = 2;

			std::cout << "  stackA_size = 2;" << std::endl << std::endl;
			std::cout << "      stackA_size is			" << stackA_size << std::endl << std::endl;

	stackA_size = -2;

			std::cout << "  stackA_size = -2;" << std::endl << std::endl;
			std::cout << "      stackA_size is			" << stackA_size << std::endl;
			std::cout << std::endl;

}
