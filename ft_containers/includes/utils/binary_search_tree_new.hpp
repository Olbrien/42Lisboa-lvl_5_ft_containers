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


        void insert(int key) {                                  // ESTE NAO TA BOM AINDA
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

        BSTNode<T>   *search(T key) {
            // Invoking Search() operation
            // and passing root node
            BSTNode<T> *result = search_node(_root, key);
            return result;
        };

        BSTNode<T>  *find_min() {
            return find_min_node(_root);
        };

        BSTNode<T>  *find_max() {
            return find_max_node(_root);
        };

        BSTNode<T>  *successor(T key) {
            return (successor_node(search(key)));  
        };

        BSTNode<T>  *predecessor(T key) {
            return (predecessor_node(search(key)));
        };

        void remove(T key) {
            _root = remove_node(_root, key);
        };

    protected:
        /********************/
		/* Helper Functions */

        BSTNode<T>     *insert_node(BSTNode<T> *node, T& key) {            // GOOD - Falta size só
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

        BSTNode<T>     *search_node(BSTNode<T> *node, T& key) {
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
            return (nullptr);
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

        BSTNode<T>      *successor_node(BSTNode<T> *node) {
            if (node == nullptr) {
                return nullptr;
            }
            // The successor is the minimum key value
            // of right subtree
            if (node->right != nullptr) {
                return find_min_node(node->right);
            }
            // If no any right subtree
            else {
                BSTNode<T> *parentNode = node->parent;
                BSTNode<T> *currentNode = node;

                // If currentNode is not root and
                // currentNode is its right children
                // continue moving up
                while ((parentNode != nullptr) && (currentNode == parentNode->right)) {
                    currentNode = parentNode;
                    parentNode = currentNode->parent;
                }

                // If parentNode is not NULL
                // then the key of parentNode is
                // the successor of node
                return parentNode;
            }
        };

        BSTNode<T>      *predecessor_node(BSTNode<T> *node) {
            if (node == nullptr) {
                return nullptr;
            }
            // The predecessor is the maximum key value
            // of left subtree
            if (node->right != nullptr) {
                return find_max_node(node->left);
            }
            // If no any right subtree
            else {
                BSTNode<T> *parentNode = node->parent;
                BSTNode<T> *currentNode = node;

                // If currentNode is not root and
                // currentNode is its left children
                // continue moving up
                while ((parentNode != NULL) && (currentNode == parentNode->left)) {
                    currentNode = parentNode;
                    parentNode = currentNode->parent;
                }

                // If parentNode is not NULL
                // then the key of parentNode is
                // the predecessor of node
                return parentNode;
            }
        };

        BSTNode<T>     *remove_node(BSTNode<T> *node, T& key) {
            // The given node is not found in BST
            if (node == nullptr) {
                return nullptr;
            }

            // Target node is found
            if (node->key == key) {
                BSTNode<T>    *tmp_node = node;
                // If the node is a leaf node
                // The node can be safely removed
                if (node->left == nullptr && node->right == nullptr) {
                    node = nullptr;
                    delete tmp_node;
                }
                // The node have only one child at right
                else if (node->left == nullptr && node->right != nullptr) {
                    // The only child will be connected to
                    // the parent's of node directly
                    node->right->parent = node->parent;

                    // Bypass node
                    node = node->right;
                    delete tmp_node;
                }
                // The node have only one child at left
                else if (node->left != nullptr && node->right == nullptr)
                {
                    // The only child will be connected to
                    // the parent's of node directly
                    node->left->parent = node->parent;

                    // Bypass node
                    node = node->left;
                    delete tmp_node;
                }
                // The node have two children (left and right)
                else
                {
                    // Find successor or predecessor to avoid quarrel
                    BSTNode<T>  *predecessorKey = predecessor_node(node);

                    // Replace node's key with successor's key
                    node->key = predecessorKey->key;

                    // Delete the old successor's key
                    node->right = remove_node(node->left, predecessorKey->key);
                }
            }
            // Target node's key is smaller than
            // the given key then search to right
            else if (node->key < key)
                node->right = remove_node(node->right, key);
            // Target node's key is greater than
            // the given key then search to left
            else
                node->left = remove_node(node->left, key);

            // Return the updated BST
            return node;
        };

    private:       
        /****************/
		/* Private Data */

        BSTNode<T>                      *_root;

};

}

#endif

// https://medium.com/swlh/binary-search-trees-c-484377f0d349
// https://github.com/stevenkim18/ft_containers/blob/main/containers/map/BST.hpp