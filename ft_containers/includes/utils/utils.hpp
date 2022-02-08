#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include <sstream>

template <typename T>
std::string to_string(T n) {
		std::ostringstream ostr;
		ostr << n;
		return ostr.str();
}

#endif
