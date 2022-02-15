#ifndef BINARY_SEARCH_TREE_HPP
# define BINARY_SEARCH_TREE_HPP

#include <iostream>

namespace ft {

template <class T> // T = ft::pair<Key, Value> of the prev one
struct Node {
    Node(T value) : data(value), left(NULL), right(NULL) {};

    T       data;
    Node    *left;
    Node    *right;
};

template <class T> // T = ft::pair<Key, Value> of the prev one
class binary_search_tree {
    public:
		/****************/
		/* Member Types */

		typedef T                                                       value_type;
		typedef typename std::ptrdiff_t                                 difference_type;
		typedef typename std::size_t                                    size_type;

		/********************/
		/* Member functions */

		/****
		** Constructors
		*/

		// Default
        binary_search_tree() : _node(NULL)
        {};

		/****
		** Destructor
		*/

        ~binary_search_tree()
        {};

		/****
		** Insertion
		*/

        // Insert
        Node<T>     *insert(Node<T> *root, T data) {
            // if root is NULL
            if (root == NULL) {
                return new Node<T>(data);
            }

            // insert data
            if (data > root->data) {
                root->right = insert(root->right, data);
            }
            else {
                root->left = insert(root->left, data);
            }

            return root;
        };

		/****
		** Deletion
		*/

        // Delete Node
        Node<T>     *deleteNode(Node<T> *root, T data) {
            if (root == NULL) {
                return root;
            }

            // find the node to delete
            if (data > root->data) {
                root->right = deleteNode(root->right, data);
            }
            else if (data < root->data) {
                root->left = deleteNode(root->left, data);
            }
            else { // If the node is with only one child or no child
                if (root->left == NULL && root->right == NULL)
                    return NULL;
                if (root->left == NULL) {
                    Node<T> *temp = root->right;
                    delete root;
                    return temp;
                }
                else if (root->right == NULL) {
                    Node<T> *temp = root->left;
                    delete root;
                    return temp;
                }
                // node with two children: Get the inorder successor
                // (smallest in the right subtree)
                Node<T> *temp = minValueNode(root->right);

                // Copy the inorder successor's content to this node
                root->data = temp->data;

                // Delete the inorder successor
                root->right = deleteNode(root->right, temp->data);
            }
            return root;
        }

        /****
		** Searching
		*/


    private:
        /********************/
		/* Helper Functions */

        // Printing binary_search_tree inorder
        void    inorder(Node<T> *root) {
            if (root != NULL) {
                inorder(root->left);
                std::cout << root->data << "->";
                inorder(root->right);
            }
        }

        /* return the node with minimum key value
        found in that tree. Note that the
        entire tree does not need to be searched. */
        Node<T>     *minValueNode(Node<T> *node)
        {
            Node<T> *current = node;

            /* loop down to find the leftmost leaf */
            while (current && current->left != NULL)
                current = current->left;

            return current;
        }

        /****************/
		/* Private Data */

        Node<T>         *_node;
        
};

}

#endif

// https://github.com/stevenkim18/ft_containers/blob/main/containers/map/BST.hpp

// #include <iostream>
// #include "binary_search_tree.hpp"

// int main() {
//     ft::Node<int> *root = NULL;
//     ft::binary_search_tree<int> bst;

//     root = bst.insert(root, 1);
//     root = bst.insert(root, 6);
//     root = bst.insert(root, 3);
//     root = bst.insert(root, 10);
//     root = bst.insert(root, 15);
//     root = bst.insert(root, -15);

//     root = bst.deleteNode(root, 5);

//     bst.inorder(root);
// }
