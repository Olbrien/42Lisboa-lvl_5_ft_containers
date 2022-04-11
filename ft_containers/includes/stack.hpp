#ifndef STACK_HPP
# define STACK_HPP

#include <iostream>
#include "../includes/vector.hpp"

namespace ft {

template <class T, class Container = ft::vector<T> >
class stack {
	public:
		typedef typename Container::value_type			value_type;
		typedef Container								container_type;
		typedef typename Container::size_type			size_type;

		explicit stack (const container_type& ctnr = container_type())	: _ctnr(ctnr)
		{};

		bool empty() const { return _ctnr.empty(); };
		size_type size() const { return _ctnr.size(); };
		value_type & top() { return _ctnr.back(); };
		const value_type & top() const { return _ctnr.back(); };
		void push (const value_type& val) { _ctnr.push_back(val); };
		void pop() { _ctnr.pop_back(); };

		template <class TF, class ContainerF>
			friend bool operator== (const stack<TF,ContainerF>& lhs, const stack<TF,ContainerF>& rhs);
		template <class TF, class ContainerF>
			friend bool operator!= (const stack<TF,ContainerF>& lhs, const stack<TF,ContainerF>& rhs);
		template <class TF, class ContainerF>
			friend bool operator<  (const stack<TF,ContainerF>& lhs, const stack<TF,ContainerF>& rhs);
		template <class TF, class ContainerF>
			friend bool operator<= (const stack<TF,ContainerF>& lhs, const stack<TF,ContainerF>& rhs);
		template <class TF, class ContainerF>
			friend bool operator>  (const stack<TF,ContainerF>& lhs, const stack<TF,ContainerF>& rhs);
		template <class TF, class ContainerF>
			friend bool operator>= (const stack<TF,ContainerF>& lhs, const stack<TF,ContainerF>& rhs);

	protected:
		container_type			_ctnr;

};

template <class T, class Container>
bool operator== (const stack<T,Container>& lhs, const stack<T,Container>& rhs) {
	return (lhs._ctnr == rhs._ctnr);
};

template <class T, class Container>
bool operator!= (const stack<T,Container>& lhs, const stack<T,Container>& rhs){
	return (lhs._ctnr != rhs._ctnr);
};

template <class T, class Container>
bool operator<  (const stack<T,Container>& lhs, const stack<T,Container>& rhs){
	return (lhs._ctnr < rhs._ctnr);
};

template <class T, class Container>
bool operator<= (const stack<T,Container>& lhs, const stack<T,Container>& rhs){
	return (lhs._ctnr <= rhs._ctnr);
};

template <class T, class Container>
bool operator>  (const stack<T,Container>& lhs, const stack<T,Container>& rhs){
	return (lhs._ctnr > rhs._ctnr);
};

template <class T, class Container>
bool operator>= (const stack<T,Container>& lhs, const stack<T,Container>& rhs){
	return (lhs._ctnr >= rhs._ctnr);
};

}

#endif
