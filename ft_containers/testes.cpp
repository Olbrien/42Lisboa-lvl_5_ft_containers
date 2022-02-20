#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include "./includes/utils/binary_search_tree_new.hpp"

int main(void) {
	ft::BST<int> alo;
    ft::BSTNode<int> *aloNode;

    alo.insert(33);
    alo.insert(20);
    alo.insert(13);
    alo.insert(14);
    alo.insert(15);
    alo.insert(95);
    alo.insert(50);
    alo.insert(60);

    std::cout << std::endl;

    alo.print_tree_in_order();

    std::cout << std::endl;

    std::cout << std::boolalpha;
    std::cout << alo.search(5) << std::endl;   // No Exists
    std::cout << alo.search(3) << std::endl;   // No Exists
    std::cout << alo.search(0) << std::endl;   // No Exists
    std::cout << alo.search(95) << std::endl;  // Exists

    std::cout << std::endl;

    std::cout << "min - " << alo.find_min()->key << std::endl;
    std::cout << "max - " << alo.find_max()->key << std::endl;

    std::cout << std::endl;

    {
        aloNode = alo.successor(15);
        if (aloNode != NULL) 
            std::cout << "alo.successor(15)    --> " << aloNode->key << std::endl;

        aloNode = alo.successor(13);
        if (aloNode != NULL) 
            std::cout << "alo.successor(13)    --> " << aloNode->key << std::endl;
    }

    {
        aloNode = alo.predecessor(15);
        if (aloNode != NULL) 
            std::cout << "alo.predecessor(15)  --> " << aloNode->key << std::endl;

        aloNode = alo.predecessor(95);
        if (aloNode != NULL) 
            std::cout << "alo.predecessor(95)  --> " << aloNode->key << std::endl;
    }

    std::cout << std::endl;

    alo.print_tree_in_order();

    alo.remove(15);
    std::cout << "remove(15)" << std::endl;
    alo.print_tree_in_order();

    alo.remove(12);
    std::cout << "remove(12)" << std::endl;
    alo.print_tree_in_order();

    alo.remove(95);
    std::cout << "remove(95)" << std::endl;
    alo.print_tree_in_order();

    alo.remove(13);
    std::cout << "remove(13)" << std::endl;
    alo.print_tree_in_order();

    alo.remove(22);
    std::cout << "remove(22)" << std::endl;
    alo.print_tree_in_order();

    alo.remove(33);
    std::cout << "remove(33)" << std::endl;
    alo.print_tree_in_order();


    std::cout << std::endl;
}
