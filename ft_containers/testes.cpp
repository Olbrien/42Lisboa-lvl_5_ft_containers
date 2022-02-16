#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include "./includes/utils/binary_search_tree_new.hpp"

int main(void) {
	ft::BST<int> alo;

    alo.insert(1);
    alo.insert(2);
    alo.insert(3);
    alo.insert(13);
    alo.insert(15);
    alo.insert(95);
    alo.insert(50);
    alo.insert(60);

    alo.print_tree_in_order();

}
