#include <iterator>

template<typename POINTER, typename _Container>
class random_access_iterator {

	protected:
		POINTER									_pointer;

		typedef ft::iterator_traits<POINTER>		__traits_type;

	public:
		typedef POINTER										iterator_type;
		typedef typename __traits_type::iterator_category	iterator_category;
		typedef typename __traits_type::value_type  		value_type;
		typedef typename __traits_type::difference_type 	difference_type;
		typedef typename __traits_type::reference 			reference;
		typedef typename __traits_type::pointer   			pointer;


		random_access_iterator() : _pointer(POINTER())
		{};

		explicit random_access_iterator(const POINTER & __i) : _pointer(__i)
		{};

		// Allow iterator to const_iterator conversion
		template<typename _Iter>
		random_access_iterator(const random_access_iterator
							<_Iter, typename __enable_if<(std::__are_same<_Iter,
							typename _Container::pointer>::__value), _Container>::__type>& __i)
					: _pointer(__i.base())
		{};

		// Forward iterator requirements
		reference operator*() const {
			return *_pointer;
		};

		pointer operator->() const {
			return _pointer;
		};

		random_access_iterator & operator++() {
			++_pointer;
			return *this;
		};

		random_access_iterator operator++(int) {
			return random_access_iterator(_pointer++);
		};

		// Bidirectional iterator requirements
		random_access_iterator & operator--() {
			--_pointer;
			return *this;
		};

		random_access_iterator operator--(int) {
			return random_access_iterator(_pointer--);
		};

		// Random access iterator requirements
		reference operator[](difference_type __n) const
		{ return _pointer[__n]; }

		random_access_iterator & operator+=(difference_type __n) {
			_pointer += __n;
			return *this;
		}

		random_access_iterator & operator-=(difference_type __n) {
			_pointer -= __n;
			return *this;
		}

		random_access_iterator operator+(difference_type __n) const {
			return random_access_iterator(_pointer + __n);
		}

		random_access_iterator operator-(difference_type __n) const {
			return random_access_iterator(_pointer - __n);
		}

		const POINTER & base() const {
			return _pointer;
		}
};

template<typename _IteratorL, typename _IteratorR, typename _Container>
inline bool operator== (const random_access_iterator<_IteratorL, _Container>& __lhs,
					    const random_access_iterator<_IteratorR, _Container>& __rhs)
{
	return __lhs.base() == __rhs.base();
}

template<typename POINTER, typename _Container>
inline bool operator==(const random_access_iterator<POINTER, _Container>& __lhs,
					   const random_access_iterator<POINTER, _Container>& __rhs)
{
	return __lhs.base() == __rhs.base();
}

template<typename _IteratorL, typename _IteratorR, typename _Container>
inline bool operator!= (const random_access_iterator<_IteratorL, _Container>& __lhs,
						const random_access_iterator<_IteratorR, _Container>& __rhs)
{
	return __lhs.base() != __rhs.base();
}

template<typename POINTER, typename _Container>
inline bool operator!= (const random_access_iterator<POINTER, _Container>& __lhs,
					    const random_access_iterator<POINTER, _Container>& __rhs)
{
	return __lhs.base() != __rhs.base();
}

// Random access iterator requirements
template<typename _IteratorL, typename _IteratorR, typename _Container>
inline bool operator< (const random_access_iterator<_IteratorL, _Container>& __lhs,
					   const random_access_iterator<_IteratorR, _Container>& __rhs)
{
	return __lhs.base() < __rhs.base();
}

template<typename POINTER, typename _Container>
inline bool operator< (const random_access_iterator<POINTER, _Container>& __lhs,
					   const random_access_iterator<POINTER, _Container>& __rhs)
{
	return __lhs.base() < __rhs.base();
}

template<typename _IteratorL, typename _IteratorR, typename _Container>
inline bool operator> (const random_access_iterator<_IteratorL, _Container>& __lhs,
					   const random_access_iterator<_IteratorR, _Container>& __rhs)
{
	return __lhs.base() > __rhs.base();
}

template<typename POINTER, typename _Container>
inline bool operator> (const random_access_iterator<POINTER, _Container>& __lhs,
					   const random_access_iterator<POINTER, _Container>& __rhs)
{
	return __lhs.base() > __rhs.base();
}

template<typename _IteratorL, typename _IteratorR, typename _Container>
inline bool operator<= (const random_access_iterator<_IteratorL, _Container>& __lhs,
					   const random_access_iterator<_IteratorR, _Container>& __rhs)
{
	return __lhs.base() <= __rhs.base();
}

template<typename POINTER, typename _Container>
inline bool operator<= (const random_access_iterator<POINTER, _Container>& __lhs,
						const random_access_iterator<POINTER, _Container>& __rhs)
{
	return __lhs.base() <= __rhs.base();
}

template<typename _IteratorL, typename _IteratorR, typename _Container>
inline bool operator>= (const random_access_iterator<_IteratorL, _Container>& __lhs,
						const random_access_iterator<_IteratorR, _Container>& __rhs)
{
	return __lhs.base() >= __rhs.base();
}

template<typename POINTER, typename _Container>
inline bool operator>= (const random_access_iterator<POINTER, _Container>& __lhs,
						const random_access_iterator<POINTER, _Container>& __rhs)
{
	return __lhs.base() >= __rhs.base();
}

// _GLIBCXX_RESOLVE_LIB_DEFECTS
// According to the resolution of DR179 not only the various comparison
// operators but also operator- must accept mixed iterator/const_iterator
// parameters.
template<typename _IteratorL, typename _IteratorR, typename _Container>
inline typename random_access_iterator<_IteratorL, _Container>::difference_type
				operator-(const random_access_iterator<_IteratorL, _Container>& __lhs,
						  const random_access_iterator<_IteratorR, _Container>& __rhs)
{
	return __lhs.base() - __rhs.base();
}

template<typename POINTER, typename _Container>
inline typename random_access_iterator<POINTER, _Container>::difference_type
	operator-(const random_access_iterator<POINTER, _Container>& __lhs,
	const random_access_iterator<POINTER, _Container>& __rhs)

{ return __lhs.base() - __rhs.base(); }

template<typename POINTER, typename _Container>
inline random_access_iterator<POINTER, _Container>
	operator+(typename random_access_iterator<POINTER, _Container>::difference_type	__n,
			  const random_access_iterator<POINTER,_Container>& __i)
{
	return random_access_iterator<POINTER, _Container>(__i.base() + __n);
}
