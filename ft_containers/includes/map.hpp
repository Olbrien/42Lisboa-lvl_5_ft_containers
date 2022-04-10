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
		typedef typename ft::BST_reverse_iterator<Key, T>						reverse_iterator;
		typedef typename ft::BST_const_reverse_iterator<Key, T>					const_reverse_iterator;
		typedef typename std::ptrdiff_t											difference_type;
		typedef typename std::size_t											size_type;

		/********************/
		/* Member functions */

		/****
		** Constructors
		*/

		// Empty
		explicit map (const key_compare& comp = key_compare(),
					  const allocator_type& alloc = allocator_type()) :	_alloc(alloc),
					  													_comp(comp)
																		//_root(NULL)
		{};

		// Range
		template <class InputIterator>
		map (InputIterator first, InputIterator last,
			 const key_compare& comp = key_compare(),
			 const allocator_type& alloc = allocator_type()) : _alloc(alloc),
			 												   _comp(comp)
		{
			// Check if you're sending an empty iterator (from an empty map)
			if (first._ptr != NULL) {
				for (; first != last; first++) {
					_bst.insert(*first);
				}
			}
		};

		// Copy
		map (const map& x) {
			*this = x;
		}

		// Destructor
		~map()
		{};

		/****
		** Operator= (Assignment Operator)
		*/
		map & operator=(const map & x) {
			if (this == &x) {
				return *this;
			}
			_alloc = x._alloc;
			_comp = x._comp;
			_bst.remove_all(true);

			for (const_iterator first = x.begin(); first != x.end(); first++) {
				_bst.insert(first._ptr->data);
			}
			return *this;
		}



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


		reverse_iterator rbegin() {
			return reverse_iterator(_bst.find_max());
		}

		const_reverse_iterator rbegin() const {
			return const_reverse_iterator(_bst.find_max());
		}

		reverse_iterator rend() {
			return reverse_iterator(_bst.find_rend());
		}

		const_reverse_iterator rend() const {
			return const_reverse_iterator(_bst.find_rend());
		}

		/****
		** Capacity
		*/

		bool empty() const {
			return (_bst.get_size() == 0 ? true : false);
		};

		size_type size() const {
			return (_bst.get_size());
		}

		size_type max_size() const {
			return (_bst.max_size());
		}

		/****
		** Element Access
		*/

		mapped_type& operator[] (const key_type& k) {
			iterator it = find(k);

			if (it == end()) {
				ft::pair<iterator, bool> inserted = insert(ft::make_pair(k, mapped_type()));
				return (inserted.first._ptr->data.second);
			}
			// This is case you're inserting a [0, ' ']
			// It thinks [0, ' '] is empty, so it give "_bst.search(val) == NULL" on the
			// insert function
			else if (it._ptr->rend_node == true) {
				_bst.insert(ft::make_pair(k, mapped_type()));
			}

			return (it._ptr->data.second);
		}

		/****
		** Modifiers
		*/

		// Insert Single Element
		ft::pair<iterator,bool> insert (const value_type& val) {
			if (_bst.search(val) == NULL || _bst.get_size() == 0) {
				_bst.insert(val);
				return (ft::make_pair(_bst.search(val), true));
			}
			else {
				return (ft::make_pair(_bst.search(val), false));
			}
		};

		// Insert With Hint
		iterator insert (iterator position, const value_type& val) {
			if (position._ptr->end_node == true || position._ptr->rend_node == true) {
				insert(val);
				return (_bst.search(val));
			}
			if (_bst.search(val) == NULL) {
				_bst.insert_hint(position._ptr, val);
				return (_bst.search(val));
			}
			else {
				return (_bst.search(val));
			}
		};

		// Insert Range
		template <class InputIterator>
		void insert (InputIterator first, InputIterator last,
					 typename enable_if<!is_integral<InputIterator>::value>::type* = 0) {
			while (first != last) {
				insert(first._ptr->data);
				first++;
			}
		};

		// Erase Iterator
		void erase (iterator position) {
			if (this->size() > 0) {
				_bst.remove(position._ptr->data);
			}
		};

		// Erase Key
		size_type erase (const key_type& k) {
			iterator it = this->find(k);

			if (it == this->end()) {
				return (0);
			}
			else {
				erase(it);
				return (1);
			}
		};

		// Erase Range
		void erase (iterator first, iterator last) {
			while (first != last) {
				erase(first++);
			}
		};

		void swap (map & x) {
			ft::BST<value_type>		bst_temp;
			bst_temp = x._bst;
			allocator_type			alloc_temp = x._alloc;
			key_compare				comp_temp = x._comp;

			x._bst = _bst;
			x._alloc = _alloc;
			x._comp = _comp;

			_bst = bst_temp;
			_alloc = alloc_temp;
			_comp = comp_temp;
		}

		void clear() {
			_bst.remove_all(true);
		}


		/****
		** Observers
		*/

		key_compare key_comp() const {
			return (_comp);
		}

		value_compare value_comp() const {
			return value_compare(_comp);
		}

		/****
		** Operations
		*/

		iterator find (const key_type& k) {
			if (_bst.search(k) == NULL) {
				return iterator(end());
			}
			return iterator(_bst.search(k));
		}

		const_iterator find (const key_type& k) const {
			if (_bst.search(k) == NULL) {
				return const_iterator(end());
			}
			return const_iterator(_bst.search(k));
		}

		size_type count (const key_type& k) const {
			if (find(k) == end()) {
				return (0);
			}
			else {
				return (1);
			}
		}

		/****
		** Allocator
		*/

		allocator_type get_allocator() const {
			return _alloc;
		}


	private:
		ft::BST<value_type>								_bst;
		allocator_type									_alloc;
		key_compare										_comp;

};

}

#endif
