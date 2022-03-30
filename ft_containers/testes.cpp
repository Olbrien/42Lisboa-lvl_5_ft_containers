#include <iostream>
#include <algorithm>

#ifndef FT
# define FT 1    // 0 == Tests the original containers
                 // 1 == Tests my containers
#endif

#if FT
	#include "./includes/map.hpp"
	#include "./includes/utils/binary_search_tree.hpp"
	#include "./includes/utils/binary_search_tree_iterator.hpp"
	#include "./includes/utils/utility.hpp"
#else
	#include <vector>
	#include <map>
	namespace ft = std;
#endif


/*void	BSTree() {

	ft::BST<ft::pair<int, std::string>> 		alo;
    ft::BSTNode<ft::pair<int, std::string>>		*aloNode;

	alo.insert(ft::pair<int, std::string>(5, "Hello"));
	alo.insert(ft::pair<int, std::string>(2, "Is"));
	alo.insert(ft::pair<int, std::string>(6, "It"));
	alo.insert(ft::pair<int, std::string>(11, "Me"));
	alo.insert(ft::pair<int, std::string>(-2, "You"));

    std::cout << std::endl;

    alo.print_tree_in_order();

    std::cout << std::endl;

    std::cout << std::boolalpha;
    std::cout << alo.search(5) << std::endl;   // Exists
    std::cout << alo.search(2) << std::endl;   // Exists
    std::cout << alo.search(0) << std::endl;   // No Exists
    std::cout << alo.search(-2) << std::endl;  // Exists
    std::cout << alo.search(-5) << std::endl;  // No Exists

    std::cout << std::endl;

    std::cout << "min - " << alo.find_min()->data.first << std::endl;
    std::cout << "max - " << alo.find_max()->data.first << std::endl;

    std::cout << std::endl;


    {
        aloNode = alo.successor(ft::pair<int, std::string>(-2, "You"));
        if (aloNode != NULL)
            std::cout << "alo.successor(ft::pair<int, std::string>(-2, \"You\"))  --> "
					  << aloNode->data.first << " " << aloNode->data.second << std::endl;

		std::cout << std::boolalpha;
    	std::cout << alo.search(aloNode->data) << std::endl;   // Exists

        aloNode = alo.successor(ft::pair<int, std::string>(6, "It"));
        if (aloNode != NULL)
            std::cout << "alo.successor(ft::pair<int, std::string>(6, \"It\"))    --> "
					  << aloNode->data.first << " " << aloNode->data.second << std::endl;

		std::cout << std::boolalpha;
    	std::cout << alo.search(aloNode->data) << std::endl;   // Exists
    }

    {
        aloNode = alo.predecessor(ft::pair<int, std::string>(11, "Me"));
        if (aloNode != NULL)
            std::cout << "alo.predecessor(ft::pair<int, std::string>(11, \"Me\"))  --> "
					  << aloNode->data.first << " " << aloNode->data.second << std::endl;

		std::cout << std::boolalpha;
    	std::cout << alo.search(aloNode->data) << std::endl;   // Exists

        aloNode = alo.predecessor(ft::pair<int, std::string>(5, "Hello"));
        if (aloNode != NULL)
            std::cout << "alo.predecessor(ft::pair<int, std::string>(5, \"Hello\"))  --> "
					  << aloNode->data.first << " " << aloNode->data.second << std::endl;

		std::cout << std::boolalpha;
    	std::cout << alo.search(aloNode->data) << std::endl;   // Exists
    }

	{
		ft::BST<ft::pair<int, std::string>> 		alo_copy;
		alo_copy = alo;

		std::cout << std::endl;
		std::cout << "copy size = " << alo_copy.get_size() << std::endl;
		alo_copy.print_tree_in_order();
		std::cout << std::endl;

	}

    std::cout << std::endl;

    alo.print_tree_in_order();
    std::cout << "size = " << alo.get_size() << std::endl << std::endl;

    alo.remove(alo.search(5)->data);
    std::cout << "alo.remove(alo.search(5)->data)" << std::endl;
    std::cout << "size = " << alo.get_size() << std::endl;
	alo.print_tree_in_order();

	std::cout << std::endl;

    alo.remove(alo.search(2)->data);
    std::cout << "alo.remove(alo.search(2)->data);" << std::endl;
    std::cout << "size = " << alo.get_size() << std::endl;
    alo.print_tree_in_order();

	std::cout << std::endl;

    alo.remove(alo.search(6)->data);
    std::cout << "alo.remove(alo.search(6)->data);" << std::endl;
    std::cout << "size = " << alo.get_size() << std::endl;
    alo.print_tree_in_order();

	std::cout << std::endl;

    alo.remove(alo.search(11)->data);
    std::cout << "alo.remove(alo.search(11)->data);" << std::endl;
    std::cout << "size = " << alo.get_size() << std::endl;
    alo.print_tree_in_order();

    std::cout << std::endl;

    std::cout << "size = " << alo.get_size() << std::endl;

	alo.remove_all();

    std::cout << "size = " << alo.get_size() << std::endl;

}*/

/*void	BSTreeIT() {
	ft::BST<ft::pair<int, std::string>> 			alo;

	alo.insert(ft::pair<int, std::string>(5, "Hello"));
	alo.insert(ft::pair<int, std::string>(2, "Is"));
	alo.insert(ft::pair<int, std::string>(6, "It"));
	alo.insert(ft::pair<int, std::string>(11, "Me"));
	alo.insert(ft::pair<int, std::string>(-2, "You"));

    std::cout << std::endl;

    alo.print_tree_in_order();

    std::cout << std::endl;

    ft::BST_iterator<int, std::string>	alo_iterator(alo.find_min());

	for (;alo_iterator != alo.find_max(); alo_iterator++) {
		std::cout << "[ " << alo_iterator->first << " ";
		std::cout << alo_iterator->second << "] ";
	}
	std::cout << "[ " << alo_iterator->first << " ";
	std::cout << alo_iterator->second << "]" << std::endl;
    std::cout << std::endl;


	for (;alo_iterator != alo.find_min(); alo_iterator--) {
		std::cout << "[ " << alo_iterator->first << " ";
		std::cout << alo_iterator->second << "] ";
	}
	std::cout << "[ " << alo_iterator->first << " ";
	std::cout << alo_iterator->second << "]" << std::endl;
    std::cout << std::endl;


}
*/

void MapInsertTest()
{
	ft::map<int, int> teste;
	teste.insert(ft::pair<int,int>(0, 0));
	teste.insert(ft::pair<int,int>(4, 4));
	teste.insert(ft::pair<int,int>(2, 2));
	teste.insert(ft::pair<int,int>(3, 3));
	teste.insert(ft::pair<int,int>(1, 1));
	teste.insert(ft::pair<int,int>(8, 8));

	ft::map<int, int>::iterator it = teste.begin();
	ft::map<int, int>::iterator it2 = teste.end();

	std::cout << it->first << std::endl;
	it++;
	std::cout << it->first << std::endl;
	it++;
	std::cout << it->first << std::endl;
	it++;
	std::cout << it->first << std::endl;
	it++;
	std::cout << it->first << std::endl;
	it++;
	std::cout << it->first << std::endl;
	it++;

	std::cout << std::endl;

	it2--;
	std::cout << it2->first << std::endl;
	it2--;
	std::cout << it2->first << std::endl;
	it2--;
	std::cout << it2->first << std::endl;
	it2--;
	std::cout << it2->first << std::endl;
	it2--;
	std::cout << it2->first << std::endl;
	it2--;
	std::cout << it2->first << std::endl;

	for (ft::map<int, int>::iterator teste_beg = teste.begin();
						 teste_beg != teste.end(); teste_beg++) {
		std::cout << "      itA.first and itA.second is [" << teste_beg->first
					<< ", " << teste_beg->second << "]" << std::endl;
	}

	std::cout << std::endl << std::endl;


	teste.insert(ft::pair<int,int>(5, 5));

	for (ft::map<int, int>::iterator teste_beg = teste.begin();
						 teste_beg != teste.end(); teste_beg++) {
		std::cout << "      itA.first and itA.second is [" << teste_beg->first
					<< ", " << teste_beg->second << "]" << std::endl;
	}

	ft::map<int, int>::iterator testeplease = teste.end();


	testeplease--;

	std::cout << testeplease->first << std::endl;
	std::cout << testeplease->second << std::endl;

	std::cout << "size=" << teste.size() << std::endl;

}

void MapBeginToEnd()
{
	ft::map<int, int> teste;
	teste.insert(ft::pair<int,int>(11, 11));
	teste.insert(ft::pair<int,int>(22, 22));

	for (ft::map<int, int>::iterator teste_beg = teste.begin();
						 teste_beg != teste.end(); teste_beg++) {
		std::cout << "      itA.first and itA.second is [" << teste_beg->first
					<< ", " << teste_beg->second << "]" << std::endl;
	}

	std::cout << std::endl;

	//With normal iterator
	std::cout << "Normal Iterator" << std::endl;
	ft::map<int, int>::iterator itA = teste.begin();
	ft::map<int, int>::iterator itB = teste.end();

	std::cout << itA->first << "	[0]	itA++" << std::endl;
	itA++;
	std::cout << itA->first << "	[1]	itA++" << std::endl;
	itA++;
	std::cout << itA->first << "	[end]" << std::endl << std::endl;

	std::cout << itB->first << "	[end]	itB--" << std::endl;
	itB--;
	std::cout << itB->first << "	[1]	itB--" << std::endl;
	itB--;
	std::cout << itB->first << "	[0]" << std::endl << std::endl;

	// //With reverse iterator
	// std::cout << "Reverse Iterator" << std::endl;
	// ft::map<int, int>::reverse_iterator itC = teste.rbegin();
	// ft::map<int, int>::reverse_iterator itD = teste.rend();

	// std::cout << itC->first << "	[1]	itC++" << std::endl;
	// itC++;
	// std::cout << itC->first << "	[0]	itC++" << std::endl;
	// itC++;
	// std::cout << itC->first << "	[rbegin]" << std::endl << std::endl;

	// std::cout << itD->first << "	[rbegin] itD--" << std::endl;
	// itD--;
	// std::cout << itD->first << "	[0]	 itD--" << std::endl;
	// itD--;
	// std::cout << itD->first << "	[1]" << std::endl << std::endl;

}



int main(void) {

	//BSTree();
	//BSTreeIT();
	//MapInsertTest();
	//MapBeginToEnd();

	ft::map<int, std::string> mapA;

	mapA.insert(ft::pair<int, std::string>(5, "Cinco"));
	mapA.insert(ft::pair<int, std::string>(10, "Dez"));
	mapA.insert(ft::pair<int, std::string>(15, "Quinze"));
	mapA.insert(ft::pair<int, std::string>(20, "Vinte"));
	mapA.insert(ft::pair<int, std::string>(25, "Vinte e Cinco"));
	mapA.insert(ft::pair<int, std::string>(30, "Trinta"));

	std::cout << "      mapA is		" ;
	for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
		if (s.i == 0)
			std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
		else
			std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
		s.i = 1;
	}

	std::cout << std::endl;

	ft::map<int, std::string>::iterator it = mapA.begin();

	mapA.erase(mapA.begin());

	std::cout << "      mapA is		" ;
	for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
		if (s.i == 0)
			std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
		else
			std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
		s.i = 1;
	}

	std::cout << std::endl;

	it = mapA.end();
	it--;

	mapA.erase(it);

	std::cout << "      mapA is		" ;
	for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
		if (s.i == 0)
			std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
		else
			std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
		s.i = 1;
	}
	std::cout << std::endl;

	it = mapA.end();
	it--;

	mapA.erase(it);

	std::cout << "      mapA is		" ;
	for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
		if (s.i == 0)
			std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
		else
			std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
		s.i = 1;
	}

	std::cout << std::endl;


	mapA.insert(ft::pair<int, std::string>(45, "quarenta e cinco"));
	mapA.insert(ft::pair<int, std::string>(4, "quatro"));
	mapA.insert(ft::pair<int, std::string>(2, "dois"));

	std::cout << "      mapA is		" ;
	for ( struct { int i; ft::map<int, std::string>::iterator itA; } s = {0, mapA.begin()}; s.itA != mapA.end(); s.itA++) {
		if (s.i == 0)
			std::cout << "[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
		else
			std::cout << "      			[ " << s.itA->first << " : " << s.itA->second << " ]" << std::endl;
		s.i = 1;
	}

	std::cout << std::endl;

}
