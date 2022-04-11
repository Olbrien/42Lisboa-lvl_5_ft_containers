#include "../../../includes/main.hpp"

void	testStack::member_types__value_type() {
			std::cout << "Value Type: " << std::endl << std::endl;

	ft::map<int, int>::key_type kt1;
	ft::map<std::string, double>::key_type kt2;
	ft::map<int, char *>::key_type kt3;
	ft::map<char *, int>::key_type kt4;
	ft::map<double, int>::key_type kt5;

			std::cout << "  ft::map<int, int>::key_type			kt1;" << std::endl;
			std::cout << "  ft::map<std::string, double>::key_type	kt2;" << std::endl;
			std::cout << "  ft::map<int, char *>::key_type		kt3;" << std::endl;
			std::cout << "  ft::map<char *, int>::key_type		kt4;" << std::endl;
			std::cout << "  ft::map<double, int>::key_type		kt5;" << std::endl;

			std::cout << std::endl;

			std::cout << "      typeid(kt1).name() is	" << typeid(kt1).name() << std::endl;
			std::cout << "      typeid(kt2).name() is	" << typeid(kt2).name() << std::endl;
			std::cout << "      typeid(kt3).name() is	" << typeid(kt3).name() << std::endl;
			std::cout << "      typeid(kt4).name() is	" << typeid(kt4).name() << std::endl;
			std::cout << "      typeid(kt5).name() is	" << typeid(kt5).name() << std::endl;
			std::cout << std::endl;
}
// void	testStack::member_types__container_type() {
// 			std::cout << "Container Type: " << std::endl << std::endl;

// }
// void	testStack::member_types__size_type() {
// 			std::cout << "Size Type: " << std::endl << std::endl;

// }
