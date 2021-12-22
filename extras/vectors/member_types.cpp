/*
 **  To compile:
 **      g++ -Wall -Wextra -Werror -D=DEBUG 0 -std=c++98 member_types.cpp
 **      g++ -Wall -Wextra -Werror -D=DEBUG 1 -std=c++98 member_types.cpp
 **      g++ -Wall -Wextra -Werror -D=DEBUG 2 -std=c++98 member_types.cpp
 **
 **  Info:
 **      myOwn() and original() are essentially the same, just one is my own library,
 **      the other is the original library.
 **
 **      To understand what the member types do, just follow the original().
 */


#include <iostream>
#include <vector>
#include <typeinfo>

// Change accordingly:
#ifndef DEBUG
# define DEBUG 0 // 0 == original() member types
                 // 1 == myOwn() member types
                 // 2 == Both (to compare)
#endif




template < class T, class Alloc = std::allocator<T> >
class myVector {
    public:
        typedef T      value_type;          // myVector<T>::value_type = T
        typedef Alloc  allocator_type;      // myVector<T>::allocator_type = Alloc "(std::allocator<T>)"
        typedef typename allocator_type::reference        reference;        // myVector<T>::reference
        typedef typename allocator_type::const_reference  const_reference;  // myVector<T>::const_reference
        typedef typename allocator_type::pointer          pointer;          // myVector<T>::pointer
        typedef typename allocator_type::const_pointer    const_pointer;    // myVector<T>::const_pointer
        typedef typename std::ptrdiff_t                   difference_type;  // myVector<T>::difference_type
        typedef typename std::size_t                      size_type;        // myVector<T>::size_type

};


void    myOwn() {
     // ********** //
    // Value Type //
    {
    std::cout << "Value Type: " << std::endl;

    myVector<int>::value_type _value_type(5);
    myVector<double>::value_type _value_type2(5);

    std::cout << "  <int> type = " << typeid(_value_type).name() << std::endl;
    std::cout << "  <double> type = " << typeid(_value_type2).name() << std::endl;

    std::cout << std::endl;
    }

     // ************** //
    // Allocator Type //
    {
    std::cout << "Allocator Type: " << std::endl;

    myVector<int>::allocator_type _allocator_type;
    myVector<int>::value_type _value_type(2);

    int *arr = _allocator_type.allocate(_value_type);
    _allocator_type.construct(arr, 3);
    _allocator_type.construct(arr + 1, 1);
    _allocator_type.construct(arr + 2, 2);

    std::cout << "  allocated = {" << arr[0] << " " << arr[1] << " " << arr[2] << "}" << std::endl;

    _allocator_type.destroy(arr);
    _allocator_type.destroy(arr + 1);
    _allocator_type.destroy(arr + 2);

    _allocator_type.deallocate(arr, _value_type);

    std::cout << std::endl;
    }

     // ********* //
    // Reference //
    {
        std::cout << "Reference: " << std::endl;

        myVector<int>::value_type _value_type(3);
        myVector<int>::reference _reference(_value_type);

        std::cout << "  reference = " << _reference << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;
        _reference = 5;
        std::cout << "    changed reference using \"_reference = 5\"" << std::endl;
        std::cout << "  reference = " << _reference << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;

        std::cout << std::endl;
    }

     // *************** //
    // Const Reference //
    {
        std::cout << "Const Reference: " << std::endl;

        myVector<int>::value_type _value_type(3);
        myVector<int>::const_reference _const_reference(_value_type);

        std::cout << "  const reference = " << _const_reference << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;
        std::cout << "    can't change value because it's constant" << std::endl;

        std::cout << std::endl;
    }

     // ******* //
    // Pointer //
    {
        std::cout << "Pointer: " << std::endl;

        myVector<int>::value_type _value_type(3);
        myVector<int>::pointer _pointer(&_value_type);

        std::cout << "  pointer = " << _pointer << std::endl;
        std::cout << "  *pointer = " << *_pointer << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;
        *_pointer = 5;
        std::cout << "    changed pointer using \"*_pointer = 5\"" << std::endl;
        std::cout << "  pointer = " << _pointer << std::endl;
        std::cout << "  *pointer = " << *_pointer << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;

        std::cout << std::endl;
    }

     // ************* //
    // Const Pointer //
    {
        std::cout << "Const Pointer: " << std::endl;

        myVector<int>::value_type _value_type(3);
        myVector<int>::const_pointer const_pointer(&_value_type);

        std::cout << "  const_pointer = " << const_pointer << std::endl;
        std::cout << "  *const_pointer = " << *const_pointer << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;

        std::cout << std::endl;
    }

     // *************** //
    // Difference Type //
    {
        std::cout << "Difference Type: " << std::endl;

        myVector<char>::difference_type _difference_type;

        _difference_type = 2;
        std::cout << "  difference_type = " << _difference_type << std::endl;
        _difference_type = -2;
        std::cout << "  difference_type = " << _difference_type << std::endl;

        std::cout << std::endl;
    }

     // ********* //
    // Size Type //
    {
        std::cout << "Size Type: " << std::endl;

        myVector<char>::size_type _size_type;

        _size_type = 2;
        std::cout << "  size_type = " << _size_type << std::endl;
        _size_type = -2;
        std::cout << "  size_type = " << _size_type << std::endl;

        std::cout << std::endl;
    }
}

void    original() {
     // ********** //
    // Value Type //
    {
    std::cout << "Value Type: " << std::endl;

    std::vector<int>::value_type _value_type(5);
    std::vector<double>::value_type _value_type2(5);

    std::cout << "  <int> type = " << typeid(_value_type).name() << std::endl;
    std::cout << "  <double> type = " << typeid(_value_type2).name() << std::endl;

    std::cout << std::endl;
    }

     // ************** //
    // Allocator Type //
    {
    std::cout << "Allocator Type: " << std::endl;

    std::vector<int>::allocator_type _allocator_type;
    std::vector<int>::value_type _value_type(2);

    int *arr = _allocator_type.allocate(_value_type);
    _allocator_type.construct(arr, 3);
    _allocator_type.construct(arr + 1, 1);
    _allocator_type.construct(arr + 2, 2);

    std::cout << "  allocated = {" << arr[0] << " " << arr[1] << " " << arr[2] << "}" << std::endl;

    _allocator_type.destroy(arr);
    _allocator_type.destroy(arr + 1);
    _allocator_type.destroy(arr + 2);

    _allocator_type.deallocate(arr, _value_type);

    std::cout << std::endl;
    }

     // ********* //
    // Reference //
    {
        std::cout << "Reference: " << std::endl;

        std::vector<int>::value_type _value_type(3);
        std::vector<int>::reference _reference(_value_type);

        std::cout << "  reference = " << _reference << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;
        _reference = 5;
        std::cout << "    changed reference using \"_reference = 5\"" << std::endl;
        std::cout << "  reference = " << _reference << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;

        std::cout << std::endl;
    }

     // *************** //
    // Const Reference //
    {
        std::cout << "Const Reference: " << std::endl;

        std::vector<int>::value_type _value_type(3);
        std::vector<int>::const_reference _const_reference(_value_type);

        std::cout << "  const reference = " << _const_reference << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;
        std::cout << "    can't change value because it's constant" << std::endl;

        std::cout << std::endl;
    }

     // ******* //
    // Pointer //
    {
        std::cout << "Pointer: " << std::endl;

        std::vector<int>::value_type _value_type(3);
        std::vector<int>::pointer _pointer(&_value_type);

        std::cout << "  pointer = " << _pointer << std::endl;
        std::cout << "  *pointer = " << *_pointer << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;
        *_pointer = 5;
        std::cout << "    changed pointer using \"*_pointer = 5\"" << std::endl;
        std::cout << "  pointer = " << _pointer << std::endl;
        std::cout << "  *pointer = " << *_pointer << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;

        std::cout << std::endl;
    }

     // ************* //
    // Const Pointer //
    {
        std::cout << "Const Pointer: " << std::endl;

        std::vector<int>::value_type _value_type(3);
        std::vector<int>::const_pointer const_pointer(&_value_type);

        std::cout << "  const_pointer = " << const_pointer << std::endl;
        std::cout << "  *const_pointer = " << *const_pointer << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;

        std::cout << std::endl;
    }

     // *************** //
    // Difference Type //
    {
        std::cout << "Difference Type: " << std::endl;

        std::vector<char>::difference_type _difference_type;

        _difference_type = 2;
        std::cout << "  difference_type = " << _difference_type << std::endl;
        _difference_type = -2;
        std::cout << "  difference_type = " << _difference_type << std::endl;

        std::cout << std::endl;
    }

     // ********* //
    // Size Type //
    {
        std::cout << "Size Type: " << std::endl;

        std::vector<char>::size_type _size_type;

        _size_type = 2;
        std::cout << "  size_type = " << _size_type << std::endl;
        _size_type = -2;
        std::cout << "  size_type = " << _size_type << std::endl;

        std::cout << std::endl;
    }
}


int main() {
    if (DEBUG == 0) {
        original();
    }
    else if (DEBUG == 1) {
        myOwn();
    }
    else if (DEBUG == 2) {
        std::cout << "\n**************ORIGINAL**************\n\n";
        original();
        std::cout << "\n**************MY OWN**************\n\n";
        myOwn();
    }
}
