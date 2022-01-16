#include "../../../includes/main.hpp"

void	testVector::member_functions__default_constructor() {
		std::cout << "Default Constructor:" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;

			std::cout << "  vector<int> vectorA;" << std::endl;
			std::cout << "  vector<int> vectorA;" << std::endl << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;
}
void	testVector::member_functions__fill_constructor() {
			std::cout << "Fill Constructor:" << std::endl << std::endl;

	ft::vector<int> vectorA(5, 10);

			std::cout << "  vector<int> vectorA(5, 10);" << std::endl << std::endl;

			std::cout << "      vectorA is	[" ;

			for (ft::vector<int>::iterator itC = vectorA.begin(); itC != vectorA.end(); itC++) {
					std::cout << *itC << " ";
			}
			std::cout << "]" << std::endl << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;
}
void	testVector::member_functions__range_constructor() {

}
void	testVector::member_functions__copy_constructor() {

}
void	testVector::member_functions__destructor() {

}
void	testVector::member_functions__operator_equal() {

}

void	testVector::member_functions__iterator__begin() {

}
void	testVector::member_functions__iterator__end() {

}
void	testVector::member_functions__iterator__rbegin() {

}
void	testVector::member_functions__iterator__rend() {

}

void	testVector::member_functions__capacity__size() {

}
void	testVector::member_functions__capacity__max_size() {
			std::cout << "max_size:" << std::endl << std::endl;

	ft::vector<int> vectorA(5, 5);

			std::cout << "  vector<int> vectorA(5, 5);" << std::endl << std::endl;

			std::cout << "      vectorA.max_size() is	" << vectorA.max_size() << std::endl;
			std::cout << std::endl;
}
void	testVector::member_functions__capacity__resize() {

}
void	testVector::member_functions__capacity__capacity() {

}
void	testVector::member_functions__capacity__empty() {

}
void	testVector::member_functions__capacity__reserve() {
			std::cout << "reserve:" << std::endl << std::endl;

	ft::vector<int> vectorA(5, 5);

			std::cout << "  vector<int> vectorA(5, 5);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;

			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {
					std::cout << *itA << " ";
			}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

	vectorA.reserve(10);

			std::cout << "  vectorA.reserve(10);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;

			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {
					std::cout << *itA << " ";
			}

			std::cout << "]" << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

	vectorA.reserve(2);

			std::cout << "  vectorA.reserve(2);" << std::endl << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;
			std::cout << "  vectorA.reserve(vectorA.max_size() + 1);" << std::endl << std::endl;

	try {
		vectorA.reserve(vectorA.max_size() + 1);
	}
	catch (std::length_error & e) {
		std::cout << "      Length Error " << e.what() << std::endl;
	}

			std::cout << std::endl;
}

void	testVector::member_functions__element__operator_at_position() {

}
void	testVector::member_functions__element__at() {

}
void	testVector::member_functions__element__front() {

}
void	testVector::member_functions__element__back() {

}

void	testVector::member_functions__modifiers__assign() {

}
void	testVector::member_functions__modifiers__push_back() {
			std::cout << "push_back:" << std::endl << std::endl;

	ft::vector<int> vectorA(2, 2);

			std::cout << "  vector<int> vectorA(2, 2);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {
					std::cout << *itA << " ";
			}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;


	vectorA.push_back(5);

			std::cout << "  vectorA.push_back(5);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {
					std::cout << *itA << " ";
			}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

	vectorA.push_back(5);

			std::cout << "  vectorA.push_back(5);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {
					std::cout << *itA << " ";
			}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

	vectorA.push_back(5);

			std::cout << "  vectorA.push_back(5);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {
					std::cout << *itA << " ";
			}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;
}
void	testVector::member_functions__modifiers__pop_back() {

}
void	testVector::member_functions__modifiers__insert() {

}
void	testVector::member_functions__modifiers__erase() {

}
void	testVector::member_functions__modifiers__swap() {

}
void	testVector::member_functions__modifiers__clear() {

}

void	testVector::member_functions__allocator__get_allocator() {

}

void	testVector::member_functions__overloads__relational_operators() {

}
void	testVector::member_functions__overloads__swap() {

}
