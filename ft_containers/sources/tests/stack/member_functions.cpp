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
void	testStack::member_functions__stack_empty() {
			std::cout << "empty():" << std::endl << std::endl;

	ft::stack<int, ft::vector<std::string> > stackA;
	ft::stack<int, ft::vector<std::string> > stackB;
	ft::stack<int, ft::vector<std::string> > stackC;
	ft::stack<double> stackD;
	ft::stack<double> stackE;

			std::cout << "  stack<int, ft::vector<std::string> > stackA;" << std::endl;
			std::cout << "  stack<int, ft::vector<std::string> > stackB;" << std::endl;
			std::cout << "  stack<int, ft::vector<std::string> > stackC;" << std::endl;
			std::cout << "  stack<double> stackD;" << std::endl;
			std::cout << "  stack<double> stackE;" << std::endl << std::endl;

			std::cout << std::boolalpha << "      stackA.empty() is	" << stackA.empty() << std::endl;
			std::cout << std::boolalpha << "      stackB.empty() is	" << stackB.empty() << std::endl;
			std::cout << std::boolalpha << "      stackC.empty() is	" << stackC.empty() << std::endl;
			std::cout << std::boolalpha << "      stackD.empty() is	" << stackD.empty() << std::endl;
			std::cout << std::boolalpha << "      stackE.empty() is	" << stackE.empty() << std::endl << std::endl;

	stackB.push("Mekie sócie");
	stackD.push(10);

			std::cout << "  stackB.push(\"Mekie sócie\");" << std::endl;
			std::cout << "  stackD.push(10);" << std::endl << std::endl;

			std::cout << std::boolalpha << "      stackA.empty() is	" << stackA.empty() << std::endl;
			std::cout << std::boolalpha << "      stackB.empty() is	" << stackB.empty() << std::endl;
			std::cout << std::boolalpha << "      stackC.empty() is	" << stackC.empty() << std::endl;
			std::cout << std::boolalpha << "      stackD.empty() is	" << stackD.empty() << std::endl;
			std::cout << std::boolalpha << "      stackE.empty() is	" << stackE.empty() << std::endl << std::endl;

}
void	testStack::member_functions__stack_size() {
			std::cout << "size()" << std::endl << std::endl;

	ft::stack<int, ft::vector<std::string> > stackA;
	ft::stack<int, ft::vector<std::string> > stackB;
	ft::stack<int, ft::vector<std::string> > stackC;
	ft::stack<double> stackD;
	ft::stack<double> stackE;

			std::cout << "  stack<int, ft::vector<std::string> > stackA;" << std::endl;
			std::cout << "  stack<int, ft::vector<std::string> > stackB;" << std::endl;
			std::cout << "  stack<int, ft::vector<std::string> > stackC;" << std::endl;
			std::cout << "  stack<double> stackD;" << std::endl;
			std::cout << "  stack<double> stackE;" << std::endl << std::endl;

			std::cout << "      stackA.size() is	" << stackA.size() << std::endl;
			std::cout << "      stackB.size() is	" << stackB.size() << std::endl;
			std::cout << "      stackC.size() is	" << stackC.size() << std::endl;
			std::cout << "      stackD.size() is	" << stackD.size() << std::endl;
			std::cout << "      stackE.size() is	" << stackE.size() << std::endl << std::endl;

	stackB.push("Mekie sócie");
	stackB.push("Mekiee sócie");
	stackB.push("Mekieee sócie");
	stackB.push("Mekieeee sócie");
	stackD.push(10);
	stackE.push(20);
	stackE.push(30);

			std::cout << "  stackB.push(\"Mekie sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekiee sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekieee sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekieeee sócie\");" << std::endl;
			std::cout << "  stackD.push(10);" << std::endl;
			std::cout << "  stackE.push(20);" << std::endl;
			std::cout << "  stackE.push(30);" << std::endl << std::endl;

			std::cout << "      stackA.size() is	" << stackA.size() << std::endl;
			std::cout << "      stackB.size() is	" << stackB.size() << std::endl;
			std::cout << "      stackC.size() is	" << stackC.size() << std::endl;
			std::cout << "      stackD.size() is	" << stackD.size() << std::endl;
			std::cout << "      stackE.size() is	" << stackE.size() << std::endl << std::endl;


}
void	testStack::member_functions__stack_top() {
			std::cout << "top()" << std::endl << std::endl;

	ft::stack<int, ft::vector<std::string> > stackA;
	ft::stack<int, ft::vector<std::string> > stackB;
	ft::stack<int, ft::vector<std::string> > stackC;
	ft::stack<double> stackD;
	ft::stack<double> stackE;

			std::cout << "  stack<int, ft::vector<std::string> > stackA;" << std::endl;
			std::cout << "  stack<int, ft::vector<std::string> > stackB;" << std::endl;
			std::cout << "  stack<int, ft::vector<std::string> > stackC;" << std::endl;
			std::cout << "  stack<double> stackD;" << std::endl;
			std::cout << "  stack<double> stackE;" << std::endl << std::endl;

	stackA.push("Me sócie");
	stackB.push("Mekie sócie");
	stackB.push("Mekiee sócie");
	stackB.push("Mekieee sócie");
	stackB.push("Mekieeee sócie");
	stackC.push("Sócie");
	stackD.push(10);
	stackE.push(20);
	stackE.push(30);

			std::cout << "  stackA.push(\"Me sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekie sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekiee sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekieee sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekieeee sócie\");" << std::endl;
			std::cout << "  stackC.push(\"Sócie\");" << std::endl;
			std::cout << "  stackD.push(10);" << std::endl;
			std::cout << "  stackE.push(20);" << std::endl;
			std::cout << "  stackE.push(30);" << std::endl << std::endl;

			std::cout << "      stackA.top() is	" << stackA.top() << std::endl;
			std::cout << "      stackB.top() is	" << stackB.top() << std::endl;
			std::cout << "      stackC.top() is	" << stackC.top() << std::endl;
			std::cout << "      stackD.top() is	" << stackD.top() << std::endl;
			std::cout << "      stackE.top() is	" << stackE.top() << std::endl << std::endl;
}
void	testStack::member_functions__stack_push() {
			std::cout << "push()" << std::endl << std::endl;

	ft::stack<int, ft::vector<std::string> > stackA;
	ft::stack<int, ft::vector<std::string> > stackB;
	ft::stack<int, ft::vector<std::string> > stackC;
	ft::stack<double> stackD;
	ft::stack<double> stackE;

			std::cout << "  stack<int, ft::vector<std::string> > stackA;" << std::endl;
			std::cout << "  stack<int, ft::vector<std::string> > stackB;" << std::endl;
			std::cout << "  stack<int, ft::vector<std::string> > stackC;" << std::endl;
			std::cout << "  stack<double> stackD;" << std::endl;
			std::cout << "  stack<double> stackE;" << std::endl << std::endl;

	stackA.push("Me sócie");
	stackB.push("Mekie sócie");
	stackB.push("Mekiee sócie");
	stackB.push("Mekieee sócie");
	stackB.push("Mekieeee sócie");
	stackC.push("Sócie");
	stackD.push(10);
	stackE.push(20);
	stackE.push(30);

			std::cout << "  stackA.push(\"Me sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekie sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekiee sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekieee sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekieeee sócie\");" << std::endl;
			std::cout << "  stackC.push(\"Sócie\");" << std::endl;
			std::cout << "  stackD.push(10);" << std::endl;
			std::cout << "  stackE.push(20);" << std::endl;
			std::cout << "  stackE.push(30);" << std::endl << std::endl;

			std::cout << "      stackA.top() is	" << stackA.top() << std::endl;
			std::cout << "      stackB.top() is	" << stackB.top() << std::endl;
			std::cout << "      stackC.top() is	" << stackC.top() << std::endl;
			std::cout << "      stackD.top() is	" << stackD.top() << std::endl;
			std::cout << "      stackE.top() is	" << stackE.top() << std::endl << std::endl;

}
void	testStack::member_functions__stack_pop() {
			std::cout << "pop():" << std::endl << std::endl;

	ft::stack<int, ft::vector<std::string> > stackA;
	ft::stack<int, ft::vector<std::string> > stackB;
	ft::stack<int, ft::vector<std::string> > stackC;
	ft::stack<double> stackD;
	ft::stack<double> stackE;

			std::cout << "  stack<int, ft::vector<std::string> > stackA;" << std::endl;
			std::cout << "  stack<int, ft::vector<std::string> > stackB;" << std::endl;
			std::cout << "  stack<int, ft::vector<std::string> > stackC;" << std::endl;
			std::cout << "  stack<double> stackD;" << std::endl;
			std::cout << "  stack<double> stackE;" << std::endl << std::endl;

			std::cout << "      stackA.size() is	" << stackA.size() << std::endl;
			std::cout << "      stackB.size() is	" << stackB.size() << std::endl;
			std::cout << "      stackC.size() is	" << stackC.size() << std::endl;
			std::cout << "      stackD.size() is	" << stackD.size() << std::endl;
			std::cout << "      stackE.size() is	" << stackE.size() << std::endl << std::endl;

	stackA.push("Me sócie");
	stackB.push("Mekie sócie");
	stackB.push("Mekiee sócie");
	stackB.push("Mekieee sócie");
	stackB.push("Mekieeee sócie");
	stackC.push("Sócie");
	stackD.push(10);
	stackE.push(20);
	stackE.push(30);

			std::cout << "  stackA.push(\"Me sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekie sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekiee sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekieee sócie\");" << std::endl;
			std::cout << "  stackB.push(\"Mekieeee sócie\");" << std::endl;
			std::cout << "  stackC.push(\"Sócie\");" << std::endl;
			std::cout << "  stackD.push(10);" << std::endl;
			std::cout << "  stackE.push(20);" << std::endl;
			std::cout << "  stackE.push(30);" << std::endl << std::endl;

			std::cout << "      stackA.size() is	" << stackA.size() << std::endl;
			std::cout << "      stackB.size() is	" << stackB.size() << std::endl;
			std::cout << "      stackC.size() is	" << stackC.size() << std::endl;
			std::cout << "      stackD.size() is	" << stackD.size() << std::endl;
			std::cout << "      stackE.size() is	" << stackE.size() << std::endl << std::endl;

			std::cout << "      stackA.top() is	" << stackA.top() << std::endl;
			std::cout << "      stackB.top() is	" << stackB.top() << std::endl;
			std::cout << "      stackC.top() is	" << stackC.top() << std::endl;
			std::cout << "      stackD.top() is	" << stackD.top() << std::endl;
			std::cout << "      stackE.top() is	" << stackE.top() << std::endl << std::endl;

	stackA.pop();
	stackB.pop();
	stackC.pop();
	stackD.pop();
	stackE.pop();

			std::cout << "  stackA.pop();" << std::endl;
			std::cout << "  stackB.pop();" << std::endl;
			std::cout << "  stackC.pop();" << std::endl;
			std::cout << "  stackD.pop();" << std::endl;
			std::cout << "  stackE.pop();" << std::endl << std::endl;

			std::cout << "      stackA.size() is	" << stackA.size() << std::endl;
			std::cout << "      stackB.size() is	" << stackB.size() << std::endl;
			std::cout << "      stackC.size() is	" << stackC.size() << std::endl;
			std::cout << "      stackD.size() is	" << stackD.size() << std::endl;
			std::cout << "      stackE.size() is	" << stackE.size() << std::endl << std::endl;

			//std::cout << "      stackA.top() is	" << stackA.top() << std::endl;
			std::cout << "      stackB.top() is	" << stackB.top() << std::endl;
			//std::cout << "      stackC.top() is	" << stackC.top() << std::endl;
			//std::cout << "      stackD.top() is	" << stackD.top() << std::endl;
			std::cout << "      stackE.top() is	" << stackE.top() << std::endl << std::endl;

	stackB.pop();
	stackE.pop();

			std::cout << "  stackB.pop();" << std::endl;
			std::cout << "  stackE.pop();" << std::endl << std::endl;

			std::cout << "      stackA.size() is	" << stackA.size() << std::endl;
			std::cout << "      stackB.size() is	" << stackB.size() << std::endl;
			std::cout << "      stackC.size() is	" << stackC.size() << std::endl;
			std::cout << "      stackD.size() is	" << stackD.size() << std::endl;
			std::cout << "      stackE.size() is	" << stackE.size() << std::endl << std::endl;

			//std::cout << "      stackA.top() is	" << stackA.top() << std::endl;
			std::cout << "      stackB.top() is	" << stackB.top() << std::endl << std::endl;
			//std::cout << "      stackC.top() is	" << stackC.top() << std::endl;
			//std::cout << "      stackD.top() is	" << stackD.top() << std::endl;
			// std::cout << "      stackE.top() is	" << stackE.top() << std::endl << std::endl;

	stackB.pop();

			std::cout << "  stackB.pop();" << std::endl << std::endl;

			std::cout << "      stackA.size() is	" << stackA.size() << std::endl;
			std::cout << "      stackB.size() is	" << stackB.size() << std::endl;
			std::cout << "      stackC.size() is	" << stackC.size() << std::endl;
			std::cout << "      stackD.size() is	" << stackD.size() << std::endl;
			std::cout << "      stackE.size() is	" << stackE.size() << std::endl << std::endl;

			//std::cout << "      stackA.top() is	" << stackA.top() << std::endl;
			std::cout << "      stackB.top() is	" << stackB.top() << std::endl;
			//std::cout << "      stackC.top() is	" << stackC.top() << std::endl;
			//std::cout << "      stackD.top() is	" << stackD.top() << std::endl;
			// std::cout << "      stackE.top() is	" << stackE.top() << std::endl << std::endl;
}

// void	testStack::member_functions__overloads__relational_operators() {
// 			std::cout << "Non-member function overloads:" << std::endl << std::endl;

// }
