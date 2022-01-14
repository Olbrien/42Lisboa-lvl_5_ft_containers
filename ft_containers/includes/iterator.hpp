#ifndef ITERATOR_HPP
# define ITERATOR_HPP

#include <iostream>

namespace ft {

template <class iterator_tag, class T>
class random_access_iterator {
    public:
         /****************/
        /* Member Types */

        typedef T                                            value_type;
        typedef std::ptrdiff_t                               difference_type;
        typedef T                                            *pointer;
        typedef T                                            &reference;
        typedef iterator_tag                                 iterator_category;

         /********************/
        /* Member functions */

        /****
        ** Constructors
        */

        random_access_iterator() :   _pointer(NULL)
        {};

        random_access_iterator(pointer ptr) {
            _pointer = ptr;
        };

        random_access_iterator(const random_access_iterator & rhs) {
            _pointer = rhs._pointer;
            *this = rhs;
        };

        random_access_iterator & operator=(const random_access_iterator & rhs) {
            _pointer = rhs._pointer;
            return *this;
        };

        /****
        ** Destructor
        */

        ~random_access_iterator()
        {};


        /****
        ** Relational Operators
        */

        bool operator==(const random_access_iterator & rhs) {
            if (this->_pointer == rhs._pointer)
                return true;
            return false;
        };

        bool operator!=(const random_access_iterator & rhs) {
            if (this->_pointer != rhs._pointer)
                return true;
            return false;
        };

        /****
        ** Increment and Decrement Operators
        */

        // ++ Prefix
        random_access_iterator operator ++() {
            random_access_iterator temp;
            temp._pointer = ++_pointer;
            return temp;
        };

        // Postfix ++
        random_access_iterator operator ++(int) {
            random_access_iterator temp;
            temp._pointer = _pointer++;
            return temp;
        };

        // -- Prefix
        random_access_iterator operator --() {
            random_access_iterator temp;
            temp._pointer = --_pointer;
            return temp;
        };

        // Postfix --
        random_access_iterator operator --(int) {
            random_access_iterator temp;
            temp._pointer = _pointer--;
            return temp;
        };

        /****
        ** Dereferences
        */

        reference   operator*() {
            return *_pointer;
        };



    private:
        pointer     _pointer;
};

}


#endif
