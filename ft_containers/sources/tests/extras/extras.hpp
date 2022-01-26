#ifndef EXTRAS_HPP
# define EXTRAS_HPP

#include <iostream>
#include "../../../includes/type_traits.hpp"

namespace testExtras {

//////////////////////
/* global variables */

enum color { red, green, blue };
color r = red;
std::string str = "String is a class";
int i = 5;

/***************************************/
/* testExtras::extras__enable_if tests */

// https://stackoverflow.com/questions/25549327/implementation-of-stdis-class //

// type_trait

template<typename T>
struct is_class : public integral_constant<bool, __is_class(T)>
{};

template<typename T>
struct is_enum : public integral_constant<bool, __is_enum(T)>
{};

// functions

template <class T>
void isClass (T,
			 typename enable_if<!is_class<T>::value>::type* = 0) {
    std::cout << "False" << std::endl;
}

template <class T>
void isClass (const T&,
			 typename enable_if<is_class<T>::value>::type* = 0) {
    std::cout << "True" << std::endl;
}

template <class T>
void isEnum (T,
			 typename enable_if<!is_enum<T>::value>::type* = 0) {
    std::cout << "False" << std::endl;
}

template <class T>
void isEnum (const T&,
			 typename enable_if<is_enum<T>::value>::type* = 0) {
    std::cout << "True" << std::endl;
}

}

#endif
