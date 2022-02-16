#ifndef BINARY_SEARCH_TREE_NEW_HPP
# define BINARY_SEARCH_TREE_NEW_HPP

#include <iostream>

namespace ft {

template <class T>
class BSTNode {
    public:
        T           key;
        BSTNode     *left;
        BSTNode     *right;
        BSTNode     *parent;

        int         height;
};

template <class T>
class BST {
    public:
		/****************/
		/* Member Types */

		typedef T                                                       value_type;
		typedef typename std::ptrdiff_t                                 difference_type;
		typedef typename std::size_t                                    size_type;

		/********************/
		/* Member functions */

        BST<T>() :  _root(nullptr)
        {};

        void insert(int key) {
            // Invoking Insert() function
            // and passing root node and given key
            _root = insert_node(_root, key);
        };

        void print_tree_in_order() {
            // Traverse the BST from root node 
            // then print all keys
            print_tree_in_order_node(_root);
            std::cout << std::endl;
        };

        bool search(int key) {
            // Invoking Search() operation
            // and passing root node
            BSTNode<T> *result = search_node(_root, key);

            if (result == nullptr) {
                return false;
            } 
            else {
                return true;
            }   
        };

        BSTNode<T>  *find_min() {
            return find_min_node(_root);
        };

        BSTNode<T>  *find_max() {
            return find_max_node(_root);
        };

        int successor(int key) {

        };

        int predecessor(int key) {

        };

        void remove(int v) {

        };

    protected:
        /********************/
		/* Helper Functions */

        BSTNode<T>     *insert_node(BSTNode<T> *node, int key) {
            // If BST doesn't exist create a new node as root
            // Or if the child has no nodes 
            if (node == nullptr) {
                node = new BSTNode<T>();

                node->key = key;
                node->left = nullptr;
                node->right = nullptr;
                node->parent = nullptr;
            }
            // If the given key is greater than
            // node's key then go to right subtree
            else if (key > node->key) {
                node->right = insert_node(node->right, key);
                node->right->parent = node;
            }
            // If the given key is smaller than
            // node's key then go to left subtree
            else if (key < node->key) {
                node->left = insert_node(node->left, key);
                node->left->parent = node;
            }
            return node;
        };

        void        print_tree_in_order_node(BSTNode<T> *node) {
            if (node == nullptr) {
                return ;
            }

            // Get the smallest key first
            // which is in the left subtree
            print_tree_in_order_node(node->left);

            std::cout << node->key << " ";

            // Continue to the greatest key
            print_tree_in_order_node(node->right);

        };

        BSTNode<T>     *search_node(BSTNode<T> *node, int key) {
            // The key is not found
            if (node == nullptr) {
                return nullptr;
            }
            // The given key is found
            else if (node->key == key) {
                return node;
            }
            // The given key is greater than
            // current node's key
            else if (node->key < key) {
                return search_node(node->right, key);
            }
            // The given key is less than
            // current node's key    
            else {
                return search_node(node->left, key);
            }
        };

        BSTNode<T>      *find_min_node(BSTNode<T> *node) {
            if (node == nullptr) {
                return nullptr;
            }
            else if (node->left == nullptr) {
                return node;
            }
            else {
                return find_min_node(node->left);
            }
        };

        BSTNode<T>     *find_max_node(BSTNode<T> *node) {
            if (node == nullptr) {
                return nullptr;
            }
            else if (node->right == nullptr) {
                return node;
            }
            else {
                return find_max_node(node->right);
            }
        };

        int         successor_node(BSTNode<T> *node) {

        };

        int         predecessor_node(BSTNode<T> *node) {

        };

        BSTNode<T>     *remove_node(BSTNode<T> *node, int v) {

        };

    private:       
        /****************/
		/* Private Data */

        BSTNode<T>                      *_root;

};




}

#endif

// https://medium.com/swlh/binary-search-trees-c-484377f0d349