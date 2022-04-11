#include "../../../includes/main.hpp"

void	testStack::member_functions__stack_constructor() {
		std::cout << "Stack Constructor:" << std::endl << std::endl;

	ft::stack<std::string> stackA(ft::vector<std::string>);
	ft::stack<int> 		   stackB(ft::vector<std::string>);
	ft::stack<int> 		   stackC(ft::vector<int>);
	ft::stack<double>	   stackD(ft::vector<long>);
	ft::stack<double>	   stackE;
	ft::stack<int>		   stackF;

			std::cout << "  stack<std::string>	   stackA(ft::vector<std::string>);" << std::endl;
			std::cout << "  stack<int>		   stackB(ft::vector<std::string>);" << std::endl;
			std::cout << "  stack<int>		   stackC(ft::vector<int>);" << std::endl;
			std::cout << "  stack<double>		   stackD(ft::vector<long>);" << std::endl;
			std::cout << "  stack<double>		   stackE;" << std::endl;
			std::cout << "  stack<int>		   stackF;" << std::endl << std::endl;

			std::cout << "  stack<std::string, ft::vector<std::string>>::container_type stackA_value;"
					  << std::endl;
			std::cout << "  stack<int>::container_type stackB_value;" << std::endl;
			std::cout << "  stack<double, ft::vector<std::string> >::container_type stackC_value;" << std::endl
																					   << std::endl;

			std::cout << "      typeid(stackA).name()  is	" << typeid(stackA).name()
																  << std::endl;
			std::cout << "      typeid(stackB).name() is	" << typeid(stackB).name()
																  << std::endl;
			std::cout << "      typeid(stackC).name() is	" << typeid(stackC).name()
																  << std::endl;
			std::cout << "      typeid(stackD).name() is	" << typeid(stackD).name()
																  << std::endl;
			std::cout << "      typeid(stackE).name() is	" << typeid(stackE).name()
																  << std::endl;
			std::cout << "      typeid(stackF).name() is	" << typeid(stackF).name()
																  << std::endl << std::endl;

}
// void	testStack::member_functions__stack_empty() {
// 			std::cout << "empty():" << std::endl << std::endl;

// }
// void	testStack::member_functions__stack_size() {
// 			std::cout << "size()" << std::endl << std::endl;

// }
// void	testStack::member_functions__stack_top() {
// 			std::cout << "top()" << std::endl << std::endl;

// }
// void	testStack::member_functions__stack_push() {
// 			std::cout << "push()" << std::endl << std::endl;

// }
// void	testStack::member_functions__stack_pop() {
// 			std::cout << "pop():" << std::endl << std::endl;

// }

// void	testStack::member_functions__overloads__relational_operators() {
// 			std::cout << "Non-member function overloads:" << std::endl << std::endl;

// }
