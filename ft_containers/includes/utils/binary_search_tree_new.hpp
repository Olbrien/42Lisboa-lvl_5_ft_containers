#ifndef BINARY_SEARCH_TREE_NEW_HPP
# define BINARY_SEARCH_TREE_NEW_HPP

#include <iostream>

namespace ft {

template <class T>
class BSTNode {
    public:
        T           data;
        BSTNode     *left;
        BSTNode     *right;
        BSTNode     *parent;
};

template <class T>
class BST {
    public:
		/****************/
		/* Member Types */

		typedef typename std::size_t                                    size_type;

		/********************/
		/* Member functions */

        BST<T>() :  _root(nullptr),
                    _size(0)
        {};

		~BST() {
			remove_all();
		};


        void insert(T data) {
            // Invoking Insert() function
            // and passing root node and given data
            _root = insert_node(_root, data);
            _size++;
        };

        void print_tree_in_order() {
            // Traverse the BST from root node
            // then print all datas
            print_tree_in_order_node(_root);
            std::cout << std::endl;
        };

		// Search a entire ::pair<key, value>
        BSTNode<T>   *search(T data) {
            // Invoking Search() operation
            // and passing root node
            BSTNode<T> *result = search_node(_root, data);
            return result;
        };

		// Search for a Key of a ::pair<key, value>
		template <typename K>
        BSTNode<T>   *search(K key) {
			BSTNode<T> *result = search_key(_root, key);
            return result;
        };

        BSTNode<T>  *find_min() {
            return find_min_node(_root);
        };

        BSTNode<T>  *find_max() {
            return find_max_node(_root);
        };

        BSTNode<T>  *successor(T data) {
            return (successor_node(search(data)));
        };

        BSTNode<T>  *predecessor(T data) {
            return (predecessor_node(search(data)));
        };

        void remove(T data) {
        	_root = remove_node(_root, data);
        };

        size_type  get_size() {
            return (_size);
        }

		void	remove_all() {
			remove_all_nodes(_root);
			_root = nullptr;
		}

    protected:
        /********************/
		/* Helper Functions */

        BSTNode<T>     *insert_node(BSTNode<T> *node, T& data) {
            // If BST doesn't exist create a new node as root
            // Or if the child has no nodes
            if (node == nullptr) {
                node = new BSTNode<T>();

                node->data = data;
                node->left = nullptr;
                node->right = nullptr;
                node->parent = nullptr;
            }
            // If the given data is greater than
            // node's data then go to right subtree
            else if (data > node->data) {
                node->right = insert_node(node->right, data);
                node->right->parent = node;
            }
            // If the given data is smaller than
            // node's data then go to left subtree
            else if (data < node->data) {
                node->left = insert_node(node->left, data);
                node->left->parent = node;
            }
            return node;
        };

        void        print_tree_in_order_node(BSTNode<T> *node) {
            if (node == nullptr) {
                return ;
            }

            // Get the smallest data first
            // which is in the left subtree
            print_tree_in_order_node(node->left);

            std::cout << "[" <<node->data.first << ", ";
            std::cout << node->data.second << "] ";

            // Continue to the greatest data
            print_tree_in_order_node(node->right);

        };

        BSTNode<T>     *search_node(BSTNode<T> *node, T& data) {
            // The data is not found
            if (node == nullptr) {
                return nullptr;
            }
            // The given data is found
            else if (node->data == data) {
                return node;
            }
            // The given data is greater than
            // current node's data
            else if (node->data < data) {
                return search_node(node->right, data);
            }
            // The given data is less than
            // current node's data
            else {
                return search_node(node->left, data);
            }
            return (nullptr);
        };

		template <class K>
        BSTNode<T>     *search_key(BSTNode<T> *node, K& key) {
            // The data is not found
            if (node == nullptr) {
                return nullptr;
            }
            // The given key is found (key is first of the ::pair<first, second>)
            else if (node->data.first == key) {
                return node;
            }
            // The given key is greater than
            // current node's key
            else if (node->data.first < key) {
                return search_key(node->right, key);
            }
            // The given key is less than
            // current node's key
            else {
                return search_key(node->left, key);
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
            // The successor is the minimum data value
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
                // then the data of parentNode is
                // the successor of node
                return parentNode;
            }
        };

        BSTNode<T>      *predecessor_node(BSTNode<T> *node) {
            if (node == nullptr) {
                return nullptr;
            }
            // The predecessor is the maximum data value
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
                // then the data of parentNode is
                // the predecessor of node
                return parentNode;
            }
        };

        BSTNode<T>     *remove_node(BSTNode<T> *node, T& data) {
            // The given node is not found in BST
            if (node == nullptr) {
                return nullptr;
            }

            // Target node is found
            if (node->data == data) {
                BSTNode<T>    *tmp_node = node;
                // If the node is a leaf node
                // The node can be safely removed
                if (node->left == nullptr && node->right == nullptr) {
                    node = nullptr;
                    delete tmp_node;
                    _size--;
                }
                // The node have only one child at right
                else if (node->left == nullptr && node->right != nullptr) {
                    // The only child will be connected to
                    // the parent's of node directly
                    node->right->parent = node->parent;

                    // Bypass node
                    node = node->right;
                    delete tmp_node;
                    _size--;
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
                    _size--;
                }
                // The node have two children (left and right)
                else
                {
                    // Find successor or predecessor to avoid quarrel
                    BSTNode<T>  *predecessorKey = predecessor_node(node);

                    // Replace node's data with successor's data
                    node->data = predecessorKey->data;

                    // Delete the old successor's data
                    node->left = remove_node(node->left, predecessorKey->data);
                }
            }
            // Target node's data is smaller than
            // the given data then search to right
            else if (node->data < data)
                node->right = remove_node(node->right, data);
            // Target node's data is greater than
            // the given data then search to left
            else
                node->left = remove_node(node->left, data);

            // Return the updated BST
            return node;
        };

		void		remove_all_nodes(BSTNode<T>* node) {
			if (node) {
				if (node->left)
					remove_all_nodes(node->left);
				if (node->right)
					remove_all_nodes(node->right);
				delete node;
				node = nullptr;
				_size--;
			}
		}

    private:
        /****************/
		/* Private Data */

        BSTNode<T>                      *_root;
        size_type		                 _size;

};

}

#endif

// https://medium.com/swlh/binary-search-trees-c-484377f0d349
// https://github.com/stevenkim18/ft_containers/blob/main/containers/map/BST.hpp
