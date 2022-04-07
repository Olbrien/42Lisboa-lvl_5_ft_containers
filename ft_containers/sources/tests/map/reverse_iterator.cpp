#include "../../../includes/main.hpp"

void	testMap::member_types__reverse_iterator__default_member_functions() {
			std::cout << "Reverse Iterator default member functions: " << std::endl << std::endl;

	ft::map<int, std::string> mapA;
	ft::map<int, std::string> mapB;

			std::cout << "  ft::map<int, std::string> mapA;" << std::endl;
			std::cout << "  ft::map<int, std::string> mapB;" << std::endl << std::endl;

	for (int i = 5; i < 40; i += 5) { mapA.insert(ft::pair<int, std::string>(i, "hiii")); }
	for (int i = 45; i < 80; i += 5) { mapB.insert(ft::pair<int, std::string>(i, "byee")); }

			std::cout << "  for (int i = 5; i < 40; i += 5) { mapA.insert(ft::pair<int, std::string>(i, \"hiii\")); }" << std::endl;
			std::cout << "  for (int i = 45; i < 80; i += 5) { mapB.insert(ft::pair<int, std::string>(i, \"byee\")); }" << std::endl << std::endl;

	ft::map<int, std::string>::reverse_iterator itA = mapA.rbegin();
	ft::map<int, std::string>::reverse_iterator itB = mapB.rbegin();

			std::cout << "  ft::map<int, std::string>::reverse_iterator itA = mapA.rbegin();" << std::endl;
			std::cout << "  ft::map<int, std::string>::reverse_iterator itB = mapB.rbegin();" << std::endl << std::endl;
			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      itA->second is	" << itA->second << std::endl << std::endl;
			std::cout << "      itB->first is	" << itB->first << std::endl;
			std::cout << "      itB->second is	" << itB->second << std::endl;
			std::cout << std::endl;

	 //*********************//
	// Default Constructor //
			std::cout << "Default Constructor:" << std::endl << std::endl;

	ft::map<int, std::string>::reverse_iterator itDefault;
			std::cout << "  ft::map<int, std::string>::reverse_iterator itDefault;" << std::endl;
			std::cout << std::endl;

	 //******************//
	// Copy Constructor //
			std::cout << "Copy Constructor:" << std::endl << std::endl;

	ft::map<int, std::string>::reverse_iterator itCopyConstructor(itA);

			std::cout << "  ft::map<int, std::string>::reverse_iterator itCopyConstructor(itA);" << std::endl << std::endl;
			std::cout << "      *itCopyConstructor first is	" << itCopyConstructor->first << std::endl;
			std::cout << "      *itCopyConstructor second is	" << itCopyConstructor->second << std::endl << std::endl;
			std::cout << "      *itA first is			" << itA->first << std::endl;
			std::cout << "      *itA second is			" << itA->second << std::endl;
			std::cout << std::endl;

	 //****************//
	// Copy Assigment //
			std::cout << "Copy Assigment:" << std::endl << std::endl;

	ft::map<int, std::string>::reverse_iterator itCopyAssigment = itA;

			std::cout << "  ft::map<int, std::string>::reverse_iterator itCopyAssigment = itA;" << std::endl << std::endl;
			std::cout << "      *itCopyAssigment first is		" << itCopyAssigment->first << std::endl;
			std::cout << "      *itCopyAssigment second is	" << itCopyAssigment->second << std::endl << std::endl;
			std::cout << "      *itA first is			" << itA->first << std::endl;
			std::cout << "      *itA second is			" << itA->second << std::endl;
			std::cout << std::endl;
}
void	testMap::member_types__reverse_iterator__relational_operators() {
			std::cout << "Reverse Iterator relational operators:" << std::endl << std::endl;

	ft::map<int, std::string> mapA;
	ft::map<int, std::string> mapB;

			std::cout << "  ft::map<int, std::string> mapA;" << std::endl;
			std::cout << "  ft::map<int, std::string> mapB;" << std::endl << std::endl;

	for (int i = 5; i < 40; i += 5) { mapA.insert(ft::pair<int, std::string>(i, "hiii")); }
	for (int i = 45; i < 80; i += 5) { mapB.insert(ft::pair<int, std::string>(i, "byee")); }

			std::cout << "  for (int i = 5; i < 40; i += 5) { mapA.insert(ft::pair<int, std::string>(i, \"hiii\")); }" << std::endl;
			std::cout << "  for (int i = 45; i < 80; i += 5) { mapB.insert(ft::pair<int, std::string>(i, \"byee\")); }" << std::endl << std::endl;

	ft::map<int, std::string>::reverse_iterator itA = mapA.rbegin();
	ft::map<int, std::string>::reverse_iterator itB = mapB.rbegin();
	ft::map<int, std::string>::reverse_iterator itC = itA;

			std::cout << "  map<int, std::string>::reverse_iterator itA = mapA.rbegin();" << std::endl;
			std::cout << "  map<int, std::string>::reverse_iterator itB = mapB.rbegin();" << std::endl;
			std::cout << "  map<int, std::string>::reverse_iterator itC = itA;" << std::endl << std::endl;
			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      itA->second is	" << itA->second << std::endl << std::endl;
			std::cout << "      itB->first is	" << itB->first << std::endl;
			std::cout << "      itB->second is	" << itB->second << std::endl << std::endl;
			std::cout << "      itC->first is	" << itC->first << std::endl;
			std::cout << "      itC->second is	" << itC->second << std::endl << std::endl;

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
}
void	testMap::member_types__reverse_iterator__dereferences() {
			std::cout << "Reverse Iterator dereferences:" << std::endl << std::endl;

	ft::map<int, std::string> mapA;
	ft::map<int, std::string> mapB;

			std::cout << "  ft::map<int, std::string> mapA;" << std::endl;
			std::cout << "  ft::map<int, std::string> mapB;" << std::endl << std::endl;

	for (int i = 5; i < 40; i += 5) { mapA.insert(ft::pair<int, std::string>(i, "hiii")); }
	for (int i = 45; i < 80; i += 5) { mapB.insert(ft::pair<int, std::string>(i, "byee")); }

			std::cout << "  for (int i = 5; i < 40; i += 5) { mapA.insert(ft::pair<int, std::string>(i, \"hiii\")); }" << std::endl;
			std::cout << "  for (int i = 45; i < 80; i += 5) { mapB.insert(ft::pair<int, std::string>(i, \"byee\")); }" << std::endl << std::endl;

	ft::map<int, std::string>::reverse_iterator itA = mapA.rbegin();
	ft::map<int, std::string>::reverse_iterator itB = mapB.rbegin();
	ft::map<int, std::string>::reverse_iterator itC = itA;

			std::cout << "  ft::map<int, std::string>::reverse_iterator itA = mapA.rbegin();" << std::endl;
			std::cout << "  ft::map<int, std::string>::reverse_iterator itB = mapB.rbegin();" << std::endl;
			std::cout << "  ft::map<int, std::string>::reverse_iterator itC = itA;" << std::endl << std::endl;
			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      itA->second is	" << itA->second << std::endl << std::endl;
			std::cout << "      itB->first is	" << itB->first << std::endl;
			std::cout << "      itB->second is	" << itB->second << std::endl << std::endl;
			std::cout << "      itC->first is	" << itC->first << std::endl;
			std::cout << "      itC->second is	" << itC->second << std::endl << std::endl;

	 //**********************************//
	// Offset Dereference Operator ([]) //
			std::cout << "Dereference:" << std::endl << std::endl;

			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      (*itA).first is	" << (*itA).first << std::endl;
			std::cout << "      itB->second is	" << itB->second << std::endl;
			std::cout << "      (*itB).second is	" << (*itB).second << std::endl;
}
void	testMap::member_types__reverse_iterator__increment_decrement_operators() {
			std::cout << "Reverse Iterator increment and decrement operators:" << std::endl << std::endl;

	ft::map<int, std::string> mapA;
	ft::map<int, std::string> mapB;

			std::cout << "  ft::map<int, std::string> mapA;" << std::endl;
			std::cout << "  ft::map<int, std::string> mapB;" << std::endl << std::endl;

	for (int i = 5; i < 40; i += 5) { mapA.insert(ft::pair<int, std::string>(i, "hiii")); }
	for (int i = 45; i < 80; i += 5) { mapB.insert(ft::pair<int, std::string>(i, "byee")); }

			std::cout << "  for (int i = 5; i < 40; i += 5) { mapA.insert(ft::pair<int, std::string>(i, \"hiii\")); }" << std::endl;
			std::cout << "  for (int i = 45; i < 80; i += 5) { mapB.insert(ft::pair<int, std::string>(i, \"byee\")); }" << std::endl << std::endl;

	ft::map<int, std::string>::reverse_iterator itA = mapA.rbegin();
	ft::map<int, std::string>::reverse_iterator itB = mapB.rbegin();
	ft::map<int, std::string>::reverse_iterator itC = itA;

			std::cout << "  map<int, std::string>::reverse_iterator itA = mapA.rbegin();" << std::endl;
			std::cout << "  map<int, std::string>::reverse_iterator itB = mapB.rbegin();" << std::endl;
			std::cout << "  map<int, std::string>::reverse_iterator itC = itA;" << std::endl << std::endl;
			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      itA->second is	" << itA->second << std::endl << std::endl;
			std::cout << "      itB->first is	" << itB->first << std::endl;
			std::cout << "      itB->second is	" << itB->second << std::endl << std::endl;
			std::cout << "      itC->first is	" << itC->first << std::endl;
			std::cout << "      itC->second is	" << itC->second << std::endl << std::endl;

	 //***********//
	// Increment //
			std::cout << "Increment:" << std::endl << std::endl;

	itA++;
			std::cout << "  itA++;" << std::endl << std::endl;
			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      itA->second is	" << itA->second << std::endl << std::endl;

	*itA++;
			std::cout << "  *itA++;" << std::endl << std::endl;
			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      itA->second is	" << itA->second << std::endl << std::endl;

	++itA;
			std::cout << "  ++itA;" << std::endl << std::endl;
			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      itA->second is	" << itA->second << std::endl << std::endl;

	itA = itC;
			std::cout << "  itA = itC;" << std::endl << std::endl;
			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      itA->second is	" << itA->second << std::endl;
			std::cout << "      itC->first is	" << itC->first << std::endl;
			std::cout << "      itC->second is	" << itC->second << std::endl << std::endl;

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
			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      itA->second is	" << itA->second << std::endl << std::endl;

	itA--;
			std::cout << "  itA--;" << std::endl << std::endl;
			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      itA->second is	" << itA->second << std::endl << std::endl;

	*itA--;
			std::cout << "  *itA--;" << std::endl << std::endl;
			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      itA->second is	" << itA->second << std::endl << std::endl;

	--itA;
			std::cout << "  --itA;" << std::endl << std::endl;
			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      itA->second is	" << itA->second << std::endl << std::endl;

	itA = itC;
			std::cout << "  itA = itC;" << std::endl << std::endl;

			std::cout << "      itA->first is	" << itA->first << std::endl;
			std::cout << "      itA->second is	" << itA->second << std::endl;
			std::cout << "      itC->first is	" << itC->first << std::endl;
			std::cout << "      itC->second is	" << itC->second << std::endl << std::endl;

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
