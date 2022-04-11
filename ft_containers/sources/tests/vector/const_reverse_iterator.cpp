#include "../../../includes/main.hpp"

void	testVector::member_types__const_reverse_iterator__default_member_functions() {
			std::cout << "Const Reverse Iterator default member functions: " << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;
			std::cout << "  vector<int>	vectorA;" << std::endl;
			std::cout << "  vector<int>	vectorB;" << std::endl << std::endl;

	for (int i = 5; i < 40; i += 5) { vectorA.push_back(i);	}
	for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }
			std::cout << "  for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }" << std::endl;
			std::cout << "  for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }" << std::endl << std::endl;

	ft::vector<int>::const_reverse_iterator itA = vectorA.rbegin();
	ft::vector<int>::const_reverse_iterator itB = vectorB.rbegin();
			std::cout << "  vector<int>::const_reverse_iterator itA = vectorA.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itB = vectorB.rbegin();" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl;
			std::cout << "      *itB is	" << *itB << std::endl;
			std::cout << std::endl;


	 //*********************//
	// Default Constructor //
			std::cout << "Default Constructor:" << std::endl << std::endl;

	ft::vector<int>::const_reverse_iterator itDefault;
			std::cout << "  vector<int>::const_reverse_iterator	itDefault;" << std::endl;
			std::cout << std::endl;

	 //******************//
	// Copy Constructor //
			std::cout << "Copy Constructor:" << std::endl << std::endl;

	ft::vector<int>::const_reverse_iterator itCopyConstructor(itA);

			std::cout << "  vector<int>::const_reverse_iterator	itCopyConstructor(itA);" << std::endl << std::endl;
			std::cout << "      *itCopyConstructor is	" << *itCopyConstructor << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << std::endl;

	 //****************//
	// Copy Assigment //
			std::cout << "Copy Assigment:" << std::endl << std::endl;

	ft::vector<int>::const_reverse_iterator itCopyAssigment = itA;

			std::cout << "  vector<int>::const_reverse_iterator itCopyAssigment = itA;" << std::endl << std::endl;
			std::cout << "      *itCopyAssigment is	" << *itCopyAssigment << std::endl;
			std::cout << "      *itA is			" << *itA << std::endl;
			std::cout << std::endl;
}
void	testVector::member_types__const_reverse_iterator__relational_operators() {
			std::cout << "Const Reverse Iterator relational operators:" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;

			std::cout << "  vector<int>	vectorA;" << std::endl;
			std::cout << "  vector<int>	vectorB;" << std::endl << std::endl;

	for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }
	for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }

			std::cout << "  for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }" << std::endl;
			std::cout << "  for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }" << std::endl << std::endl;

	ft::vector<int>::const_reverse_iterator itA = vectorA.rbegin();
	ft::vector<int>::const_reverse_iterator itB = vectorB.rbegin();
	ft::vector<int>::const_reverse_iterator itC = itA;

			std::cout << "  vector<int>::const_reverse_iterator itA = vectorA.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itB = vectorB.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itC = itA;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl;
			std::cout << "      *itB is	" << *itB << std::endl;
			std::cout << "      *itC is	" << *itC << std::endl << std::endl;

	 //**********************************//
	// Equality comparisons (== and !=) //

			std::cout << "Equality Comparisons (== and !=): " << std::endl << std::endl;

	if (itA == itB)
			std::cout << "      (itA == itB) is	true" << std::endl;
	if (itA != itB)
			std::cout << "      (itA != itB) is	true" << std::endl;
	if (itC == itA) {
			std::cout << "      (itC == itA) is	true" << std::endl << std::endl;
	}

	 //******************************************//
	// Inequality comparisons (<, >, <= and >=) //
			std::cout << "Inequality comparisons (<, >, <= and >=):" << std::endl << std::endl;

	if (itA < itB)
			std::cout << "      itA < itB is	true" << std::endl;
	if (itA <= itB)
			std::cout << "      itA <= itB is	true" << std::endl;
	if (itA > itB)
			std::cout << "      itA > itB is	true" << std::endl;
	if (itA >= itB)
			std::cout << "      itA >= itB is	true" << std::endl;
	if (itB < itA)
			std::cout << "      itB < itA is	true" << std::endl;
	if (itB <= itA)
			std::cout << "      itB <= itA is	true" << std::endl;
	if (itB > itA)
			std::cout << "      itB > itA is	true" << std::endl;
	if (itB >= itA) {
			std::cout << "      itB >= itA is	true" << std::endl;
	}

			std::cout << std::endl;
}
void	testVector::member_types__const_reverse_iterator__dereferences() {
			std::cout << "Const Reverse Iterator dereferences:" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;

			std::cout << "  vector<int>	vectorA;" << std::endl;
			std::cout << "  vector<int>	vectorB;" << std::endl << std::endl;

	for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }
	for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }

			std::cout << "  for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }" << std::endl;
			std::cout << "  for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }" << std::endl << std::endl;

	ft::vector<int>::const_reverse_iterator itA = vectorA.rbegin();
	ft::vector<int>::const_reverse_iterator itB = vectorB.rbegin();
	ft::vector<int>::const_reverse_iterator itC = itA;

			std::cout << "  vector<int>::const_reverse_iterator itA = vectorA.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itB = vectorB.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itC = itA;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl;
			std::cout << "      *itB is	" << *itB << std::endl;
			std::cout << "      *itC is	" << *itC << std::endl << std::endl;

	 //**********************************//
	// Offset Dereference Operator ([]) //
			std::cout << "Offset Dereference Operator ([]):" << std::endl << std::endl;

			std::cout << "      itA[0] is	" << itA[0] << std::endl;
			std::cout << "      itA[1] is	" << itA[1] << std::endl;
			std::cout << "      itA[5] is	" << itA[5] << std::endl << std::endl;
}
void	testVector::member_types__const_reverse_iterator__increment_decrement_operators() {
			std::cout << "Const Reverse Iterator increment and decrement operators:" << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;

			std::cout << "  vector<int>	vectorA;" << std::endl;
			std::cout << "  vector<int>	vectorB;" << std::endl << std::endl;

	for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }
	for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }

			std::cout << "  for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }" << std::endl;
			std::cout << "  for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }" << std::endl << std::endl;

	ft::vector<int>::const_reverse_iterator itA = vectorA.rbegin();
	ft::vector<int>::const_reverse_iterator itB = vectorB.rbegin();
	ft::vector<int>::const_reverse_iterator itC = itA;

			std::cout << "  vector<int>::const_reverse_iterator itA = vectorA.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itB = vectorB.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itC = itA;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl;
			std::cout << "      *itB is	" << *itB << std::endl;
			std::cout << "      *itC is	" << *itC << std::endl << std::endl;

	 //***********//
	// Increment //
			std::cout << "Increment:" << std::endl << std::endl;

	itA++;
			std::cout << "  itA++;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

	*itA++;
			std::cout << "  *itA++;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

	++itA;
			std::cout << "  ++itA;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

/*	++*itA;
			std::cout << "  ++*itA;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl << std::endl;
*/
	itA = itC;
			std::cout << "  itA = itC;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl;
			std::cout << "      *itC is	" << *itC << std::endl << std::endl;

	itA++;
	itC++;
			std::cout << "  itA++;" << std::endl;
			std::cout << "  itC++;" << std::endl << std::endl;

	if (itC == itA) {
			std::cout << "      (itC == itA) is	true" << std::endl << std::endl;
	}

	 //*************//
	// Decremented //
			std::cout << "Decrement:" << std::endl << std::endl;

	itA++;
	itA++;
	itA++;

			std::cout << "  itA++;" << std::endl;
			std::cout << "  itA++;" << std::endl;
			std::cout << "  itA++;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

	itA--;
			std::cout << "  itA--;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

	*itA--;
			std::cout << "  *itA--;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

	--itA;
			std::cout << "  --itA;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

/*	--*itA;
			std::cout << "  --*itA;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl << std::endl;
*/
	itA = itC;
			std::cout << "  itA = itC;" << std::endl << std::endl;

			std::cout << "      *itA is	" << *itA << std::endl;
			std::cout << "      *itC is	" << *itC << std::endl << std::endl;

	if (itC == itA) {
			std::cout << "      (itC == itA) is	true" << std::endl << std::endl;
	}

	itA--;
	itC--;
			std::cout << "  itA--;" << std::endl;
			std::cout << "  itC--;" << std::endl << std::endl;

	if (itC == itA) {
			std::cout << "      (itC == itA) is	true" << std::endl << std::endl;
	}
}
void	testVector::member_types__const_reverse_iterator__arithmetic_operators() {
			std::cout << "Const Reverse Iterator arithmetic operators:" << std::endl << std::endl;
	ft::vector<int> vectorA;
	ft::vector<int> vectorB;
	ft::vector<int> vectorC;
	ft::vector<int> vectorD(1, 1);

			std::cout << "  vector<int>	vectorA;" << std::endl;
			std::cout << "  vector<int>	vectorB;" << std::endl;
			std::cout << "  vector<int>	vectorC;" << std::endl;
			std::cout << "  vector<int>	vectorD(1, 1);" << std::endl << std::endl;

	for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }
	for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }
	for (int i = 1; i < 5; i += 1) { vectorC.push_back(i); }

			std::cout << "  for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }" << std::endl;
			std::cout << "  for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }" << std::endl;
			std::cout << "  for (int i = 1; i < 5; i += 1) { vectorB.push_back(i); }" << std::endl << std::endl;

	ft::vector<int>::const_reverse_iterator itA = vectorA.rbegin();
	ft::vector<int>::const_reverse_iterator itB = vectorB.rbegin();
	ft::vector<int>::const_reverse_iterator itC = itA;
	ft::vector<int>::const_reverse_iterator itD = vectorD.rbegin();
	ft::vector<int>::const_reverse_iterator itE = vectorC.rend();

			std::cout << "  vector<int>::const_reverse_iterator itA = vectorA.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itB = vectorB.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itC = itA;" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itD = vectorC.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itE = vectorC.rend();" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl;
			std::cout << "      *itB is	" << *itB << std::endl;
			std::cout << "      *itC is	" << *itC << std::endl;
			std::cout << "      *itD is	" << *itD << std::endl;
			//std::cout << "      *itE is	" << *itE << std::endl << std::endl;

	 //******************************//
	// Arithmetic operators + and - //
			std::cout << " Arithmetic operators + and -:" << std::endl << std::endl;

	itA = itA + 1;
			std::cout << "  itA = itA + 1;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

	itA = itA - 1;
			std::cout << "  itA = itA - 1;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

	ft::vector<int>::difference_type difA = itB - itA;
	ft::vector<int>::difference_type difB = itD - itE;
	ft::vector<int>::difference_type difC = itE - itD;
	ft::vector<int>::difference_type difD = itC - itE;

			std::cout << "  vector<int>::difference_type difA = itB - itA;" << std::endl;
			std::cout << "  vector<int>::difference_type difB = itD - itE;" << std::endl ;
			std::cout << "  vector<int>::difference_type difC = itE - itD;" << std::endl;
			std::cout << "  vector<int>::difference_type difD = itC - itE;" << std::endl << std::endl;
			std::cout << "      difA is	" << difA << std::endl;
			std::cout << "      difB is	" << difB << std::endl;
			std::cout << "      difC is	" << difC << std::endl;
			std::cout << "      difD is	" << difD << std::endl << std::endl;
			std::cout << "      std::distance(itA, itB) is	" << std::distance(itA, itB) << std::endl;
			std::cout << "      std::distance(itE, itD) is	" << std::distance(itE, itD) << std::endl;
			std::cout << "      std::distance(itD, itE) is	" << std::distance(itD, itE) << std::endl;
			std::cout << "      std::distance(itE, itC) is	" << std::distance(itE, itC) << std::endl << std::endl;
}
void	testVector::member_types__const_reverse_iterator__assignment_operators() {
			std::cout << "Const Reverse Iterator assigment operators:" << std::endl << std::endl;
	ft::vector<int> vectorA;
	ft::vector<int> vectorB;

			std::cout << "  vector<int>	vectorA;" << std::endl;
			std::cout << "  vector<int>	vectorB;" << std::endl << std::endl;

	for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }
	for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }

			std::cout << "  for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }" << std::endl;
			std::cout << "  for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }" << std::endl << std::endl;

	ft::vector<int>::const_reverse_iterator itA = vectorA.rbegin();
	ft::vector<int>::const_reverse_iterator itB = vectorB.rbegin();
	ft::vector<int>::const_reverse_iterator itC = itA;

			std::cout << "  vector<int>::const_reverse_iterator itA = vectorA.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itB = vectorB.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itC = itA;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl;
			std::cout << "      *itB is	" << *itB << std::endl;
			std::cout << "      *itC is	" << *itC << std::endl << std::endl;

	 //*********************************//
	// Assignment Operators += and -= //
			std::cout << "Assignment operators += and -=:" << std::endl << std::endl;

	itA += 1;
			std::cout << "  itA += 1;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

	itA -= 1;
			std::cout << "  itA -= 1;" << std::endl << std::endl;
			std::cout << "      *itA is	" << *itA << std::endl << std::endl;
}
void	testVector::member_types__const_reverse_iterator__base() {
			std::cout << "Const Reverse Iterator base: " << std::endl << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;
			std::cout << "  vector<int>	vectorA;" << std::endl;
			std::cout << "  vector<int>	vectorB;" << std::endl << std::endl;

	for (int i = 5; i < 40; i += 5) { vectorA.push_back(i);	}
	for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }
			std::cout << "  for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }" << std::endl;
			std::cout << "  for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }" << std::endl << std::endl;

	ft::vector<int>::const_reverse_iterator itA = vectorA.rbegin();
	ft::vector<int>::const_reverse_iterator itB = vectorB.rbegin();
	ft::vector<int>::const_reverse_iterator::iterator_type baseA = itA.base();
	ft::vector<int>::const_reverse_iterator::iterator_type baseB = itB.base();

			std::cout << "  vector<int>::const_reverse_iterator itA = vectorA.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator itB = vectorB.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator::iterator_type baseA = itA.base();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator::iterator_type baseB = itB.base();" << std::endl << std::endl;
			std::cout << "      *baseA is	" << *baseA << std::endl;
			std::cout << "      *baseB is	" << *baseB << std::endl;
			std::cout << std::endl;

	baseA = baseA - 1;
	baseB = baseB - 1;

			std::cout << "  baseA = baseA - 1;" << std::endl;
			std::cout << "  baseA = baseA - 1;" << std::endl << std::endl;
			std::cout << "      *baseA is	" << *baseA << std::endl;
			std::cout << "      *baseB is	" << *baseB << std::endl;
			std::cout << std::endl;

	ft::vector<int> vectorC;
	ft::vector<int> vectorD;
			std::cout << "  vector<int>	vectorC;" << std::endl;
			std::cout << "  vector<int>	vectorD;" << std::endl << std::endl;

	// ft::vector<int>::const_reverse_iterator itC = vectorC.rbegin();
	// ft::vector<int>::const_reverse_iterator itD = vectorD.rbegin();
	// ft::vector<int>::const_reverse_iterator::iterator_type baseC = itC.base();
	// ft::vector<int>::const_reverse_iterator::iterator_type baseD = itD.base();

	// 		std::cout << "  vector<int>::const_reverse_iterator itC = vectorC.rbegin();" << std::endl;
	// 		std::cout << "  vector<int>::const_reverse_iterator itD = vectorD.rbegin();" << std::endl;
	// 		std::cout << "  vector<int>::const_reverse_iterator::iterator_type baseC = itC.base();" << std::endl;
	// 		std::cout << "  vector<int>::const_reverse_iterator::iterator_type baseD = itD.base();" << std::endl << std::endl;
	// 		std::cout << "  Segmentation Fault here is excepted!" << std::endl << std::endl;

	// 		std::cout << "      *baseC is	" << *baseC << std::endl;
	// 		std::cout << "      *baseD is	" << *baseD << std::endl;
	// 		std::cout << std::endl;

	// baseC = baseC - 1;
	// baseD = baseD - 1;

	// 		std::cout << "  baseC = baseC - 1;" << std::endl;
	// 		std::cout << "  baseC = baseC - 1;" << std::endl << std::endl;
	// 		std::cout << "      *baseC is	" << *baseC << std::endl;
	// 		std::cout << "      *baseD is	" << *baseD << std::endl;
	// 		std::cout << std::endl;
}
void	testVector::member_types__const_reverse_iterator__extras__iterator_to_const_iterator() {
			std::cout << "Const Reverse Iterator With Const Reverse Iterator:" << std::endl << std::endl;
	ft::vector<int> vectorA(5, 5);

			std::cout << "  vector<int> vectorA(5, 5);" << std::endl;
			std::cout << std::endl;

	ft::vector<int>::reverse_iterator itA = vectorA.rbegin();
	ft::vector<int>::const_reverse_iterator const_itA = vectorA.rbegin();

			std::cout << "  vector<int>::reverse_iterator itA = vectorA.rbegin();" << std::endl;
			std::cout << "  vector<int>::const_reverse_iterator const_itA = vectorA.rbegin();" << std::endl;
			std::cout << std::endl;

			std::cout << "      (itA == const_itA) is " << (itA == const_itA) << std::endl;
			std::cout << "      (itA != const_itA) is " << (itA != const_itA) << std::endl;
			std::cout << "      (itA < const_itA)  is " << (itA < const_itA) << std::endl;
			std::cout << "      (itA > const_itA)  is " << (itA > const_itA) << std::endl;
			std::cout << "      (itA <= const_itA) is " << (itA <= const_itA) << std::endl;
			std::cout << "      (itA >= const_itA) is " << (itA >= const_itA) << std::endl;

			std::cout << std::endl;
}

