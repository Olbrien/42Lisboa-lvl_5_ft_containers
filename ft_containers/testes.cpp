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
    std::cout << alo.search(5) << std::endl;
    std::cout << alo.search(3) << std::endl;
    std::cout << alo.search(0) << std::endl;

    std::cout << std::endl;

    std::cout << alo.find_min()->key << std::endl;
    std::cout << alo.find_max()->key << std::endl;

    aloNode = alo.successor(5);


}
