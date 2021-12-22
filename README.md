###### <i>Recent Update on 22/12/2021.</i>
• Started the project.

## Subject:

You can find the subject of this project [here.](https://github.com/Olbrien/42Lisboa-lvl_5_ft_containers/blob/main/extras/lvl_5_ft_containers.pdf)

## Explaining My Code:

### Vectors:
[Member Types](https://github.com/Olbrien/42Lisboa-lvl_5_ft_containers/blob/main/extras/vectors/member_types.cpp)

## Useful Links:

[cplusplus.com](https://www.cplusplus.com)\
[cppreference.com](https://en.cppreference.com)


## Research:

<pre>
---------------------------------------------------------------------------------------------

std::vector:

    Vectors are sequence containers representing arrays that can change in size.
    But unlike arrays, their size can change dynamically, with their storage being handled
    automatically by the container.

    Internally, vectors use a dynamically allocated array to store their elements.
    This array may need to be reallocated in order to grow in size when new elements are inserted,
    which implies allocating a new array and moving all elements to it.
    This is a relatively expensive task in terms of processing time, and thus, vectors do not
    reallocate each time an element is added to the container.

    Instead, vector containers may allocate some extra storage to accommodate for possible growth,
    and thus the container may have an actual capacity greater than the storage strictly needed
    to contain its elements (i.e., its size).



                            template <class T, class Alloc = allocator<T>>
                            class vector {
                                // code
                            };


    Member Types:

#####
        ::value_type:
            The first template parameter (T).

            value_type is a part of a big family of things to define when you define containers.

            These, in addition to iterators typedefs, are all used by STL algorithms to deal
            with your container in an agnostic way, without knowing the type of your container.
            These are the reason why the same algorithm works on std::vector, std::deque and all
            other STL containers.


            template < class T, class Alloc = std::allocator<T> >
            class myVector {
                public:
                    typedef T   value_type;   // myVector::value_type = T
            };

                Example:

                    #include <iostream>
                    #include <typeinfo>

                    int main() {
                        std::vector<int>::value_type _value_type(0);
                        std::vector<double>::value_type _value_type2(0);

                        std::cout << typeid(_value_type).name() << std::endl;
                        std::cout << typeid(_value_type2).name() << std::endl;
                    }

                    Output: i (int)
                            d (double)

#####
        ::allocator_type:
            The second template parameter (Alloc).

            It defaults to: allocator<value_type>.
            You can call the class template "allocator" using the allocator_type.


            template < class T, class Alloc = std::allocator<T> >
            class myVector {
                public:
                    typedef Alloc  allocator_type;   // myVector::allocator_type =
                                                        Alloc "(std::allocator<T>)"
            };

                Example:

                    #include <iostream>

                    int main() {
                        std::cout << "Allocator Type: " << std::endl;

                        std::vector<int>::allocator_type _allocator_type;
                        std::vector<int>::value_type _value_type;

                        int *arr = _allocator_type.allocate(_value_type);
                        _allocator_type.construct(arr, 3);
                        _allocator_type.construct(arr + 1, 1);
                        _allocator_type.construct(arr + 2, 2);

                        std::cout << arr[0] << " " << arr[1] << " " << arr[2] << std::endl;

                        _allocator_type.destroy(arr);
                        _allocator_type.destroy(arr + 1);
                        _allocator_type.destroy(arr + 2);

                        _allocator_type.deallocate(arr, _value_type); // This free the memory.
                    }

                    Output: 3 1 2 (memory was free)

#####
        ::reference
            allocator_type::reference.

            It is a reference (&), meaning you don't have to deallocate to change the value.

                Example:

                    #include <iostream>

                    int main() {
                        std::cout << "Reference: " << std::endl;

                        std::vector<int>::value_type _value_type(3);
                        std::vector<int>::reference _reference(_value_type);

                        std::cout << "  reference = " << _reference << std::endl;
                        std::cout << "  value_type = " << _value_type << std::endl;
                        _reference = 5;
                        std::cout << "\n  changed reference using \"_reference = 5\" \n" << std::endl;
                        std::cout << "  reference = " << _reference << std::endl;
                        std::cout << "  value_type = " << _value_type << std::endl;

                        std::cout << std::endl;
                    }

                    Output:  Reference:
                               reference = 3
                               value_type = 3
                               changed reference using "_reference = 5"
                               reference = 5
                               value_type = 5

#####
        ::const_reference
            allocator_type::const_reference.

            It is same as ::reference but it is const. You cannot change it's value.

                Example:

                    #include <iostream>

                    int main() {
                        std::cout << "Const Reference: " << std::endl;

                        std::vector<int>::value_type _value_type(3);
                        std::vector<int>::const_reference _const_reference(_value_type);

                        std::cout << "  const reference = " << _const_reference << std::endl;
                        std::cout << "  value_type = " << _value_type << std::endl;
                        std::cout << "    can't change value because it's constant" << std::endl;

                        std::cout << std::endl;
                    }

                    Output:
                        Const Reference:
                          const reference = 3
                          value_type = 3
                            can't change value because it's constant


#####
        ::pointer
            allocator_type::pointer.

            It is a pointer (*), meaning you have to dereference the value.

                Example:

                    #include <iostream>

                    int main() {
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

                    Output: Pointer:
                              pointer = 0x7ffd44ba2c2c
                              *pointer = 3
                              value_type = 3
                                changed pointer using "*_pointer = 5"
                              pointer = 0x7ffd44ba2c2c
                              *pointer = 5
                              value_type = 5


#####
        ::const_pointer
            allocator_type::const_pointer.

            It is same as ::pointer but it is const. You cannot change it's value.

                Example:

                    #include <iostream>

                    int main() {
                        std::cout << "Const Pointer: " << std::endl;

                        std::vector<int>::value_type _value_type(3);
                        std::vector<int>::const_pointer const_pointer(&_value_type);

                        std::cout << "  const_pointer = " << const_pointer << std::endl;
                        std::cout << "  *const_pointer = " << *const_pointer << std::endl;
                        std::cout << "  value_type = " << _value_type << std::endl;

                        std::cout << std::endl;
                    }

                    Output:  Const Pointer:
                               const_pointer = 0x7ffd44ba2c2c
                               *const_pointer = 3
                               value_type = 3


#####
        ::difference_type
            A signed integral type, usually the same as ptrdiff_t.

            ptrdiff_t type is a base signed integer type of C/C++ language. The type’s
            size is chosen so that it could store the maximum size of a theoretically
            possible array.
            ptrdiff_t type is usually used for loop counters, array indexing,
            size storage and address arithmetic.

                Example:
                    #include <iostream>

                    int main() {
                        std::cout << "Difference Type: " << std::endl;

                        std::vector<char>::difference_type _difference_type;

                        _difference_type = 2;
                        std::cout << "  difference_type = " << _difference_type << std::endl;
                        _difference_type = -2;
                        std::cout << "  difference_type = " << _difference_type << std::endl;

                        std::cout << std::endl;
                    }

                    Output:    Difference Type:
                                 difference_type = 2
                                 difference_type = -2


#####
        ::size_type
            An unsigned integral type that can represent any non-negative value,
            usually the same as size_t.

            size_t type is a base unsigned integer type of C/C++ language. It is the result
            of sizeof operator’s execution. The type’s size is chosen so that it could store
            the maximum size of a theoretically possible array.

            On a 32-bit system size_t will take 32 bits, on a 64-bit one 64 bits.
            In other words, a variable of size_t type can safely store a pointer.
            The exception is pointers to class functions but this is a special case.

            size_t type is usually used for loop counters, array indexing and address arithmetic.

                Example:
                    #include <iostream>

                    int main() {
                        std::cout << "Size Type: " << std::endl;

                        std::vector<char>::size_type _size_type;

                        _size_type = 2;
                        std::cout << "  size_type = " << _size_type << std::endl;
                        _size_type = -2;
                        std::cout << "  size_type = " << _size_type << std::endl;

                        std::cout << std::endl;
                    }

                    Output:    Size Type:
                                 size_type = 2
                                 size_type = 18446744073709551614

---------------------------------------------------------------------------------------------
</pre>
