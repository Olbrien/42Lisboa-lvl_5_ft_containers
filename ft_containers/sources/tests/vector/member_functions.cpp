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
			std::cout << "Copy Constructor:" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB(4, 10000);
	ft::vector<int> vectorC;

	vectorA.push_back(1);
	vectorA.push_back(2);
	vectorA.push_back(3);
	vectorA.push_back(4);

	ft::vector<int> vectorD = vectorA;
	ft::vector<int> vectorE = vectorD;
	ft::vector<int> vectorF = vectorB;
	ft::vector<int> vectorG = vectorC;

	vectorD.push_back(5);
	vectorD.push_back(6);
	vectorD.push_back(7);

			std::cout << "  vector<int> vectorA;" << std::endl;
			std::cout << "  vector<int> vectorB(4, 10000);" << std::endl;
			std::cout << "  vector<int> vectorC;" << std::endl << std::endl;

			std::cout << "  vectorA.push_back(1);" << std::endl;
			std::cout << "  vectorA.push_back(2);" << std::endl;
			std::cout << "  vectorA.push_back(3);" << std::endl;
			std::cout << "  vectorA.push_back(4);" << std::endl << std::endl;

			std::cout << "  vector<int> vectorD = vectorA;" << std::endl;
			std::cout << "  vector<int> vectorE = vectorD;" << std::endl;
			std::cout << "  vector<int> vectorF = vectorB;" << std::endl;
			std::cout << "  vector<int> vectorG = vectorC;" << std::endl << std::endl;

			std::cout << "  vectorD.push_back(5);" << std::endl;
			std::cout << "  vectorD.push_back(6);" << std::endl;
			std::cout << "  vectorD.push_back(7);" << std::endl << std::endl;

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
}
void	testVector::member_functions__destructor() {
			std::cout << "Destructor:" << std::endl << std::endl;

	ft::vector<int> vectorA(12354555, 42);
	ft::vector<int> vectorB(54321055, 42);
	ft::vector<int> vectorC(0, 0);
	ft::vector<int> vectorD(1, 1);
	ft::vector<int> vectorE;

			std::cout << "  vector<int> vectorA(12354555, 42);" << std::endl;
			std::cout << "  vector<int> vectorB(54321055, 42);" << std::endl;
			std::cout << "  vector<int> vectorC(0, 0);" << std::endl;
			std::cout << "  vector<int> vectorD(1, 1);" << std::endl;
			std::cout << "  vector<int> vectorE;" << std::endl << std::endl;
}
void	testVector::member_functions__operator_equal() {
			std::cout << "Operator =:" << std::endl << std::endl;

	ft::vector<int> vectorA(1, 5);
	ft::vector<int> vectorB(0, 0);
	ft::vector<int> vectorC;
	ft::vector<int> vectorD;
	ft::vector<int> vectorE;
	ft::vector<int> vectorF(10, 10);
	ft::vector<int> vectorG(5, 5);
	ft::vector<int> vectorH(2, 2);

			std::cout << "  vector<int> vectorA(1, 5);" << std::endl;
			std::cout << "  vector<int> vectorB(0, 0);" << std::endl;
			std::cout << "  vector<int> vectorC;" << std::endl;
			std::cout << "  vector<int> vectorD;" << std::endl;
			std::cout << "  vector<int> vectorE;" << std::endl;
			std::cout << "  vector<int> vectorF(10, 10);" << std::endl;
			std::cout << "  vector<int> vectorG(5, 5);" << std::endl;
			std::cout << "  vector<int> vectorH(2, 2);" << std::endl << std::endl;

	vectorC.push_back(1);
	vectorC.push_back(2);
	vectorC.push_back(3);
	vectorC.push_back(4);
	vectorC.push_back(5);

			std::cout << "  vectorC.push_back(1);" << std::endl;
			std::cout << "  vectorC.push_back(2);" << std::endl;
			std::cout << "  vectorC.push_back(3);" << std::endl;
			std::cout << "  vectorC.push_back(4);" << std::endl;
			std::cout << "  vectorC.push_back(5);" << std::endl << std::endl;

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

	vectorA = vectorD;
	vectorE = vectorB;
	vectorC = vectorE;
	vectorD = vectorA;
	vectorH = vectorF;
	vectorF = vectorG;

			std::cout << "  vectorA = vectorD;" << std::endl;
			std::cout << "  vectorE = vectorB;" << std::endl;
			std::cout << "  vectorC = vectorE;" << std::endl;
			std::cout << "  vectorD = vectorA;" << std::endl;
			std::cout << "  vectorH = vectorF;" << std::endl;
			std::cout << "  vectorF = vectorG;" << std::endl << std::endl;

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
}

void	testVector::member_functions__iterator__begin() {
			std::cout << "Iterators - begin():" << std::endl << std::endl;

	ft::vector<std::string> 	vectorA;
	ft::vector<float>			vectorB;
	ft::vector<int>				vectorC;

			std::cout << "  vector<std::string>	vectorA;" << std::endl;
			std::cout << "  vector<float>		vectorB;" << std::endl;
			std::cout << "  vector<int>		vectorC;" << std::endl << std::endl;

	vectorA.push_back("Olah");
	vectorA.push_back("Hello");
	vectorA.push_back("Gutten Tag");

	vectorB.push_back(2.5);
	vectorB.push_back(3.5);
	vectorB.push_back(4.5);

			std::cout << "  vectorA.push_back(\"Olah\");" << std::endl;
			std::cout << "  vectorA.push_back(\"Hello\");" << std::endl;
			std::cout << "  vectorA.push_back(\"Gutten Tag\");" << std::endl << std::endl;

			std::cout << "  vectorB.push_back(2.5);" << std::endl;
			std::cout << "  vectorB.push_back(3.5);" << std::endl;
			std::cout << "  vectorB.push_back(4.5);" << std::endl << std::endl;

	ft::vector<std::string>::iterator itA = vectorA.begin();
	ft::vector<float>::iterator itB = vectorB.begin();
	ft::vector<int>::iterator itC = vectorC.begin();

			std::cout << "  vector<std::string>::iterator itA = vectorA.begin();" << std::endl;
			std::cout << "  vector<float>::iterator itB = vectorB.begin();" << std::endl;
			std::cout << "  vector<int>::iterator itC = vectorC.begin();" << std::endl << std::endl;

			std::cout << "      *itA is " << *itA << std::endl;
			std::cout << "      *itB is " << *itB << std::endl;
			std::cout << "      *itC is Segmentation Fault" << std::endl << std::endl;
			std::cout <<  *itC << std::endl;
}
void	testVector::member_functions__iterator__end() {
			std::cout << "Iterators - end():" << std::endl << std::endl;

	ft::vector<std::string> 	vectorA;
	ft::vector<float>			vectorB;
	ft::vector<int>				vectorC;

			std::cout << "  vector<std::string>	vectorA;" << std::endl;
			std::cout << "  vector<float>		vectorB;" << std::endl;
			std::cout << "  vector<int>		vectorC;" << std::endl << std::endl;

	vectorA.push_back("Olah");
	vectorA.push_back("Hello");
	vectorA.push_back("Gutten Tag");

	vectorB.push_back(2.5);
	vectorB.push_back(3.5);
	vectorB.push_back(4.5);

			std::cout << "  vectorA.push_back(\"Olah\");" << std::endl;
			std::cout << "  vectorA.push_back(\"Hello\");" << std::endl;
			std::cout << "  vectorA.push_back(\"Gutten Tag\");" << std::endl << std::endl;

			std::cout << "  vectorB.push_back(2.5);" << std::endl;
			std::cout << "  vectorB.push_back(3.5);" << std::endl;
			std::cout << "  vectorB.push_back(4.5);" << std::endl << std::endl;

	ft::vector<std::string>::iterator itA = vectorA.end();
	ft::vector<float>::iterator itB = vectorB.end();
	ft::vector<int>::iterator itC = vectorC.end();

			std::cout << "  vector<std::string>::iterator itA = vectorA.end();" << std::endl;
			std::cout << "  vector<float>::iterator itB = vectorB.end();" << std::endl;
			std::cout << "  vector<int>::iterator itC = vectorC.end();" << std::endl << std::endl;

			std::cout << "      *itA is " << *itA << std::endl;
			std::cout << "      *itB is " << *itB << std::endl << std::endl;

	itA = itA - 1;
	itB = itB - 1;

			std::cout << "  itA = itA - 1;" << std::endl;
			std::cout << "  itB = itB - 1;" << std::endl << std::endl;

			std::cout << "      *itA is " << *itA << std::endl;
			std::cout << "      *itB is " << *itB << std::endl;
			std::cout << "      *itC is Segmentation Fault" << std::endl << std::endl;
			std::cout <<  *itC << std::endl;
}
void	testVector::member_functions__iterator__rbegin() {
			std::cout << "Iterators - rbegin():" << std::endl << std::endl;

	ft::vector<std::string> 	vectorA;
	ft::vector<float>			vectorB;
	ft::vector<int>				vectorC;

			std::cout << "  vector<std::string>	vectorA;" << std::endl;
			std::cout << "  vector<float>		vectorB;" << std::endl;
			std::cout << "  vector<int>		vectorC;" << std::endl << std::endl;

	vectorA.push_back("Olah");
	vectorA.push_back("Hello");
	vectorA.push_back("Gutten Tag");

	vectorB.push_back(2.5);
	vectorB.push_back(3.5);
	vectorB.push_back(4.5);

			std::cout << "  vectorA.push_back(\"Olah\");" << std::endl;
			std::cout << "  vectorA.push_back(\"Hello\");" << std::endl;
			std::cout << "  vectorA.push_back(\"Gutten Tag\");" << std::endl << std::endl;

			std::cout << "  vectorB.push_back(2.5);" << std::endl;
			std::cout << "  vectorB.push_back(3.5);" << std::endl;
			std::cout << "  vectorB.push_back(4.5);" << std::endl << std::endl;

	ft::vector<std::string>::reverse_iterator itA = vectorA.rbegin();
	ft::vector<float>::reverse_iterator itB = vectorB.rbegin();
	ft::vector<int>::reverse_iterator itC = vectorC.rbegin();

			std::cout << "  vector<std::string>::reverse_iterator itA = vectorA.rbegin();" << std::endl;
			std::cout << "  vector<float>::reverse_iterator itB = vectorB.rbegin();" << std::endl;
			std::cout << "  vector<int>::reverse_iterator itC = vectorC.rbegin();" << std::endl << std::endl;

			std::cout << "      *itA is " << *itA << std::endl;
			std::cout << "      *itB is " << *itB << std::endl;
			std::cout << "      *itC is Segmentation Fault" << std::endl << std::endl;
			std::cout <<  *itC << std::endl;
}
void	testVector::member_functions__iterator__rend() {
			std::cout << "Iterators - rend():" << std::endl << std::endl;

	ft::vector<std::string> 	vectorA;
	ft::vector<float>			vectorB;
	ft::vector<int>				vectorC;

			std::cout << "  vector<std::string>	vectorA;" << std::endl;
			std::cout << "  vector<float>		vectorB;" << std::endl;
			std::cout << "  vector<int>		vectorC;" << std::endl << std::endl;

	vectorA.push_back("Olah");
	vectorA.push_back("Hello");
	vectorA.push_back("Gutten Tag");

	vectorB.push_back(2.5);
	vectorB.push_back(3.5);
	vectorB.push_back(4.5);

			std::cout << "  vectorA.push_back(\"Olah\");" << std::endl;
			std::cout << "  vectorA.push_back(\"Hello\");" << std::endl;
			std::cout << "  vectorA.push_back(\"Gutten Tag\");" << std::endl << std::endl;

			std::cout << "  vectorB.push_back(2.5);" << std::endl;
			std::cout << "  vectorB.push_back(3.5);" << std::endl;
			std::cout << "  vectorB.push_back(4.5);" << std::endl << std::endl;

	ft::vector<std::string>::reverse_iterator itA = vectorA.rend();
	ft::vector<float>::reverse_iterator itB = vectorB.rend();
	ft::vector<int>::reverse_iterator itC = vectorC.rend();

			std::cout << "  vector<std::string>::reverse_iterator itA = vectorA.rend();" << std::endl;
			std::cout << "  vector<float>::reverse_iterator itB = vectorB.rend();" << std::endl;
			std::cout << "  vector<int>::reverse_iterator itC = vectorC.rend();" << std::endl << std::endl;

			std::cout << "      *itA is " << *itA << std::endl;
			std::cout << "      *itB is " << *itB << std::endl << std::endl;

	itA = itA - 1;
	itB = itB - 1;

			std::cout << "  itA = itA - 1;" << std::endl;
			std::cout << "  itB = itB - 1;" << std::endl << std::endl;

			std::cout << "      *itA is " << *itA << std::endl;
			std::cout << "      *itB is " << *itB << std::endl;
			std::cout << "      *itC is Segmentation Fault" << std::endl << std::endl;
			std::cout <<  *itC << std::endl;
}

void	testVector::member_functions__capacity__size() {
			std::cout << "Capacity - size():" << std::endl << std::endl;

	ft::vector<int>					vectorA;
	ft::vector<std::string>			vectorB(2, "Olah!");
	ft::vector<float>				vectorC(10, 3.5f);

			std::cout << "  vector<int>			vectorA;" << std::endl;
			std::cout << "  vector<std::string>		vectorB(2, \"Olah!\");" << std::endl;
			std::cout << "  vector<float>			vectorC(10, 3.5f);" << std::endl << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorB.size() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorC.size() << std::endl << std::endl;

	vectorA.push_back(1);

	vectorB.push_back("alo?");
	vectorB.push_back("olah?");

	vectorC.push_back(1.5f);
	vectorC.push_back(2.5f);
	vectorC.push_back(4.5f);
	vectorC.push_back(5.5f);

			std::cout << "  vectorA.push_back(1);" << std::endl << std::endl;

			std::cout << "  vectorB.push_back(\"alo?\");" << std::endl;
			std::cout << "  vectorB.push_back(\"olah?\");" << std::endl << std::endl;

			std::cout << "  vectorC.push_back(1.5f);" << std::endl;
			std::cout << "  vectorC.push_back(2.5f);" << std::endl;
			std::cout << "  vectorC.push_back(4.5f);" << std::endl;
			std::cout << "  vectorC.push_back(5.5f);" << std::endl << std::endl;

			std::cout << "      vectorA.size() is	" << vectorA.size() << std::endl;
			std::cout << "      vectorA.size() is	" << vectorB.size() << std::endl;
			std::cout << "      vectorA.size() is	" << vectorC.size() << std::endl << std::endl;
}
void	testVector::member_functions__capacity__max_size() {
			std::cout << "Capacity - max_size():" << std::endl << std::endl;

	ft::vector<int> vectorA(5, 5);
	ft::vector<std::string> vectorB(1000, "Mekie sócie");
	ft::vector<const char *> vectorC(1000, "Tão");
	ft::vector<float> vectorD;

			std::cout << "  vector<int> vectorA(5, 5);" << std::endl;
			std::cout << "  vector<std::string> vectorB(1000, \"Mekie sócie\");" << std::endl;
			std::cout << "  vector<const char *> vectorC(1000, \"Tão\");" << std::endl;
			std::cout << "  vector<float> vectorD;" << std::endl << std::endl;

			std::cout << "      vectorA.max_size() is	" << vectorA.max_size() << std::endl;
			std::cout << "      vectorB.max_size() is	" << vectorA.max_size() << std::endl;
			std::cout << "      vectorC.max_size() is	" << vectorA.max_size() << std::endl;
			std::cout << "      vectorD.max_size() is	" << vectorA.max_size() << std::endl;
			std::cout << std::endl;
}
void	testVector::member_functions__capacity__resize() {
			std::cout << "Capacity - resize():" << std::endl << std::endl;

	ft::vector<int> vectorA(5, 5);
	ft::vector<int> vectorB;
	ft::vector<int> vectorC(3, 3);
	ft::vector<int> vectorD(8, 8);

			std::cout << "  vector<int> vectorA(5, 5);" << std::endl;
			std::cout << "  vector<int> vectorB;" << std::endl;
			std::cout << "  vector<int> vectorC(3, 3);" << std::endl;
			std::cout << "  vector<int> vectorD(8, 8);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itC = vectorA.begin(); itC != vectorA.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itC = vectorB.begin(); itC != vectorB.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itC = vectorC.begin(); itC != vectorC.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itC = vectorD.begin(); itC != vectorD.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl << std::endl;

	vectorA.resize(0);
	vectorB.resize(2, 2);
	vectorC.resize(4);
	vectorD.resize(8, 1);

			std::cout << "  vectorA.resize(0);" << std::endl;
			std::cout << "  vectorB.resize(2, 2);" << std::endl;
			std::cout << "  vectorC.resize(4);" << std::endl;
			std::cout << "  vectorD.resize(8, 1);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itC = vectorA.begin(); itC != vectorA.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itC = vectorB.begin(); itC != vectorB.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itC = vectorC.begin(); itC != vectorC.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itC = vectorD.begin(); itC != vectorD.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl << std::endl;

	vectorA.resize(6, 6);
	vectorB.resize(1, 6);
	vectorC.resize(9);
	vectorD.resize(11, 5);

			std::cout << "  vectorA.resize(6, 6);" << std::endl;
			std::cout << "  vectorB.resize(1, 6);" << std::endl;
			std::cout << "  vectorC.resize(9);" << std::endl;
			std::cout << "  vectorD.resize(11, 5);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itC = vectorA.begin(); itC != vectorA.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itC = vectorB.begin(); itC != vectorB.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itC = vectorC.begin(); itC != vectorC.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itC = vectorD.begin(); itC != vectorD.end(); itC++) { std::cout << *itC << " "; }
			std::cout << "]" << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl << std::endl;
}
void	testVector::member_functions__capacity__capacity() {
			std::cout << "Capacity - capacity():" << std::endl << std::endl;

	ft::vector<int> vectorA;

			std::cout << "  vector<int> vectorA;" << std::endl << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

	vectorA.push_back(1);

			std::cout << "  vectorA.push_back(1);" << std::endl << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

	vectorA.push_back(1);

			std::cout << "  vectorA.push_back(1);" << std::endl << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

	vectorA.push_back(1);

			std::cout << "  vectorA.push_back(1);" << std::endl << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

	vectorA.push_back(1);

			std::cout << "  vectorA.push_back(1);" << std::endl << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

	vectorA.push_back(1);

			std::cout << "  vectorA.push_back(1);" << std::endl << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

	vectorA.push_back(1);

			std::cout << "  vectorA.push_back(1);" << std::endl << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;
}
void	testVector::member_functions__capacity__empty() {
			std::cout << "Capacity - empty():" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB(1,1);
	ft::vector<int> vectorC(5,5);
	ft::vector<int> vectorD(0,0);
	ft::vector<int> vectorE;

			std::cout << "  vector<int> vectorA;" << std::endl << std::endl;
			std::cout << "  vector<int> vectorB(1,1);" << std::endl;
			std::cout << "  vector<int> vectorC(5,5);" << std::endl;
			std::cout << "  vector<int> vectorD(0,0);" << std::endl;
			std::cout << "  vector<int> vectorE;" << std::endl << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << "      vectorE.size() is		" << vectorE.size() << std::endl << std::endl;

			std::cout << "      vectorA.empty() is	" << vectorA.empty() << std::endl;
			std::cout << "      vectorB.empty() is	" << vectorB.empty() << std::endl;
			std::cout << "      vectorC.empty() is	" << vectorC.empty() << std::endl;
			std::cout << "      vectorD.empty() is	" << vectorD.empty() << std::endl;
			std::cout << "      vectorE.empty() is	" << vectorE.empty() << std::endl << std::endl;
}
void	testVector::member_functions__capacity__reserve() {
			std::cout << "Capacity - reserve():" << std::endl << std::endl;

	ft::vector<int> vectorA(5, 5);

			std::cout << "  vector<int> vectorA(5, 5);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

	vectorA.reserve(5);

			std::cout << "  vectorA.reserve(5);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {	std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

	vectorA.reserve(6);

			std::cout << "  vectorA.reserve(6);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {	std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

	vectorA.reserve(10);

			std::cout << "  vectorA.reserve(10);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {	std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << std::endl;

	vectorA.reserve(2);

			std::cout << "  vectorA.reserve(2);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {	std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
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
			std::cout << "Capacity - operator[]:" << std::endl << std::endl;

	ft::vector<int> vectorA;

			std::cout << "  vector<int> vectorA;" << std::endl << std::endl;

	vectorA.push_back(5);
	vectorA.push_back(10);
	vectorA.push_back(15);
	vectorA.push_back(20);
	vectorA.push_back(25);

			std::cout << "  vectorA.push_back(5);" << std::endl;
			std::cout << "  vectorA.push_back(10);" << std::endl;
			std::cout << "  vectorA.push_back(15);" << std::endl;
			std::cout << "  vectorA.push_back(20);" << std::endl;
			std::cout << "  vectorA.push_back(25);" << std::endl << std::endl;

	ft::vector<int>::reference ref0(vectorA[0]);
	ft::vector<int>::const_reference ref1(vectorA[1]);
	ft::vector<int>::const_reference ref2(vectorA[2]);
	ft::vector<int>::reference ref3(vectorA[3]);
	ft::vector<int>::reference ref4(vectorA[4]);
	ft::vector<int>::const_reference ref5(vectorA[5]);
	ft::vector<int>::const_reference ref6(vectorA[-123]);

			std::cout << "  vector<int>::reference	ref0(vectorA[0]);" << std::endl;
			std::cout << "  vector<int>::const_reference	ref1(vectorA[1]);" << std::endl;
			std::cout << "  vector<int>::const_reference	ref2(vectorA[2]);" << std::endl;
			std::cout << "  vector<int>::reference	ref3(vectorA[3]);" << std::endl;
			std::cout << "  vector<int>::reference	ref4(vectorA[4]);" << std::endl;
			std::cout << "  vector<int>::const_reference	ref5(vectorA[5]);" << std::endl;
			std::cout << "  vector<int>::const_reference	ref6(vectorA[-123]);" << std::endl << std::endl;

			std::cout << "      ref0 is	" << ref0 << std::endl;
			std::cout << "      ref1 is	" << ref1 << std::endl;
			std::cout << "      ref2 is	" << ref2 << std::endl;
			std::cout << "      ref3 is	" << ref3 << std::endl;
			std::cout << "      ref4 is	" << ref4 << std::endl;
			std::cout << "      ref5 is	" << ref5 << std::endl;
			std::cout << "      ref6 is	" << ref6 << std::endl << std::endl;
}
void	testVector::member_functions__element__at() {
			std::cout << "Capacity - at():" << std::endl << std::endl;

	ft::vector<int> vectorA;

			std::cout << "  vector<int> vectorA;" << std::endl << std::endl;

	vectorA.push_back(5);
	vectorA.push_back(10);
	vectorA.push_back(15);
	vectorA.push_back(20);
	vectorA.push_back(25);

			std::cout << "  vectorA.push_back(5);" << std::endl;
			std::cout << "  vectorA.push_back(10);" << std::endl;
			std::cout << "  vectorA.push_back(15);" << std::endl;
			std::cout << "  vectorA.push_back(20);" << std::endl;
			std::cout << "  vectorA.push_back(25);" << std::endl << std::endl;

	ft::vector<int>::reference ref0(vectorA.at(0));
	ft::vector<int>::const_reference ref1(vectorA.at(1));
	ft::vector<int>::const_reference ref2(vectorA.at(2));
	ft::vector<int>::reference ref3(vectorA.at(3));
	ft::vector<int>::reference ref4(vectorA.at(4));

			std::cout << "  vector<int>::reference	ref0(at(0));" << std::endl;
			std::cout << "  vector<int>::const_reference	ref1(at(1));" << std::endl;
			std::cout << "  vector<int>::const_reference	ref2(at(2));" << std::endl;
			std::cout << "  vector<int>::reference	ref3(at(3));" << std::endl;
			std::cout << "  vector<int>::reference	ref4(at(4));" << std::endl << std::endl;

			std::cout << "      ref0 is	" << ref0 << std::endl;
			std::cout << "      ref1 is	" << ref1 << std::endl;
			std::cout << "      ref2 is	" << ref2 << std::endl;
			std::cout << "      ref3 is	" << ref3 << std::endl;
			std::cout << "      ref4 is	" << ref4 << std::endl << std::endl;

			std::cout << "  try { \n      ref0 = vectorA.at(5); \n  } " << std::endl << std::endl;

	try {
		ref0 = vectorA.at(5);
	}
	catch (const std::out_of_range& error)	{
		std::cout << error.what() << std::endl;
	}

			std::cout << std::endl;
			std::cout << "  try { \n      ref0 = vectorA.at(-123); \n  } " << std::endl << std::endl;

	try {
		ref0 = vectorA.at(-123);
	}
	catch (const std::out_of_range& error)	{
		std::cout << error.what() << std::endl;
	}

			std::cout << std::endl;
}
void	testVector::member_functions__element__front() {
			std::cout << "Capacity - front():" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;

			std::cout << "  vector<int> vectorA;" << std::endl;
			std::cout << "  vector<int> vectorB;" << std::endl << std::endl;

	vectorA.push_back(5);
	vectorA.push_back(10);
	vectorA.push_back(15);
	vectorA.push_back(20);
	vectorA.push_back(25);

			std::cout << "  vectorA.push_back(5);" << std::endl;
			std::cout << "  vectorA.push_back(10);" << std::endl;
			std::cout << "  vectorA.push_back(15);" << std::endl;
			std::cout << "  vectorA.push_back(20);" << std::endl;
			std::cout << "  vectorA.push_back(25);" << std::endl << std::endl;

			std::cout << "      vectorA.front() is	" << vectorA.front() << std::endl;
			std::cout << "      vectorA[0] is		" << vectorA[0] << std::endl << std::endl;

	vectorA.front() += 2;

			std::cout << "  vectorA.front() += 2;" << std::endl << std::endl;
			std::cout << "      vectorA.front() is	" << vectorA.front() << std::endl;
			std::cout << "      vectorA[0] is		" << vectorA[0] << std::endl << std::endl;

			std::cout << "      vectorB.front() is Segmentation Fault !" << std::endl << std::endl;
			std::cout << vectorB.front() << std::endl;
}
void	testVector::member_functions__element__back() {
			std::cout << "Capacity - back():" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;

			std::cout << "  vector<int> vectorA;" << std::endl;
			std::cout << "  vector<int> vectorB;" << std::endl << std::endl;

	vectorA.push_back(5);
	vectorA.push_back(10);
	vectorA.push_back(15);
	vectorA.push_back(20);
	vectorA.push_back(25);

			std::cout << "  vectorA.push_back(5);" << std::endl;
			std::cout << "  vectorA.push_back(10);" << std::endl;
			std::cout << "  vectorA.push_back(15);" << std::endl;
			std::cout << "  vectorA.push_back(20);" << std::endl;
			std::cout << "  vectorA.push_back(25);" << std::endl << std::endl;

			std::cout << "      vectorA.back() is		" << vectorA.back() << std::endl;
			std::cout << "      vectorA[0] is		" << vectorA[0] << std::endl << std::endl;

	vectorA.back() += 2;

			std::cout << "  vectorA.back() += 2;" << std::endl << std::endl;
			std::cout << "      vectorA.back() is		" << vectorA.back() << std::endl;
			std::cout << "      vectorA[0] is		" << vectorA[0] << std::endl << std::endl;

			std::cout << "      vectorB.back() is Segmentation Fault !" << std::endl << std::endl;
			std::cout << vectorB.back() << std::endl;
}

void	testVector::member_functions__modifiers__assign_range() {
			std::cout << "Modifiers - assign():" << std::endl << std::endl;
			std::cout << "Range assign:" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;
	ft::vector<int> vectorC;
	ft::vector<int> vectorD;

			std::cout << "  vector<int> vectorA;" << std::endl;
			std::cout << "  vector<int> vectorB;" << std::endl;
			std::cout << "  vector<int> vectorC;" << std::endl;
			std::cout << "  vector<int> vectorD;" << std::endl << std::endl;

	vectorA.push_back(5);
	vectorA.push_back(10);
	vectorA.push_back(15);

	vectorB.push_back(100);

	vectorC.push_back(17);
	vectorC.push_back(27);
	vectorC.push_back(37);
	vectorC.push_back(47);
	vectorC.push_back(57);

			std::cout << "  vectorA.push_back(5);" << std::endl;
			std::cout << "  vectorA.push_back(10);" << std::endl;
			std::cout << "  vectorA.push_back(15);" << std::endl << std::endl;

			std::cout << "  vectorB.push_back(100);" << std::endl << std::endl;

			std::cout << "  vectorC.push_back(17);" << std::endl;
			std::cout << "  vectorC.push_back(27);" << std::endl;
			std::cout << "  vectorC.push_back(37);" << std::endl;
			std::cout << "  vectorC.push_back(47);" << std::endl;
			std::cout << "  vectorC.push_back(57);" << std::endl << std::endl;

	ft::vector<int> copy_vectorA(vectorA);
	ft::vector<int> copy_vectorB(vectorB);
	ft::vector<int> copy_vectorC(vectorC);
	ft::vector<int> copy_vectorD(vectorD);

			std::cout << "  vector<int> copy_vectorA(vectorA);" << std::endl;
			std::cout << "  vector<int> copy_vectorB(vectorB);" << std::endl;
			std::cout << "  vector<int> copy_vectorC(vectorC);" << std::endl;
			std::cout << "  vector<int> copy_vectorD(vectorD);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << std::endl;

	vectorA.assign(copy_vectorB.begin(), copy_vectorB.end());
	vectorB.assign(copy_vectorB.begin(), copy_vectorB.end());
	vectorC.assign(copy_vectorB.begin(), copy_vectorB.end());

			std::cout << "  vectorA.assign(copy_vectorB.begin(), copy_vectorB.end());" << std::endl;
			std::cout << "  vectorB.assign(copy_vectorB.begin(), copy_vectorB.end());" << std::endl;
			std::cout << "  vectorC.assign(copy_vectorB.begin(), copy_vectorB.end());" << std::endl << std::endl;


			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << std::endl;

	vectorA.assign(copy_vectorA.begin(), copy_vectorA.end());
	vectorB.assign(copy_vectorA.begin(), copy_vectorA.end());
	vectorC.assign(copy_vectorA.begin(), copy_vectorA.end());

			std::cout << "  vectorA.assign(copy_vectorA.begin(), copy_vectorA.end());" << std::endl;
			std::cout << "  vectorB.assign(copy_vectorA.begin(), copy_vectorA.end());" << std::endl;
			std::cout << "  vectorC.assign(copy_vectorA.begin(), copy_vectorA.end());" << std::endl << std::endl;


			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << std::endl;

	vectorA.assign(copy_vectorC.begin(), copy_vectorC.end());
	vectorB.assign(copy_vectorC.begin(), copy_vectorC.end());
	vectorC.assign(copy_vectorC.begin(), copy_vectorC.end());

			std::cout << "  vectorA.assign(copy_vectorC.begin(), copy_vectorC.end());" << std::endl;
			std::cout << "  vectorB.assign(copy_vectorC.begin(), copy_vectorC.end());" << std::endl;
			std::cout << "  vectorC.assign(copy_vectorC.begin(), copy_vectorC.end());" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << std::endl;

	vectorA.assign(copy_vectorD.begin(), copy_vectorD.end());
	vectorB.assign(copy_vectorD.begin(), copy_vectorD.end());
	vectorC.assign(copy_vectorD.begin(), copy_vectorD.end());

			std::cout << "  vectorA.assign(copy_vectorD.begin(), copy_vectorD.end());" << std::endl;
			std::cout << "  vectorB.assign(copy_vectorD.begin(), copy_vectorD.end());" << std::endl;
			std::cout << "  vectorC.assign(copy_vectorD.begin(), copy_vectorD.end());" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << std::endl;

	vectorD.assign(copy_vectorA.begin(), copy_vectorA.end());

			std::cout << "  vectorD.assign(copy_vectorA.begin(), copy_vectorA.end());" << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << std::endl;
}
void	testVector::member_functions__modifiers__assign_fill() {
			std::cout << "Modifiers - assign():" << std::endl << std::endl;
			std::cout << "Fill assign:" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;
	ft::vector<int> vectorC;
	ft::vector<int> vectorD;

			std::cout << "  vector<int> vectorA;" << std::endl;
			std::cout << "  vector<int> vectorB;" << std::endl;
			std::cout << "  vector<int> vectorC;" << std::endl;
			std::cout << "  vector<int> vectorD;" << std::endl << std::endl;

	vectorA.push_back(5);
	vectorA.push_back(10);
	vectorA.push_back(15);

	vectorB.push_back(100);

	vectorC.push_back(17);
	vectorC.push_back(27);
	vectorC.push_back(37);
	vectorC.push_back(47);
	vectorC.push_back(57);

			std::cout << "  vectorA.push_back(5);" << std::endl;
			std::cout << "  vectorA.push_back(10);" << std::endl;
			std::cout << "  vectorA.push_back(15);" << std::endl << std::endl;

			std::cout << "  vectorB.push_back(100);" << std::endl << std::endl;

			std::cout << "  vectorC.push_back(17);" << std::endl;
			std::cout << "  vectorC.push_back(27);" << std::endl;
			std::cout << "  vectorC.push_back(37);" << std::endl;
			std::cout << "  vectorC.push_back(47);" << std::endl;
			std::cout << "  vectorC.push_back(57);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << std::endl;

	vectorA.assign(1, 2);
	vectorB.assign(1, 2);
	vectorC.assign(1, 2);
	vectorD.assign(1, 2);

			std::cout << "  vectorA.assign(1, 2);" << std::endl;
			std::cout << "  vectorB.assign(1, 2);" << std::endl;
			std::cout << "  vectorC.assign(1, 2);" << std::endl;
			std::cout << "  vectorD.assign(1, 2);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << std::endl;

	vectorA.assign(5, 2);
	vectorB.assign(5, 2);
	vectorC.assign(5, 2);
	vectorD.assign(5, 2);

			std::cout << "  vectorA.assign(5, 2);" << std::endl;
			std::cout << "  vectorB.assign(5, 2);" << std::endl;
			std::cout << "  vectorC.assign(5, 2);" << std::endl;
			std::cout << "  vectorD.assign(5, 2);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << std::endl;

	vectorA.assign(0, 2);
	vectorB.assign(0, 2);
	vectorC.assign(0, 2);
	vectorD.assign(0, 2);

			std::cout << "  vectorA.assign(5, 2);" << std::endl;
			std::cout << "  vectorB.assign(5, 2);" << std::endl;
			std::cout << "  vectorC.assign(5, 2);" << std::endl;
			std::cout << "  vectorD.assign(5, 2);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << std::endl;

	vectorA.assign(1, 2);
	vectorB.assign(1, 2);
	vectorC.assign(1, 2);
	vectorD.assign(1, 2);

			std::cout << "  vectorA.assign(5, 2);" << std::endl;
			std::cout << "  vectorB.assign(5, 2);" << std::endl;
			std::cout << "  vectorC.assign(5, 2);" << std::endl;
			std::cout << "  vectorD.assign(5, 2);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorD is		[ " ;
			for (ft::vector<int>::iterator itA = vectorD.begin(); itA != vectorD.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorD.capacity() is	" << vectorD.capacity() << std::endl;
			std::cout << "      vectorD.size() is		" << vectorD.size() << std::endl;
			std::cout << std::endl;
}
void	testVector::member_functions__modifiers__push_back() {
			std::cout << "Modifiers - push_back():" << std::endl << std::endl;

	ft::vector<int> vectorA(2, 2);

			std::cout << "  vector<int> vectorA(2, 2);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;


	vectorA.push_back(5);

			std::cout << "  vectorA.push_back(5);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

	vectorA.push_back(5);

			std::cout << "  vectorA.push_back(5);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

	vectorA.push_back(5);

			std::cout << "  vectorA.push_back(5);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;
}
void	testVector::member_functions__modifiers__pop_back() {
			std::cout << "Modifiers - pop_back():" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;

			std::cout << "  vector<int> vectorA;" << std::endl;
			std::cout << "  vector<int> vectorB;" << std::endl << std::endl;

	vectorA.push_back(5);
	vectorA.push_back(10);
	vectorA.push_back(15);

			std::cout << "  vectorA.push_back(5);" << std::endl;
			std::cout << "  vectorA.push_back(10);" << std::endl;
			std::cout << "  vectorA.push_back(15);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;


	vectorA.pop_back();

			std::cout << "  vectorA.pop_back();" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

	vectorA.pop_back();

			std::cout << "  vectorA.pop_back();" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

	vectorA.pop_back();

			std::cout << "  vectorA.pop_back();" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "  vectorA.pop_back() is undefined behavior!" << std::endl;
			std::cout << "  vectorB.pop_back() is undefined behavior!" << std::endl << std::endl;

	vectorA.pop_back();
	vectorB.pop_back();
}
void	testVector::member_functions__modifiers__insert_single_element() {
			std::cout << "Modifiers - insert():" << std::endl << std::endl;
			std::cout << "Single element:" << std::endl << std::endl;

	typedef ft::vector<int>::iterator it;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;
	ft::vector<int> vectorC;

			std::cout << "  typedef ft::vector<int>::iterator it;" << std::endl << std::endl;

			std::cout << "  vector<int> vectorA;" << std::endl;
			std::cout << "  vector<int> vectorB;" << std::endl;
			std::cout << "  vector<int> vectorC;" << std::endl << std::endl;

	vectorB.push_back(100);

	vectorC.push_back(7);
	vectorC.push_back(17);
	vectorC.push_back(27);

			std::cout << "  vectorB.push_back(100);" << std::endl << std::endl;

			std::cout << "  vectorC.push_back(7);" << std::endl;
			std::cout << "  vectorC.push_back(17);" << std::endl;
			std::cout << "  vectorC.push_back(27);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
			std::cout << "      vectorB.end() is		" << *vectorB.end() << std::endl;

			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
			std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;

			std::cout << std::endl;

	it itA = vectorA.insert(vectorA.begin(), 1);
	it itB = vectorB.insert(vectorB.begin() + 1, 200);
	it itC = vectorC.insert(vectorC.begin() + 2, 37);

			std::cout << "  it itA = vectorA.insert(vectorA.begin(), 1);" << std::endl;
			std::cout << "  it itB = vectorB.insert(vectorB.begin() + 1, 200);" << std::endl;
			std::cout << "  it itC = vectorC.insert(vectorC.begin() + 2, 37);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
			std::cout << "      vectorA.end() is		" << *vectorA.end() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
			std::cout << "      vectorB.end() is		" << *vectorB.end() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << "      *itC is			" << *itC << std::endl;
			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
			std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
			std::cout << std::endl;

	itA = vectorA.insert(vectorA.end() - 1, 2);
	itB = vectorB.insert(vectorB.end() - 1, 300);
	itC = vectorC.insert(vectorC.end() - 1, 47);

			std::cout << "  itA = vectorA.insert(vectorA.end() - 1, 2);" << std::endl;
			std::cout << "  itB = vectorB.insert(vectorB.end() - 1, 300);" << std::endl;
			std::cout << "  itC = vectorC.insert(vectorC.end() - 1, 47);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
			std::cout << "      vectorA.end() is		" << *vectorA.end() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
			std::cout << "      vectorB.end() is		" << *vectorB.end() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << "      *itC is			" << *itC << std::endl;
			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
			std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
			std::cout << std::endl;

	itA = vectorA.insert(vectorA.end(), 3);
	itB = vectorB.insert(vectorB.end(), 400);
	itC = vectorC.insert(vectorC.end(), 57);

			std::cout << "  itA = vectorA.insert(vectorA.end(), 3);" << std::endl;
			std::cout << "  itB = vectorB.insert(vectorB.end(), 400);" << std::endl;
			std::cout << "  itC = vectorC.insert(vectorC.end(), 57);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
			std::cout << "      vectorA.end() is		" << *vectorA.end() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
			std::cout << "      vectorB.end() is		" << *vectorB.end() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << "      *itC is			" << *itC << std::endl;
			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
			std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
			std::cout << std::endl;

	itA = vectorA.erase(vectorA.begin(), vectorA.end() - 2);
	itB = vectorB.erase(vectorB.begin(), vectorB.end() - 2);
	itC = vectorC.erase(vectorC.begin(), vectorC.end() - 2);

			std::cout << "  vectorA.erase(vectorA.begin(), vectorA.end() - 2);" << std::endl;
			std::cout << "  vectorB.erase(vectorB.begin(), vectorB.end() - 2);" << std::endl;
			std::cout << "  vectorC.erase(vectorC.begin(), vectorC.end() - 2);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
			std::cout << "      vectorA.end() is		" << *vectorA.end() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
			std::cout << "      vectorB.end() is		" << *vectorB.end() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << "      *itC is			" << *itC << std::endl;
			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
			std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
			std::cout << std::endl;

	itA = vectorA.insert(vectorA.begin(), 1);
	itB = vectorB.insert(vectorB.begin(), 4);
	itC = vectorC.insert(vectorC.begin(), 3);

			std::cout << "  itA = vectorA.insert(vectorA.begin(), 1);" << std::endl;
			std::cout << "  itB = vectorB.insert(vectorB.begin(), 4);" << std::endl;
			std::cout << "  itC = vectorC.insert(vectorB.begin(), 3);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << "      vectorA.begin() is	" << *vectorA.begin() << std::endl;
			std::cout << "      vectorA.end() is		" << *vectorA.end() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << "      vectorB.begin() is	" << *vectorB.begin() << std::endl;
			std::cout << "      vectorB.end() is		" << *vectorB.end() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << "      *itC is			" << *itC << std::endl;
			std::cout << "      vectorC.begin() is	" << *vectorC.begin() << std::endl;
			std::cout << "      vectorC.end() is		" << *vectorC.end() << std::endl;
			std::cout << std::endl;
}
void	testVector::member_functions__modifiers__insert_fill() {
			std::cout << "Modifiers - insert():" << std::endl << std::endl;
			std::cout << "Fill:" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;
	ft::vector<int> vectorC;

			std::cout << "  vector<int> vectorA;" << std::endl;
			std::cout << "  vector<int> vectorB;" << std::endl;
			std::cout << "  vector<int> vectorC;" << std::endl << std::endl;

	vectorB.push_back(100);

	vectorC.push_back(7);
	vectorC.push_back(17);
	vectorC.push_back(27);

			std::cout << "  vectorB.push_back(100);" << std::endl << std::endl;

			std::cout << "  vectorC.push_back(7);" << std::endl;
			std::cout << "  vectorC.push_back(17);" << std::endl;
			std::cout << "  vectorC.push_back(27);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

	vectorA.insert(vectorA.begin(), 0, 1);
	vectorB.insert(vectorB.begin() + 1, 0, 200);
	vectorC.insert(vectorC.begin() + 2, 0, 37);

			std::cout << "  vectorA.insert(vectorA.begin(), 0, 1);" << std::endl;
			std::cout << "  vectorB.insert(vectorB.begin() + 1, 0, 200);" << std::endl;
			std::cout << "  vectorC.insert(vectorC.begin() + 2, 0, 37);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

	vectorA.insert(vectorA.end(), 5, 2);
	vectorB.insert(vectorB.end(), 5, 300);
	vectorC.insert(vectorC.end(), 5, 47);

			std::cout << "  vectorA.insert(vectorA.end(), 5, 2);" << std::endl;
			std::cout << "  vectorB.insert(vectorB.end(), 5, 300);" << std::endl;
			std::cout << "  vectorC.insert(vectorC.end(), 5, 47);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

	vectorA.insert(vectorA.end() - 1, 1, 3);
	vectorB.insert(vectorB.end() - 1, 1, 400);
	vectorC.insert(vectorC.end() - 1, 1, 57);

			std::cout << "  vectorA.insert(vectorA.end() - 1, 1, 3);" << std::endl;
			std::cout << "  vectorB.insert(vectorB.end() - 1, 1, 400);" << std::endl;
			std::cout << "  vectorC.insert(vectorC.end() - 1, 1, 57);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

	vectorA.erase(vectorA.begin(), vectorA.end() - 2);
	vectorB.erase(vectorB.begin(), vectorB.end() - 2);
	vectorC.erase(vectorC.begin(), vectorC.end() - 2);

			std::cout << "  vectorA.erase(vectorA.begin(), vectorA.end() - 2);" << std::endl;
			std::cout << "  vectorB.erase(vectorB.begin(), vectorB.end() - 2);" << std::endl;
			std::cout << "  vectorC.erase(vectorC.begin(), vectorC.end() - 2);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

	vectorA.insert(vectorA.begin(), 10, 1);
	vectorB.insert(vectorB.begin(), 10, 4);
	vectorC.insert(vectorC.begin(), 10, 3);

			std::cout << "  vectorA.insert(vectorA.begin(), 10, 1);" << std::endl;
			std::cout << "  vectorB.insert(vectorB.begin(), 10, 4);" << std::endl;
			std::cout << "  vectorC.insert(vectorB.begin(), 10, 3);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;
}
void	testVector::member_functions__modifiers__insert_range() {
			std::cout << "Modifiers - insert():" << std::endl << std::endl;
			std::cout << "Range:" << std::endl << std::endl;
}
void	testVector::member_functions__modifiers__erase_position() {
			std::cout << "Modifiers - erase():" << std::endl << std::endl;
			std::cout << "Erase position:" << std::endl << std::endl;

	typedef ft::vector<int>::iterator it;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;
	ft::vector<int> vectorC;

			std::cout << "  typename std::vector<int>::iterator it;" << std::endl << std::endl;

			std::cout << "  vector<int> vectorA;" << std::endl;
			std::cout << "  vector<int> vectorB;" << std::endl;
			std::cout << "  vector<int> vectorC;" << std::endl << std::endl;

	vectorA.push_back(5);
	vectorA.push_back(10);
	vectorA.push_back(15);
	vectorA.push_back(20);
	vectorA.push_back(25);
	vectorA.push_back(30);

	vectorB.push_back(1);
	vectorB.push_back(2);
	vectorB.push_back(3);
	vectorB.push_back(4);

			std::cout << "  vectorA.push_back(5);" << std::endl;
			std::cout << "  vectorA.push_back(10);" << std::endl;
			std::cout << "  vectorA.push_back(15);" << std::endl;
			std::cout << "  vectorA.push_back(20);" << std::endl;
			std::cout << "  vectorA.push_back(25);" << std::endl;
			std::cout << "  vectorA.push_back(30);" << std::endl << std::endl;

			std::cout << "  vectorA.push_back(1);" << std::endl;
			std::cout << "  vectorA.push_back(2);" << std::endl;
			std::cout << "  vectorA.push_back(3);" << std::endl;
			std::cout << "  vectorA.push_back(4);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

	it itA = vectorA.erase(vectorA.end() - 2);
	it itB = vectorB.erase(vectorB.end() - 1);

			std::cout << "  it itA = vectorA.erase(vectorA.end() - 2);" << std::endl;
			std::cout << "  it itB = vectorB.erase(vectorB.end() - 1);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

	itA = vectorA.erase(vectorA.begin());
	itB = vectorB.erase(vectorB.begin());

			std::cout << "  itA = vectorA.erase(vectorA.begin());" << std::endl;
			std::cout << "  itB = vectorB.erase(vectorB.begin());" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

	itA = vectorA.erase(vectorA.begin());
	itB = vectorB.erase(vectorB.begin());

			std::cout << "  itA = vectorA.erase(vectorA.begin());" << std::endl;
			std::cout << "  itB = vectorB.erase(vectorB.begin());" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

	itA = vectorA.erase(vectorA.begin());
	itB = vectorB.erase(vectorB.begin());

			std::cout << "  itA = vectorA.erase(vectorA.begin());" << std::endl;
			std::cout << "  itB = vectorB.erase(vectorB.begin());" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

			std::cout << "  vectorC.erase(vectorC.begin()) is Segmentation Fault !" << std::endl
																					<< std::endl;

	vectorC.erase(vectorC.begin());
}
void	testVector::member_functions__modifiers__erase_range() {
			std::cout << "Modifiers - erase():" << std::endl << std::endl;
			std::cout << "Erase range:" << std::endl << std::endl;

	typedef ft::vector<int>::iterator it;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;

			std::cout << "  typename std::vector<int>::iterator it;" << std::endl << std::endl;

			std::cout << "  vector<int> vectorA;" << std::endl;
			std::cout << "  vector<int> vectorB;" << std::endl << std::endl;

	vectorA.push_back(5);
	vectorA.push_back(10);
	vectorA.push_back(15);
	vectorA.push_back(20);
	vectorA.push_back(25);
	vectorA.push_back(30);
	vectorA.push_back(35);
	vectorA.push_back(40);
	vectorA.push_back(45);
	vectorA.push_back(50);

	vectorB.push_back(1);
	vectorB.push_back(2);
	vectorB.push_back(3);

			std::cout << "  vectorA.push_back(5);" << std::endl;
			std::cout << "  vectorA.push_back(10);" << std::endl;
			std::cout << "  vectorA.push_back(15);" << std::endl;
			std::cout << "  vectorA.push_back(20);" << std::endl;
			std::cout << "  vectorA.push_back(25);" << std::endl;
			std::cout << "  vectorA.push_back(30);" << std::endl;
			std::cout << "  vectorA.push_back(35);" << std::endl;
			std::cout << "  vectorA.push_back(40);" << std::endl;
			std::cout << "  vectorA.push_back(45);" << std::endl;
			std::cout << "  vectorA.push_back(50);" << std::endl << std::endl;

			std::cout << "  vectorA.push_back(1);" << std::endl;
			std::cout << "  vectorA.push_back(2);" << std::endl;
			std::cout << "  vectorA.push_back(3);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

	it itA = vectorA.erase(vectorA.begin() + 2, vectorA.begin() + 2);
	it itB = vectorB.erase(vectorB.end() - 2, vectorB.end() - 2);

			std::cout << "  it itA =  vectorA.erase(vectorA.begin() + 2, vectorA.begin() + 2);" << std::endl;
			std::cout << "  it itB = vectorB.erase(vectorB.end() - 2, vectorB.end() - 2);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << std::endl;

	itA = vectorA.erase(vectorA.begin(), vectorA.end() - 3);
	itB = vectorB.erase(vectorB.begin(), vectorB.end() - 3);

			std::cout << "  itA = vectorA.erase(vectorA.begin(), vectorA.end() - 3);" << std::endl;
			std::cout << "  itB = vectorB.erase(vectorB.begin(), vectorB.end() - 3);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << std::endl;

	itA = vectorA.erase(vectorA.begin() + 1, vectorA.end() - 1);
	itB = vectorB.erase(vectorB.begin() + 1, vectorB.end() - 1);

			std::cout << "  itA = vectorA.erase(vectorA.begin() + 1, vectorA.end() - 1);" << std::endl;
			std::cout << "  itB = vectorB.erase(vectorB.begin() + 1, vectorB.end() - 1);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << std::endl;

	itA = vectorA.erase(vectorA.begin(), vectorA.end() - 1);
	itB = vectorB.erase(vectorB.begin(), vectorB.end() - 1);

			std::cout << "  itA = vectorA.erase(vectorA.begin(), vectorA.end() - 1);" << std::endl;
			std::cout << "  itB = vectorB.erase(vectorB.begin(), vectorB.end() - 1);" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << std::endl;

	itA = vectorA.erase(vectorA.begin(), vectorA.end());
	itB = vectorB.erase(vectorB.begin(), vectorB.end());

			std::cout << "  itA = vectorA.erase(vectorA.begin(), vectorA.end());" << std::endl;
			std::cout << "  itB = vectorB.erase(vectorB.begin(), vectorB.end());" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << "      *itB is			" << *itB << std::endl;
			std::cout << std::endl;
}
void	testVector::member_functions__modifiers__swap() {

}
void	testVector::member_functions__modifiers__clear() {
			std::cout << "Modifiers - clear():" << std::endl << std::endl;

	ft::vector<int> vectorA(5,5);
	ft::vector<int> vectorB(12,5);
	ft::vector<int> vectorC;

			std::cout << "  vector<int> vectorA(5,5);" << std::endl;
			std::cout << "  vector<int> vectorB(100,5);" << std::endl;
			std::cout << "  vector<int> vectorC;" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;

	vectorA.clear();
	vectorB.clear();
	vectorC.clear();

			std::cout << "  vectorA.clear();" << std::endl;
			std::cout << "  vectorB.clear();" << std::endl;
			std::cout << "  vectorC.clear();" << std::endl << std::endl;

			std::cout << "      vectorA is		[ " ;
			for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorA.capacity() is	" << vectorA.capacity() << std::endl;
			std::cout << "      vectorA.size() is		" << vectorA.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorB is		[ " ;
			for (ft::vector<int>::iterator itA = vectorB.begin(); itA != vectorB.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorB.capacity() is	" << vectorB.capacity() << std::endl;
			std::cout << "      vectorB.size() is		" << vectorB.size() << std::endl;
			std::cout << std::endl;

			std::cout << "      vectorC is		[ " ;
			for (ft::vector<int>::iterator itA = vectorC.begin(); itA != vectorC.end(); itA++) { std::cout << *itA << " ";	}
			std::cout << "]" << std::endl;

			std::cout << "      vectorC.capacity() is	" << vectorC.capacity() << std::endl;
			std::cout << "      vectorC.size() is		" << vectorC.size() << std::endl;
			std::cout << std::endl;
}

void	testVector::member_functions__allocator__get_allocator() {

}

void	testVector::member_functions__overloads__relational_operators() {

}
void	testVector::member_functions__overloads__swap() {

}
