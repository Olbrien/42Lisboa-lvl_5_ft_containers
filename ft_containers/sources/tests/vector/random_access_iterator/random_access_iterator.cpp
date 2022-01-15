#include "../../../../includes/main.hpp"

void	testVector::member_types__iterator__default_member_functions() {
	std::cout << "Iterator: " << std::endl;

	ft::vector<int> vectorA;
	ft::vector<int> vectorB;

	for (int i = 0; i < 40; i += 5) {
		vectorA.push_back(i);
	}
	for (int i = 45; i < 80; i += 5) {
		vectorB.push_back(i);
	}

	ft::vector<int>::iterator itA = vectorA.begin();
	ft::vector<int>::iterator itB = vectorB.begin();

	std::cout << "  itA = " << *itA << std::endl;
	std::cout << "  itB = " << *itB << std::endl;

	std::cout << std::endl;


	// Default Constructor //
	std::cout << "  Default Constructor:" << std::endl;

	ft::vector<int>::iterator itDefault;
	std::cout << "    ::iterator itDefault -> " << "built" << std::endl;
	std::cout << std::endl;


	// Copy Constructor //
	std::cout << "  Copy Constructor:" << std::endl;

	ft::vector<int>::iterator itCopyConstructor(itA);
	std::cout << "    ::iterator itCopyConstructor(itA) -> " << *itCopyConstructor << std::endl;
	std::cout << "    itA = " << *itA << std::endl;
	std::cout << std::endl;


	// Copy Assigment //
	std::cout << "  Copy Assigment:" << std::endl;

	ft::vector<int>::iterator itCopyAssigment = itA;
	std::cout << "    ::iterator itCopyAssigment = itA -> " << *itCopyAssigment << std::endl;
	std::cout << "    itA = " << *itA << std::endl;
	std::cout << std::endl;
}
/*
void	testVector::member_types__iterator__relational_operators() {
	// Equality and Inequality Operators //
	std::cout << "  Equality and Inequality Operators:" << std::endl;

	std::cout << "    itA = " << *itA << std::endl;
	std::cout << "    itB = " << *itB << std::endl;

	ft::vector<int>::iterator itC = itA;
	std::cout << "    itC(itA) = 1" << std::endl;

	std::cout << std::endl;

	if (itA == itB) {
		std::cout << "  itA == itB -> true" << std::endl;
	}
	if (itA != itB) {
		std::cout << "    itA != itB -> true" << std::endl;
	}
	if (itC == itA) {
		std::cout << "    itC == itA -> true" << std::endl;
	}

	std::cout << std::endl;

	// Inequality comparisons (<, >, <= and >=) //
	std::cout << "  Inequality comparisons (<, >, <= and >=):";
	std::cout << std::endl;

	std::cout << "    *itA = " << *itA << std::endl;
	std::cout << "    *itB = " << *itB << std::endl;

	std::cout << std::endl;

	if (itA < itB) {
		std::cout << "    itA < itB = true" << std::endl;
	}
	if (itA <= itB) {
		std::cout << "    itA <= itB = true" << std::endl;
	}
	if (itA > itB) {
		std::cout << "    itA > itB = true" << std::endl;
	}
	if (itA >= itB) {
		std::cout << "    itA >= itB = true" << std::endl;
	}

	std::cout << std::endl;

}
void	testVector::member_types__iterator__dereferences() {
	// Can be dereferenced //
	std::cout << "  Can be dereferenced:" << std::endl;

	std::cout << "    *itA = " << *itA << std::endl;
	std::cout << "    *itB = " << *itB << std::endl;

	std::cout << std::endl;

	// Offset Dereference Operator ([]) //
	std::cout << "  Offset Dereference Operator ([]):";
	std::cout << std::endl;

	std::cout << "    *itA = " << *itA << std::endl;
	std::cout << std::endl;

	std::cout << "    itA[0] = " << itA[0] << std::endl;
	std::cout << "    itA[1] = " << itA[1] << std::endl;
	std::cout << "    itA[5] = " << itA[5] << std::endl;

	std::cout << std::endl;

}
void	testVector::member_types__iterator__increment_decrement_operators() {
	// Can be incremented //
	std::cout << "  Can be incremented:" << std::endl;

	std::cout << "    *itA = " << *itA << std::endl;

	std::cout << std::endl;

	std::cout << "    itA++ = ";
	itA++;
	std::cout << *itA << std::endl;

	std::cout << "    *itA++ = ";
	*itA++;
	std::cout << *itA << std::endl;

	std::cout << "    ++itA = ";
	++itA;
	std::cout << *itA << std::endl;

	std::cout << "    ++*itA = ";
	++*itA;
	std::cout << *itA << std::endl;

	std::cout << std::endl;

	itA = itC;
	std::cout << "    itC(itA) = 1" << std::endl;

	std::cout << "    *itA = " << *itA << std::endl;
	std::cout << "    *itC = " << *itC << std::endl;

	if (itC == itA) {
		std::cout << "    itC == itA -> true" << std::endl;
	}

	std::cout << std::endl;

	std::cout << "    itA++ = ";
	itA++;
	std::cout << *itA << std::endl;
	std::cout << "    itC++ = ";
	itC++;
	std::cout << *itC << std::endl;

	if (itC == itA) {
		std::cout << "    itC == itA -> true" << std::endl;
	}

	std::cout << std::endl;


	// Can be decremented //
	std::cout << "  Can be decremented:" << std::endl;

	itA++;
	itA++;
	itA++;

	std::cout << "    *itA = " << *itA << std::endl;

	std::cout << std::endl;

	std::cout << "    itA-- = ";
	itA--;
	std::cout << *itA << std::endl;

	std::cout << "    *itA-- = ";
	*itA--;
	std::cout << *itA << std::endl;

	std::cout << "    --itA = ";
	--itA;
	std::cout << *itA << std::endl;

	std::cout << "    --*itA = ";
	--*itA;
	std::cout << *itA << std::endl;

	std::cout << std::endl;

	itA = itC;
	std::cout << "    itC(itA) = 1" << std::endl;

	std::cout << "    *itA = " << *itA << std::endl;
	std::cout << "    *itC = " << *itC << std::endl;

	if (itC == itA) {
		std::cout << "    itC == itA -> true" << std::endl;
	}

	std::cout << std::endl;

	std::cout << "    itA-- = ";
	itA--;
	std::cout << *itA << std::endl;
	std::cout << "    itC-- = ";
	itC--;
	std::cout << *itC << std::endl;

	if (itC == itA) {
		std::cout << "    itC == itA -> true" << std::endl;
	}

	std::cout << std::endl;
}
void	testVector::member_types__iterator__arithmetic_operators() {
	// Arithmetic operators + and - //
	std::cout << "  Arithmetic operators + and -:" << std::endl;

	std::cout << "    *itA = " << *itA << std::endl;
	std::cout << "    *itB = " << *itB << std::endl;
	std::cout << std::endl;

	std::cout << "    itA + 1 = ";
	itA = itA + 1;
	std::cout << *itA << std::endl;

	std::cout << "    itA - 1 = ";
	itA = itA - 1;
	std::cout << *itA << std::endl;
	std::cout << std::endl;

	ft::vector<int>::difference_type difA = itB - itA;
	std::cout << "    ::difference_type difA = itB - itA -> ";

	std::cout << difA << std::endl;

	std::cout << "    std::distance(itA, itB) -> ";
	std::cout << std::distance(itA, itB) << std::endl;
	std::cout << std::endl;
}
void	testVector::member_types__iterator__assignment_operators() {
	// Assignment Operations += and -= //
	std::cout << "  Assignment Operations += and -=:";
	std::cout << std::endl;

	std::cout << "    *itA = " << *itA << std::endl;

	std::cout << std::endl;

	std::cout << "    itA += 1 -> ";
	itA += 1;
	std::cout << *itA << std::endl;

	std::cout << "    itA -= 1 -> ";
	itA -= 1;
	std::cout << *itA << std::endl;

	std::cout << std::endl;
}
*/
