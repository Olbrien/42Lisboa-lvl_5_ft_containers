#ifndef BINARY_SEARCH_TREE_ITERATOR_HPP
# define BINARY_SEARCH_TREE_ITERATOR_HPP

#include <iostream>
#include "./utility.hpp"
#include "./binary_search_tree.hpp"

namespace ft {

template<class Key, class T>
class BST_iterator {
    public:
		/****************/
		/* Member Types */

        typedef ft::pair<Key, T>							value_type;
        typedef ft::pair<Key, T>							&reference;
        typedef ft::BSTNode<value_type>						*pointer;
		typedef typename std::ptrdiff_t						difference_type;
		typedef typename std::bidirectional_iterator_tag	iterator_category;

        /********************/
		/* Member functions */

		/****
		** Constructors
		*/

        BST_iterator() : _ptr(NULL)
        {};

        BST_iterator(pointer ptr) : _ptr(ptr)
        {};

        BST_iterator(const BST_iterator & obj) {
            *this = obj;
        };

        /****
		** Destructor
		*/

        ~BST_iterator()
        {};

        /****
		** Operator= (Assignment Operator)
		*/

        BST_iterator & operator=(const BST_iterator & obj) {
			if (this == &obj) {
				return *this;
			}
            _ptr = obj._ptr;
            return *this;
        };

		/****
		** Dereferences
		*/

		value_type	&operator*() const {
			return _ptr->data;
		};

		value_type	*operator->() const {
			return &_ptr->data;
		};

		/****
		** Increment and Decrement Operators
		*/

		// ++ Prefix
		BST_iterator & operator++() {
			_ptr = successor_node(_ptr);
			return *this;
		};

		// Postfix ++
		BST_iterator operator++(int) {
			BST_iterator temp(*this);
			operator++();
			return temp;
		};

		// -- Prefix
		BST_iterator & operator--() {
			_ptr = predecessor_node(_ptr);
			return *this;
		};

		// Postfix --
		BST_iterator operator--(int) {
			BST_iterator temp(*this);
			operator--();
			return temp;
		};

		/****
		** Relational Operators
		*/

		bool	operator==(const BST_iterator & rhs) {
			return (_ptr == rhs._ptr);
		}
		bool	operator!=(const BST_iterator & rhs) {
			return (_ptr != rhs._ptr);
		}

    private:
        /********************/
		/* Helper Functions */

        pointer      find_min_node(pointer node) {
            if (node == NULL) {
                return NULL;
            }
            else if (node->left == NULL) {
                return node;
            }
            else {
                return find_min_node(node->left);
            }
        };

        pointer     find_max_node(pointer node) {
            if (node == NULL) {
                return NULL;
            }
            else if (node->right == NULL) {
                return node;
            }
            else {
                return find_max_node(node->right);
            }
        };

        pointer      successor_node(pointer node) {
            if (node == NULL) {
                return NULL;
            }
            // The successor is the minimum data value
            // of right subtree
            if (node->right != NULL) {
                return find_min_node(node->right);
            }
            // If no any right subtree
            else {
                pointer parentNode = node->parent;
                pointer currentNode = node;

                // If currentNode is not root and
                // currentNode is its right children
                // continue moving up
                while ((parentNode != NULL) && (currentNode == parentNode->right)) {
                    currentNode = parentNode;
                    parentNode = currentNode->parent;
                }

                // If parentNode is not NULL
                // then the data of parentNode is
                // the successor of node
                return parentNode;
            }
        };

        pointer      predecessor_node(pointer node) {
            if (node == NULL) {
                return NULL;
            }
            // The predecessor is the maximum data value
            // of left subtree
            if (node->left != NULL) {
                return find_max_node(node->left);
            }
            // If no any left subtree
            else {
                pointer parentNode = node->parent;
                pointer currentNode = node;

                // If currentNode is not root and
                // currentNode is its left children
                // continue moving up
                while ((parentNode != NULL) && (currentNode == parentNode->left)) {
                    currentNode = parentNode;
                    parentNode = currentNode->parent;
                }

                // If parentNode is not NULL
                // then the data of parentNode is
                // the predecessor of node
                return parentNode;
            }
        };


        /****************/
		/* Private Data */

        pointer                                 _ptr;
};

}

#endif
