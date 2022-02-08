#include "../../../includes/main.hpp"

// void	testVector::member_types__iterator__default_member_functions() {
// 			std::cout << "Iterator default member functions: " << std::endl << std::endl;

// 	ft::vector<int> vectorA;
// 	ft::vector<int> vectorB;

// 			std::cout << "  vector<int>	vectorA;" << std::endl;
// 			std::cout << "  vector<int>	vectorB;" << std::endl << std::endl;

// 	for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }
// 	for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }

// 			std::cout << "  for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }" << std::endl;
// 			std::cout << "  for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }" << std::endl << std::endl;

// 	ft::vector<int>::iterator itA = vectorA.begin();
// 	ft::vector<int>::iterator itB = vectorB.begin();

// 			std::cout << "  vector<int>::iterator itA = vectorA.begin();" << std::endl;
// 			std::cout << "  vector<int>::iterator itB = vectorB.begin();" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl;
// 			std::cout << "      *itB is	" << *itB << std::endl;
// 			std::cout << std::endl;


// 	 //*********************//
// 	// Default Constructor //
// 			std::cout << "Default Constructor:" << std::endl << std::endl;

// 	ft::vector<int>::iterator itDefault;
// 			std::cout << "  vector<int>::iterator	itDefault;" << std::endl;
// 			std::cout << std::endl;

// 	 //******************//
// 	// Copy Constructor //
// 			std::cout << "Copy Constructor:" << std::endl << std::endl;

// 	ft::vector<int>::iterator itCopyConstructor(itA);

// 			std::cout << "  vector<int>::iterator	itCopyConstructor(itA);" << std::endl << std::endl;
// 			std::cout << "      *itCopyConstructor is	" << *itCopyConstructor << std::endl;
// 			std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;

// 	 //****************//
// 	// Copy Assigment //
// 			std::cout << "Copy Assigment:" << std::endl << std::endl;

// 	ft::vector<int>::iterator itCopyAssigment = itA;

// 			std::cout << "  vector<int>::iterator itCopyAssigment = itA;" << std::endl << std::endl;
// 			std::cout << "      *itCopyAssigment is	" << *itCopyAssigment << std::endl;
// 			std::cout << "      *itA is			" << *itA << std::endl;
// 			std::cout << std::endl;
// }
// void	testVector::member_types__iterator__relational_operators() {
// 			std::cout << "Iterator relational operators:" << std::endl << std::endl;

// 	ft::vector<int> vectorA;
// 	ft::vector<int> vectorB;

// 			std::cout << "  vector<int>	vectorA;" << std::endl;
// 			std::cout << "  vector<int>	vectorB;" << std::endl << std::endl;

// 	for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }
// 	for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }

// 			std::cout << "  for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }" << std::endl;
// 			std::cout << "  for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }" << std::endl << std::endl;

// 	ft::vector<int>::iterator itA = vectorA.begin();
// 	ft::vector<int>::iterator itB = vectorB.begin();
// 	ft::vector<int>::iterator itC = itA;

// 			std::cout << "  vector<int>::iterator itA = vectorA.begin();" << std::endl;
// 			std::cout << "  vector<int>::iterator itB = vectorB.begin();" << std::endl;
// 			std::cout << "  vector<int>::iterator itC = itA;" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl;
// 			std::cout << "      *itB is	" << *itB << std::endl;
// 			std::cout << "      *itC is	" << *itC << std::endl << std::endl;

// 	 //**********************************//
// 	// Equality comparisons (== and !=) //

// 			std::cout << "Equality Comparisons (== and !=): " << std::endl << std::endl;

// 	if (itA == itB)
// 			std::cout << "      (itA == itB) is	true" << std::endl;
// 	if (itA != itB)
// 			std::cout << "      (itA != itB) is	true" << std::endl;
// 	if (itC == itA) {
// 			std::cout << "      (itC == itA) is	true" << std::endl << std::endl;
// 	}

// 	 //******************************************//
// 	// Inequality comparisons (<, >, <= and >=) //
// 			std::cout << "Inequality comparisons (<, >, <= and >=):" << std::endl << std::endl;

// 	if (itA < itB)
// 			std::cout << "      itA < itB is	true" << std::endl;
// 	if (itA <= itB)
// 			std::cout << "      itA <= itB is	true" << std::endl;
// 	if (itA > itB)
// 			std::cout << "      itA > itB is	true" << std::endl;
// 	if (itA >= itB)
// 			std::cout << "      itA >= itB is	true" << std::endl;
// 	if (itB < itA)
// 			std::cout << "      itB < itA is	true" << std::endl;
// 	if (itB <= itA)
// 			std::cout << "      itB <= itA is	true" << std::endl;
// 	if (itB > itA)
// 			std::cout << "      itB > itA is	true" << std::endl;
// 	if (itB >= itA) {
// 			std::cout << "      itB >= itA is	true" << std::endl;
// 	}

// 			std::cout << std::endl;
// }
// void	testVector::member_types__iterator__dereferences() {
// 			std::cout << "Iterator dereferences:" << std::endl << std::endl;

// 	ft::vector<int> vectorA;
// 	ft::vector<int> vectorB;

// 			std::cout << "  vector<int>	vectorA;" << std::endl;
// 			std::cout << "  vector<int>	vectorB;" << std::endl << std::endl;

// 	for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }
// 	for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }

// 			std::cout << "  for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }" << std::endl;
// 			std::cout << "  for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }" << std::endl << std::endl;

// 	ft::vector<int>::iterator itA = vectorA.begin();
// 	ft::vector<int>::iterator itB = vectorB.begin();
// 	ft::vector<int>::iterator itC = itA;

// 			std::cout << "  vector<int>::iterator itA = vectorA.begin();" << std::endl;
// 			std::cout << "  vector<int>::iterator itB = vectorB.begin();" << std::endl;
// 			std::cout << "  vector<int>::iterator itC = itA;" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl;
// 			std::cout << "      *itB is	" << *itB << std::endl;
// 			std::cout << "      *itC is	" << *itC << std::endl << std::endl;

// 	 //**********************************//
// 	// Offset Dereference Operator ([]) //
// 			std::cout << "Offset Dereference Operator ([]):" << std::endl << std::endl;

// 			std::cout << "      itA[0] is	" << itA[0] << std::endl;
// 			std::cout << "      itA[1] is	" << itA[1] << std::endl;
// 			std::cout << "      itA[5] is	" << itA[5] << std::endl << std::endl;
// }
// void	testVector::member_types__iterator__increment_decrement_operators() {
// 			std::cout << "Iterator increment and decrement operators:" << std::endl << std::endl;

// 	ft::vector<int> vectorA;
// 	ft::vector<int> vectorB;

// 			std::cout << "  vector<int>	vectorA;" << std::endl;
// 			std::cout << "  vector<int>	vectorB;" << std::endl << std::endl;

// 	for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }
// 	for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }

// 			std::cout << "  for (int i = 5; i < 40; i += 5) { vectorA.push_back(i); }" << std::endl;
// 			std::cout << "  for (int i = 45; i < 80; i += 5) { vectorB.push_back(i); }" << std::endl << std::endl;

// 	ft::vector<int>::iterator itA = vectorA.begin();
// 	ft::vector<int>::iterator itB = vectorB.begin();
// 	ft::vector<int>::iterator itC = itA;

// 			std::cout << "  vector<int>::iterator itA = vectorA.begin();" << std::endl;
// 			std::cout << "  vector<int>::iterator itB = vectorB.begin();" << std::endl;
// 			std::cout << "  vector<int>::iterator itC = itA;" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl;
// 			std::cout << "      *itB is	" << *itB << std::endl;
// 			std::cout << "      *itC is	" << *itC << std::endl << std::endl;

// 	 //***********//
// 	// Increment //
// 			std::cout << "Increment:" << std::endl << std::endl;

// 	itA++;
// 			std::cout << "  itA++;" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

// 	*itA++;
// 			std::cout << "  *itA++;" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

// 	++itA;
// 			std::cout << "  ++itA;" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

// 	++*itA;
// 			std::cout << "  ++*itA;" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

// 	itA = itC;
// 			std::cout << "  itA = itC;" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl;
// 			std::cout << "      *itC is	" << *itC << std::endl << std::endl;

// 	itA++;
// 	itC++;
// 			std::cout << "  itA++;" << std::endl;
// 			std::cout << "  itC++;" << std::endl << std::endl;

// 	if (itC == itA) {
// 			std::cout << "      (itC == itA) is	true" << std::endl << std::endl;
// 	}

// 	 //*************//
// 	// Decremented //
// 			std::cout << "Decrement:" << std::endl << std::endl;

// 	itA++;
// 	itA++;
// 	itA++;

// 			std::cout << "  itA++;" << std::endl;
// 			std::cout << "  itA++;" << std::endl;
// 			std::cout << "  itA++;" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

// 	itA--;
// 			std::cout << "  itA--;" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

// 	*itA--;
// 			std::cout << "  *itA--;" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

// 	--itA;
// 			std::cout << "  --itA;" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

// 	--*itA;
// 			std::cout << "  --*itA;" << std::endl << std::endl;
// 			std::cout << "      *itA is	" << *itA << std::endl << std::endl;

// 	itA = itC;
// 			std::cout << "  itA = itC;" << std::endl << std::endl;

// 			std::cout << "      *itA is	" << *itA << std::endl;
// 			std::cout << "      *itC is	" << *itC << std::endl << std::endl;

// 	if (itC == itA) {
// 			std::cout << "      (itC == itA) is	true" << std::endl << std::endl;
// 	}

// 	itA--;
// 	itC--;
// 			std::cout << "  itA--;" << std::endl;
// 			std::cout << "  itC--;" << std::endl << std::endl;

// 	if (itC == itA) {
// 			std::cout << "      (itC == itA) is	true" << std::endl << std::endl;
// 	}
// }
