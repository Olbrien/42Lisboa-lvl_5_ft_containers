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
	ft::vector<int> vectorB(2, 2);
	ft::vector<int> vectorC(6, 7);
	ft::vector<int> vectorD(0, 1);

			std::cout << "  vector<int> vectorA(5, 10);" << std::endl;
			std::cout << "  vector<int> vectorB(2, 2);" << std::endl;
			std::cout << "  vector<int> vectorC(6, 7);" << std::endl;
			std::cout << "  vector<int> vectorD(0, 1);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itC = vectorA.begin(); itC != vectorA.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itC = vectorB.begin(); itC != vectorB.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itC = vectorC.begin(); itC != vectorC.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itC = vectorD.begin(); itC != vectorD.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
			std::cout << std::endl;

		std::cout << "  vector<int> vectorE(-1, 1);" << std::endl << std::endl;
		ft::vector<int> vectorE(-1, 1);
}
void	testVector::member_functions__range_constructor() {
			std::cout << "Range Constructor:" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;
	ft::vector<int> vectorC;
	ft::vector<int> vectorD(0,1);

			std::cout << "  vector<int> vectorA;" << std::endl;
			std::cout << "  vector<int> vectorB;" << std::endl;
			std::cout << "  vector<int> vectorC;" << std::endl;
			std::cout << "  vector<int> vectorD(0, 1);" << std::endl << std::endl;

	vectorA.push_back(1);
	vectorA.push_back(2);
	vectorA.push_back(3);
	vectorA.push_back(4);

	vectorB.push_back(5);
	vectorB.push_back(6);

	vectorC.push_back(-11);
	vectorC.push_back(-10);
	vectorC.push_back(-9);
	vectorC.push_back(-8);
	vectorC.push_back(-7);
	vectorC.push_back(-6);
	vectorC.push_back(-5);

			std::cout << "  vectorA.push_back(1);" << std::endl;
			std::cout << "  vectorA.push_back(2);" << std::endl;
			std::cout << "  vectorA.push_back(3);" << std::endl;
			std::cout << "  vectorA.push_back(4);" << std::endl << std::endl;
			std::cout << "  vectorB.push_back(5);" << std::endl;
			std::cout << "  vectorB.push_back(6);" << std::endl  << std::endl;
			std::cout << "  vectorC.push_back(-11);" << std::endl;
			std::cout << "  vectorC.push_back(-10);" << std::endl;
			std::cout << "  vectorC.push_back(-9);" << std::endl;
			std::cout << "  vectorC.push_back(-8);" << std::endl;
			std::cout << "  vectorC.push_back(-7);" << std::endl;
			std::cout << "  vectorC.push_back(-6);" << std::endl;
			std::cout << "  vectorC.push_back(-5);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itC = vectorA.begin(); itC != vectorA.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itC = vectorB.begin(); itC != vectorB.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itC = vectorC.begin(); itC != vectorC.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itC = vectorD.begin(); itC != vectorD.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
			std::cout << std::endl;

	ft::vector<int> vectorE(vectorA.begin(), vectorA.end());
	ft::vector<int> vectorF(vectorB.begin(), vectorB.end());
	ft::vector<int> vectorG(vectorC.begin(), vectorC.end());
	ft::vector<int> vectorH(vectorD.begin(), vectorD.end());

			std::cout << "  vector<int> vectorE(vectorA.begin(), vectorA.end());" << std::endl;
			std::cout << "  vector<int> vectorF(vectorB.begin(), vectorB.end());" << std::endl;
			std::cout << "  vector<int> vectorG(vectorC.begin(), vectorC.end());" << std::endl;
			std::cout << "  vector<int> vectorH(vectorD.begin(), vectorD.end());" << std::endl << std::endl;

			std::cout << "      vectorE is		[ " ;
			for (ft::vector<int>::iterator itC = vectorE.begin(); itC != vectorE.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorE.size() is		" << vectorE.size() << std::endl;
			std::cout << "      vectorE.capacity() is	" << vectorE.capacity() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorF is		[ " ;
			for (ft::vector<int>::iterator itC = vectorF.begin(); itC != vectorF.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorF.size() is		" << vectorF.size() << std::endl;
			std::cout << "      vectorF.capacity() is	" << vectorF.capacity() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorG is		[ " ;
			for (ft::vector<int>::iterator itC = vectorG.begin(); itC != vectorG.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorG.size() is		" << vectorG.size() << std::endl;
			std::cout << "      vectorG.capacity() is	" << vectorG.capacity() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorH is		[ " ;
			for (ft::vector<int>::iterator itC = vectorH.begin(); itC != vectorH.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorH.size() is		" << vectorH.size() << std::endl;
			std::cout << "      vectorH.capacity() is	" << vectorH.capacity() << std::endl;
			std::cout << std::endl;

	ft::vector<int> vectorI(vectorA.rbegin(), vectorA.rend());
	ft::vector<int> vectorJ(vectorB.rbegin(), vectorB.rend());
	ft::vector<int> vectorK(vectorC.rbegin(), vectorC.rend());
	ft::vector<int> vectorL(vectorD.rbegin(), vectorD.rend());

			std::cout << "  vector<int> vectorI(vectorA.rbegin(), vectorA.rend());" << std::endl;
			std::cout << "  vector<int> vectorJ(vectorB.rbegin(), vectorB.rend());" << std::endl;
			std::cout << "  vector<int> vectorK(vectorC.rbegin(), vectorC.rend());" << std::endl;
			std::cout << "  vector<int> vectorL(vectorD.rbegin(), vectorD.rend());" << std::endl << std::endl;

			std::cout << "      vectorI is		[ " ;
			for (ft::vector<int>::iterator itC = vectorI.begin(); itC != vectorI.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorI.size() is		" << vectorI.size() << std::endl;
			std::cout << "      vectorI.capacity() is	" << vectorI.capacity() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorJ is		[ " ;
			for (ft::vector<int>::iterator itC = vectorJ.begin(); itC != vectorJ.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorJ.size() is		" << vectorJ.size() << std::endl;
			std::cout << "      vectorJ.capacity() is	" << vectorJ.capacity() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorK is		[ " ;
			for (ft::vector<int>::iterator itC = vectorK.begin(); itC != vectorK.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorK.size() is		" << vectorK.size() << std::endl;
			std::cout << "      vectorK.capacity() is	" << vectorK.capacity() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorL is		[ " ;
			for (ft::vector<int>::iterator itC = vectorL.begin(); itC != vectorL.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;

			std::cout << "      vectorL.size() is		" << vectorL.size() << std::endl;
			std::cout << "      vectorL.capacity() is	" << vectorL.capacity() << std::endl;
			std::cout << std::endl;
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
