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

	ft::vector<int> vectorA(123545, 42);
	ft::vector<int> vectorB(543210, 42);
	ft::vector<int> vectorC(0, 0);
	ft::vector<int> vectorD(1, 1);
	ft::vector<int> vectorE;

			std::cout << "  vector<int> vectorA(123545, 42);" << std::endl;
			std::cout << "  vector<int> vectorB(543210, 42);" << std::endl;
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

}
void	testVector::member_functions__capacity__max_size() {
			std::cout << "Capacity - max_size():" << std::endl << std::endl;

	ft::vector<int> vectorA(5, 5);

			std::cout << "  vector<int> vectorA(5, 5);" << std::endl << std::endl;

			std::cout << "      vectorA.max_size() is	" << vectorA.max_size() << std::endl;
			std::cout << std::endl;
}
void	testVector::member_functions__capacity__resize() {
			std::cout << "Capacity - resize():" << std::endl << std::endl;

}
void	testVector::member_functions__capacity__capacity() {
			std::cout << "Capacity - capacity():" << std::endl << std::endl;

}
void	testVector::member_functions__capacity__empty() {
			std::cout << "Capacity - empty():" << std::endl << std::endl;

}
void	testVector::member_functions__capacity__reserve() {
			std::cout << "Capacity - reserve():" << std::endl << std::endl;

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
