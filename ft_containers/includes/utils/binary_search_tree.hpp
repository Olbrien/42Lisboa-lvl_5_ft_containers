#ifndef BINARY_SEARCH_TREE_HPP
# define BINARY_SEARCH_TREE_HPP

#include <iostream>

namespace ft {

template <class T>
class BSTNode {
    public:

		// This does not have _data (because you can't put NULL as a param)
		BSTNode (BSTNode *_left, BSTNode *_right, BSTNode *_parent, bool _end, bool _rend) :
				left(_left), right(_right), parent(_parent), end_node(_end),
				rend_node(_rend)
		{};

		// This one has _data
		BSTNode (T _data, BSTNode *_left, BSTNode *_right, BSTNode *_parent, bool _end, bool _rend) :
				data(_data), left(_left), right(_right), parent(_parent), end_node(_end),
				rend_node(_rend)
		{};

        T           data;
        BSTNode     *left;
        BSTNode     *right;
        BSTNode     *parent;

		bool		end_node;   // If this node is after the last element of the tree (map.end())
		bool		rend_node;  // If this node is before the first element of the tree (map_rend())
};

template <class T, class Alloc = std::allocator<T>, class Node = ft::BSTNode<T>,
		  class Node_Alloc = std::allocator<Node> >
class BST {
    public:
		/****************/
		/* Member Types */

		typedef typename std::size_t                                    size_type;
		typedef Alloc													allocator_type;
		typedef Node													node_type;
		typedef Node_Alloc												node_allocator_type;

		/********************/
		/* Member functions */

        BST<T>() :  _size(0)
        {
			// You start your binary search tree with an existing but empty root
			// This is because of map.end(), you need to get the node after end,
			// and being able to -- the previous node
			// And then you add the rend_node(empty) to the left of end_node(empty)
			_root = _node_allocator.allocate(1);
			BSTNode<T> *rend = _node_allocator.allocate(1);

			_node_allocator.construct(_root, node_type(rend, NULL, NULL, true, false));
			_node_allocator.construct(rend, node_type(NULL, NULL, _root, false, true));
		};

		BST(const BST & obj) {
			*this = obj;
		}

		~BST() {
			remove_all(false);
		};

		BST & operator=(BST & obj) {
			if (this == &obj) {
				return *this;
			}
			if (_root != NULL) {
				this->remove_all(false);
			}
			if (_root == NULL && obj._root != NULL) {
				BSTNode<T>    *node_start_pos = obj._root;
				BSTNode<T>    *node_loop = obj._root;

				while (node_loop != NULL) {
					this->insert(node_loop->data);
					node_loop = obj.predecessor(node_loop->data);
				}
				node_loop = obj._root;
				while (node_loop != NULL) {
					this->insert(node_loop->data);
					node_loop = obj.successor(node_loop->data);
				}
			}
			return *this;
		};

        void insert(T data) {
            // Invoking Insert() function
            // and passing root node and given data
            _root = insert_node(_root, data);
            _size++;
        };

        void insert_hint(BSTNode<T> *node, T data) {
            // Invoking Insert_hint() function
            // and passing root node and given data

			BSTNode<T> *tmp_root = _root;

			_root = search(node->data);

			if (_root != NULL) {
				_root = insert_node(_root, data);
			}

			_root = search_node(tmp_root, tmp_root->data);
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

        BSTNode<T>  *find_min() const {
            return find_min_node(_root);
        };

		BSTNode<T>  *find_max() const {
			return find_max_node(_root);
		};


		// This function goes beyond the first element. It goes to an rend_node() that has
		// undefined value (empty). This is for map.rend() to do --, and iterate to the last
		// element.
		BSTNode<T>	*find_rend() const {
			return(find_rend_node(_root));
		}

		// This function goes beyond the last element. It goes to an end_node() that has
		// undefined value (empty). This is for map.end() to do --, and iterate to the last
		// element.
		BSTNode<T>	*find_end() const {
			return(find_end_node(_root));
		}

        BSTNode<T>  *successor(T data) {
            return (successor_node(search(data)));
        };

        BSTNode<T>  *predecessor(T data) {
            return (predecessor_node(search(data)));
        };

        void remove(T data) {
        	_root = remove_node(_root, data);
        };

        size_type  get_size() const {
            return (_size);
        }

		size_type  max_size() const {
			return (_node_allocator.max_size());
		}

		void	remove_all(bool keep_end_rend_nodes) {
			remove_all_nodes(_root);
			_root = NULL;
			_size = 0;

			// If you want to clear just the nodes and not the _end and _rend nodes
			if (keep_end_rend_nodes == true) {
				_root = _node_allocator.allocate(1);
				BSTNode<T> *rend = _node_allocator.allocate(1);

				_node_allocator.construct(_root, node_type(rend, NULL, NULL, true, false));
				_node_allocator.construct(rend, node_type(NULL, NULL, _root, false, true));
			}
		}

    private:
        /********************/
		/* Helper Functions */

        BSTNode<T>     *insert_node(BSTNode<T> *node, T& data) {
			// If it's being inserted on a spot that isn't the end_node(empty node)
			// or the rend_node(empty node)
			if (node == NULL) {
				node = _node_allocator.allocate(1);
				_node_allocator.construct(node, node_type(data, NULL, NULL, NULL, false, false));
			}
			// If it's the first element being inserted
			// If the end_node and rend_node are connected
			else if (node->end_node == true &&
					node->left != NULL		&&
					node->left->rend_node == true) {

				BSTNode<T> *newNode = _node_allocator.allocate(1);
				_node_allocator.construct(newNode, node_type(data, node->left, node, node->parent, false, false));

				node->parent = newNode;
				node->left->parent = newNode;

				node->left->right = NULL;
				node->left = NULL;

				node = newNode;
			}
			// If it's being inserted before the end_node(empty node)
            else if (node->end_node == true) {
				BSTNode<T> *newNode = _node_allocator.allocate(1);
				_node_allocator.construct(newNode, node_type(data, node->left, node, node->parent, false, false));

				node->parent = newNode;

				node = newNode;
            }
			// If it's being inserted after the rend_node(empty node)
            else if (node->rend_node == true) {

				BSTNode<T> *newNode = _node_allocator.allocate(1);
				_node_allocator.construct(newNode, node_type(data, node, node->right, node->parent, false, false));

				node->parent = newNode;

				node = newNode;
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
            if (node == NULL) {
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
            if (node == NULL) {
                return NULL;
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
            return (NULL);
        };

		template <class K>
        BSTNode<T>     *search_key(BSTNode<T> *node, K& key) {
            // The data is not found
            if (node == NULL) {
                return NULL;
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
            return (NULL);
        };

        BSTNode<T>      *find_min_node(BSTNode<T> *node) const {
			// To retrieve the Node after the rend_node(empty node)
            if (node == NULL || node->rend_node == true) {
                return NULL;
            }
            else if (node->left->rend_node == true) {
                return node;
            }
            else {
                return find_min_node(node->left);
            }
        };

        BSTNode<T>     *find_max_node(BSTNode<T> *node) const {
			// To retrieve the Node before the end_node(empty node)
            if (node == NULL || node->end_node == true) {
                return NULL;
            }
            else if (node->right->end_node == true) {
                return node;
            }
            else {
                return find_max_node(node->right);
            }
        };

        BSTNode<T>      *find_rend_node(BSTNode<T> *node) const {
			// To retrieve the rend_node(empty node)
            if (node == NULL) {
                return NULL;
            }
            else if (node->left == NULL) {
                return node;
            }
            else {
                return find_rend_node(node->left);
            }
		}

        BSTNode<T>     *find_end_node(BSTNode<T> *node) const {
			// To retrieve the end_node(empty node)
            if (node == NULL) {
                return NULL;
            }
            else if (node->right == NULL) {
                return node;
            }
            else {
                return find_end_node(node->right);
            }
        };

        BSTNode<T>      *successor_node(BSTNode<T> *node) {
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
                BSTNode<T> *parentNode = node->parent;
                BSTNode<T> *currentNode = node;

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

        BSTNode<T>      *predecessor_node(BSTNode<T> *node) {
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
            if (node == NULL) {
                return NULL;
            }

            // Target node is found
            if (node->data == data) {
                BSTNode<T>    *tmp_node = node;
                // If the node is a leaf node
                // The node can be safely removed
                if (node->left == NULL && node->right == NULL) {
                    node = NULL;
					_node_allocator.destroy(tmp_node);
					_node_allocator.deallocate(tmp_node, 1);
                    _size--;
                }
                // The node have only one child at right
                else if (node->left == NULL && node->right != NULL) {
                    // The only child will be connected to
                    // the parent's of node directly
                    node->right->parent = node->parent;

                    // Bypass node
                    node = node->right;
					_node_allocator.destroy(tmp_node);
					_node_allocator.deallocate(tmp_node, 1);
                    _size--;
                }
                // The node have only one child at left
                else if (node->left != NULL && node->right == NULL)
                {
                    // The only child will be connected to
                    // the parent's of node directly
                    node->left->parent = node->parent;

                    // Bypass node
                    node = node->left;
					_node_allocator.destroy(tmp_node);
					_node_allocator.deallocate(tmp_node, 1);
                    _size--;
                }
                // The node is the left most
                else if (node->left != NULL && node->left->rend_node == true &&
						 node->right != NULL) {
                    // The only child will be connected to
                    // the parent's of node directly
                    node->right->parent = node->parent;

                    // Bypass node
					node->right->left = node->left;
                    node = node->right;
					_node_allocator.destroy(tmp_node);
					_node_allocator.deallocate(tmp_node, 1);
                    _size--;
                }
                // The node is the right most
                else if (node->left != NULL && node->right != NULL &&
						 node->right->end_node == true)
                {
                    // The only child will be connected to
                    // the parent's of node directly
                    node->left->parent = node->parent;

                    // Bypass node
					node->left->right = node->right;
                    node = node->left;
					_node_allocator.destroy(tmp_node);
					_node_allocator.deallocate(tmp_node, 1);
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

				_node_allocator.destroy(node);
				_node_allocator.deallocate(node, 1);
				node = NULL;
			}
		}

        /****************/
		/* Private Data */

        BSTNode<T>                      *_root;
		node_allocator_type				 _node_allocator;
        size_type		                 _size;

};

}

#endif

// https://medium.com/swlh/binary-search-trees-c-484377f0d349
