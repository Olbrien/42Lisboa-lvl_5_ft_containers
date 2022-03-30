#ifndef MAP_HPP
# define MAP_HPP

#include <iostream>
#include "../includes/utils/utility.hpp"
#include "../includes/utils/binary_search_tree.hpp"
#include "../includes/utils/binary_search_tree_iterator.hpp"

namespace ft {

template < class Key, class T, class Compare = std::less<Key>,
		   class Alloc = std::allocator<ft::pair<const Key,T> > >
class map {
	public:
		/****************/
		/* Member Types */

		typedef Key											key_type;
		typedef T											mapped_type;
		typedef ft::pair<key_type, mapped_type>				value_type;
		typedef Compare										key_compare;

		class value_compare : std::binary_function<value_type, value_type, bool> {
			private:
				friend class map;

			protected:
				Compare comp;
				value_compare (Compare c) : comp(c) {};

			public:
				typedef bool result_type;
				typedef value_type first_argument_type;
				typedef value_type second_argument_type;
				bool operator() (const value_type& x, const value_type& y) const {
					return comp(x.first, y.first);
				}
		};

		typedef Alloc															allocator_type;
		typedef typename allocator_type::reference								reference;
		typedef typename allocator_type::const_reference						const_reference;
		typedef typename allocator_type::pointer								pointer;
		typedef typename allocator_type::const_pointer							const_pointer;
		typedef typename ft::BST_iterator<Key, T>								iterator;
		typedef typename ft::BST_const_iterator<Key, T>							const_iterator;
	//	typedef typename ft::BST_reverse_iterator<iterator>						reverse_iterator;
	//	typedef typename ft::BST_const_reverse_iterator<const_iterator>			const_reverse_iterator;
		typedef typename std::ptrdiff_t											difference_type;
		typedef typename std::size_t											size_type;

		/********************/
		/* Member functions */

		/****
		** Constructors
		*/

		// Default
		explicit map (const key_compare& comp = key_compare(),
					  const allocator_type& alloc = allocator_type()) :	_alloc(alloc),
					  													_comp(comp),
																		_root(NULL)
		{};

		/****
		** Iterators
		*/

		iterator begin() {
			return iterator(_bst.find_min());
		};

		const_iterator begin() const {
			return const_iterator(_bst.find_min());
		};

		iterator end() {
			if (_bst.get_size() == 0)
				return (this->begin());

			return iterator(_bst.find_end());
		};

		const_iterator end() const {
			return const_iterator(_bst.find_end());
		};

		/****
		** Capacity
		*/

		bool empty() const {
			return (_bst.get_size() == 0 ? true : false);
		};

		size_type size() const {
			return (_bst.get_size());
		}

		/****
		** Modifiers
		*/

		// single element
		ft::pair<iterator,bool> insert (const value_type& val) {
			if (_bst.search(val) == NULL || _bst.get_size() == 0) {
				_bst.insert(val);
				return (ft::make_pair(_bst.search(val), false));
			}
			else {
				return (ft::make_pair(_bst.search(val), true));
			}
		};


		void erase (iterator position) {
			if (this->size() > 0) {
				_bst.remove(position._ptr->data);
			}
		}



	private:
		ft::BST<value_type>								_bst;
		allocator_type									_alloc;
		key_compare										_comp;
		ft::BSTNode<value_type>							*_root;

};

}

#endif
