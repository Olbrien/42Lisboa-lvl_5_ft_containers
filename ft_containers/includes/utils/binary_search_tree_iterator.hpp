#ifndef BINARY_SEARCH_TREE_ITERATOR_HPP
# define BINARY_SEARCH_TREE_ITERATOR_HPP

#include <iostream>

namespace ft {

template<class Key, class T>
class binary_search_tree_iterator {
    public:
		/****************/
		/* Member Types */
            
        typedef ft::pair<Key, T>                value_type;
        typedef ft::pair<Key, T>                &reference;
        typedef ft::Node<ft::pair<Key, T> >     *pointer;

        /********************/
		/* Member functions */

		/****
		** Constructors
		*/

        binary_search_tree_iterator() : _pointer(NULL)
        {};
        
        binary_search_tree_iterator(pointer ptr) : _pointer(ptr)
        {};

        binary_search_tree_iterator(const binary_search_tree_iterator & obj) {
            *this = obj;
        };

        /****
		** Destructor
		*/

        ~binary_search_tree_iterator()
        {};
        		
        /****
		** Operator= (Assignment Operator)
		*/

        binary_search_tree_iterator & operator=(const binary_search_tree_iterator & obj) {
			if (this == &obj) {
				return *this;
			}
            _pointer = obj._pointer;
            return *this;
        };

		/****
		** Increment and Decrement Operators
		*/

		// ++ Prefix
		binary_search_tree_iterator & operator++() {
			++_pointer;
			return *this;
		};

		// Postfix ++
		binary_search_tree_iterator operator++(int) {
			binary_search_tree_iterator temp;
			temp._pointer = _pointer++;
			return temp;
		};

		// -- Prefix
		binary_search_tree_iterator & operator--() {
			--_pointer;
			return *this;
		};

		// Postfix --
		binary_search_tree_iterator operator--(int) {
			binary_search_tree_iterator temp;
			temp._pointer = _pointer--;
			return temp;
		};

    private:
        /********************/
		/* Helper Functions */

        

        /****************/
		/* Private Data */

        pointer                                 *_pointer;


};

}

#endif