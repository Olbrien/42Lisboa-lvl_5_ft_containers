#include "main.hpp"

void    myVector_MemberTypes() {
     // ********** //
    // Value Type //
    {
        std::cout << "Value Type: " << std::endl;

        ft::vector<int>::value_type _value_type(5);
        ft::vector<double>::value_type _value_type2(5);

        std::cout << "  <int> type = " << typeid(_value_type).name() << std::endl;
        std::cout << "  <double> type = " << typeid(_value_type2).name() << std::endl;

        std::cout << std::endl;
    }

     // ************** //
    // Allocator Type //
    {
        std::cout << "Allocator Type: " << std::endl;

        ft::vector<int>::allocator_type _allocator_type;

        int *arr = _allocator_type.allocate(3);
        _allocator_type.construct(arr, 3);
        _allocator_type.construct(arr + 1, 1);
        _allocator_type.construct(arr + 2, 2);

        std::cout << "  allocated = {" << arr[0] << " " << arr[1] << " " << arr[2] << "}" << std::endl;

        _allocator_type.destroy(arr);
        _allocator_type.destroy(arr + 1);
        _allocator_type.destroy(arr + 2);

        _allocator_type.deallocate(arr, 2);

        std::cout << std::endl;
    }

     // ********* //
    // Reference //
    {
        std::cout << "Reference: " << std::endl;

        ft::vector<int>::value_type _value_type(3);
        ft::vector<int>::reference _reference(_value_type);

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

        ft::vector<int>::value_type _value_type(3);
        ft::vector<int>::const_reference _const_reference(_value_type);

        std::cout << "  const reference = " << _const_reference << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;
        std::cout << "    can't change value because it's constant" << std::endl;

        std::cout << std::endl;
    }

     // ******* //
    // Pointer //
    {
        std::cout << "Pointer: " << std::endl;

        ft::vector<int>::value_type _value_type(3);
        ft::vector<int>::pointer _pointer(&_value_type);

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

        ft::vector<int>::value_type _value_type(3);
        ft::vector<int>::const_pointer const_pointer(&_value_type);

        std::cout << "  const_pointer = " << const_pointer << std::endl;
        std::cout << "  *const_pointer = " << *const_pointer << std::endl;
        std::cout << "  value_type = " << _value_type << std::endl;

        std::cout << std::endl;
    }

     // *************** //
    // Difference Type //
    {
        std::cout << "Difference Type: " << std::endl;

        ft::vector<char>::difference_type _difference_type;

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

        ft::vector<char>::size_type _size_type;

        _size_type = 2;
        std::cout << "  size_type = " << _size_type << std::endl;
        _size_type = -2;
        std::cout << "  size_type = " << _size_type << std::endl;

        std::cout << std::endl;
    }

     // ******** //
    // Iterator //
    {
        std::cout << "Iterator: " << std::endl;

        ft::vector<int> vectorA;
        ft::vector<int> vectorB;

        for (int i = 0; i < 40; i += 5) {
            vectorA.push_back(i);
        }
        for (int i = 45; i < 80; i += 5) {
            vectorB.push_back(i);
        }
        ft::vector<int>::iterator itA = vectorA.begin();
        ft::vector<int>::iterator itB = vectorB.begin();

        std::cout << "  itA = " << *itA << std::endl;
        std::cout << "  itB = " << *itB << std::endl;

        std::cout << std::endl;


        // Default Constructor //
        std::cout << "  Default Constructor:" << std::endl;

        ft::vector<int>::iterator itDefault;
        std::cout << "    ::iterator itDefault -> " << "built" << std::endl;
        std::cout << std::endl;


        // Copy Constructor //
        std::cout << "  Copy Constructor:" << std::endl;

        ft::vector<int>::iterator itCopyConstructor(itA);
        std::cout << "    ::iterator itCopyConstructor(itA) -> " << *itCopyConstructor << std::endl;
        std::cout << "    itA = " << *itA << std::endl;
        std::cout << std::endl;

        // Copy Assigment //
        std::cout << "  Copy Assigment:" << std::endl;

        ft::vector<int>::iterator itCopyAssigment = itA;
        std::cout << "    ::iterator itCopyAssigment = itA -> " << *itCopyAssigment << std::endl;
        std::cout << "    itA = " << *itA << std::endl;
        std::cout << std::endl;

        // Equality and Inequality Operators //
        std::cout << "  Equality and Inequality Operators:" << std::endl;

        std::cout << "    itA = " << *itA << std::endl;
        std::cout << "    itB = " << *itB << std::endl;

        ft::vector<int>::iterator itC = itA;
        std::cout << "    itC(itA) = 1" << std::endl;

        std::cout << std::endl;

        if (itA == itB) {
            std::cout << "  itA == itB -> true" << std::endl;
        }
        if (itA != itB) {
            std::cout << "    itA != itB -> true" << std::endl;
        }
        if (itC == itA) {
            std::cout << "    itC == itA -> true" << std::endl;
        }

        std::cout << std::endl;
    }
}

void    myVector_MemberFunctions_Base() {
     // *********** //
    // Constructor //
    {
        // Default Constructor

        std::cout << "\n\nConstructors: \n" << std::endl;
        std::cout << "Default Constructor: " << std::endl;

        ft::vector<int> vectorA;
        ft::vector<int> vectorB;

        std::cout << "  vectorA.size() = " << vectorA.size() << std::endl;
        std::cout << "  vectorA.capacity() = " << vectorA.capacity() << std::endl;

        std::cout << std::endl;


        // Fill Constructor

        std::cout << "  Fill Constructor: " << std::endl;

        ft::vector<int> vectorC(5, 10);
        std::cout << "    vectorC(5, 10) = [ " ;

        ft::vector<int>::iterator itC;
        itC = vectorC.begin();

        for (ft::vector<int>::iterator itC = vectorC.begin(); itC != vectorC.end(); itC++) {
            std::cout << *itC << " ";
        }
        std::cout << "]" << std::endl;
        std::cout << std::endl;

        std::cout << "    vectorC.size() = " << vectorC.size() << std::endl;
        std::cout << "    vectorC.capacity() = " << vectorC.capacity() << std::endl;
        std::cout << std::endl;
    }

     // ******** //
    // Capacity //
    {
        // Max Size
        {
            std::cout << "  Max Size: " << std::endl;
            ft::vector<int> vectorA(5, 5);
            std::cout << "    vectorA.max_size() = " << vectorA.max_size() << std::endl;

            std::cout << std::endl;
        }

        // Reserve
        {
            std::cout << "  Reserve: " << std::endl;

            ft::vector<int> vectorA(5, 5);
            std::cout << "    ft::vector<int> vectorA(5, 5) = [ ";
            for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {
                std::cout << *itA << " ";
            }
            std::cout << "]" << std::endl;

            std::cout << "    vectorA.capacity() = " << vectorA.capacity() << std::endl;
            std::cout << std::endl;

            vectorA.reserve(10);
            std::cout << "    vectorA.reserve(10) = " << vectorA.capacity();
            std::cout << "   [ ";
            for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {
                std::cout << *itA << " ";
            }
            std::cout << "]" << std::endl;

            vectorA.reserve(2);
            std::cout << "    vectorA.reserve(2) = " << vectorA.capacity() << std::endl;
            std::cout << "    vectorA.reserve(vectorA.max_size() + 1) = ";

            try {
                vectorA.reserve(vectorA.max_size() + 1);
            }
            catch (std::length_error & e) {
                std::cout << "Length Error " << e.what() << std::endl;
            }
        }
    }

     // ********* //
    // Modifiers //
    {
        std::cout << "  Push Back: " << std::endl;

        ft::vector<int> vectorA(2, 2);
        std::cout << "    vectorA(2, 2) = [ ";
        for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {
            std::cout << *itA << " ";
        }
        std::cout << "]" << std::endl;

        std::cout << "    vectorA.size() = " << vectorA.size() << std::endl;
        std::cout << "    vectorA.capacity() = " << vectorA.capacity() << std::endl;

        std::cout << std::endl;

        vectorA.push_back(5);
        std::cout << "    vectorA.push_back(5) = [ ";
        for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {
            std::cout << *itA << " ";
        }
        std::cout << "]" << std::endl;

        std::cout << "    vectorA.size() = " << vectorA.size() << std::endl;
        std::cout << "    vectorA.capacity() = " << vectorA.capacity() << std::endl;

        std::cout << std::endl;

        vectorA.push_back(5);
        std::cout << "    vectorA.push_back(5) = [ ";
        for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {
            std::cout << *itA << " ";
        }
        std::cout << "]" << std::endl;

        std::cout << std::endl;

        std::cout << "    vectorA.size() = " << vectorA.size() << std::endl;
        std::cout << "    vectorA.capacity() = " << vectorA.capacity() << std::endl;

        std::cout << std::endl;

        vectorA.push_back(5);
        std::cout << "    vectorA.push_back(5) = [ ";
        for (ft::vector<int>::iterator itA = vectorA.begin(); itA != vectorA.end(); itA++) {
            std::cout << *itA << " ";
        }
        std::cout << "]" << std::endl;

        std::cout << "    vectorA.size() = " << vectorA.size() << std::endl;
        std::cout << "    vectorA.capacity() = " << vectorA.capacity() << std::endl;

        std::cout << std::endl;
    }
}
