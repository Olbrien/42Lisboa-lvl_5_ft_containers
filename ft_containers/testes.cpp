#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include "./includes/utils/binary_search_tree_new.hpp"
#include "./includes/utils/utility.hpp"


int main(void) {

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

}
