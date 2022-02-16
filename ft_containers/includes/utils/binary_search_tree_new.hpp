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

        BST<T>() :  _root(NULL)
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

        };

        int find_min() {

        };

        int find_max() {

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
            if (node == NULL) {
                node = new BSTNode<T>();

                node->key = key;
                node->left = NULL;
                node->right = NULL;
                node->parent = NULL;
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
            if (node == NULL) {
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

        };

        int         find_min_node(BSTNode<T> *node) {

        };

        int         find_max_node(BSTNode<T> *node) {

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