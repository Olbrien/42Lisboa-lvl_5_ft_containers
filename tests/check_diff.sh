#!/usr/bin/bash
# Run with bash not sh

RED='\033[0;31m'
NC='\033[0m' # No Color
GREEN='\033[0;32m'
ORANGE='\033[0;33m'
YELLO='\033[1;33m'
LGREEN='\033[1;32m'
LBLUE='\033[1;34m'
LPURPLE='\033[1;35m'
WHITE='\033[1;37m'

arguments=(
"value_type"
"allocator_type"
"reference"
"const_reference"
"pointer"
"const_pointer"
"difference_type"
"size_type"
"Default Member Functions"
"Relational Operators"
"Dereferences"
"Increment and Decrement Operators"
"Arithmetic Operators"
"Assigment Operators"
"Default Member Functions"
"Relational Operators"
"Dereferences"
"Increment and Decrement Operators"
"Arithmetic Operators"
"Assigment Operators"
"Iterator With Const Iterator"
"Default Member Functions"
"Relational Operators"
"Dereferences"
"Increment and Decrement Operators"
"Arithmetic Operators"
"Assigment Operators"
"base"
"Default Member Functions"
"Relational Operators"
"Dereferences"
"Increment and Decrement Operators"
"Arithmetic Operators"
"Assigment Operators"
"base"
"Reverse It With Const Reverse It"
"default constructor"
"fill constructor"
"range constructor"
"copy constructor"
"destructor"
"operator"
"begin"
"end"
"rbegin"
"rend"
"size"
"max_size"
"resize"
"capacity"
"empty"
"reserve"
"operator[]"
"at"
"front"
"back"
"range"
"fill"
"push_back"
"pop_back"
"single element"
"fill"
"range"
"position"
"range"
"swap"
"clear"
"get_allocator"
"relational operators"
"swap"
"key_type"
"mapped_type"
"value_type"
"allocator_type"
"reference"
"const_reference"
"pointer"
"const_pointer"
"difference_type"
"size_type"
"Default Member Functions"
"Relational Operators"
"Dereferences"
"Increment and Decrement Operators"
"Default Member Functions"
"Relational Operators"
"Dereferences"
"Increment and Decrement Operators"
"Iterator With Const Iterator"
"Default Member Functions"
"Relational Operators"
"Dereferences"
"Increment and Decrement Operators"
"Default Member Functions"
"Relational Operators"
"Dereferences"
"Increment and Decrement Operators"
"Reverse It With Const Reverse It"
"empty constructor"
"range constructor"
"copy constructor"
"destructor"
"operator"
"begin"
"end"
"rbegin"
"rend"
"empty"
"size"
"max_size"
"operator[]"
"single element"
"with hint"
"range"
"erase position"
"erase key"
"erase range"
"swap"
"clear"
"key_comp"
"value_comp"
"find"
"count"
"lower_bound"
"upper_bound"
"equal_range"
"get_allocator"
"iterator_traits"
"enable_if"
"is_integral"
"equal"
"lexicographical_compare"
"pair"
"make_pair"
"test_anything"
)

cd ../ft_containers

if [ $# -eq 0 ]
  then
    echo "Please insert argument. \"normal\" or \"sanitize\""
	exit 1
fi

if [ $1 == "normal" ]
  then
    make -f Makefile
elif [ $1 == "sanitize" ]
  then
    make f -f Makefile
else
	echo "Please insert argument. \"normal\" or \"sanitize\""
	exit 1
fi

i=-1
while [ $i -ne 69 ]
do
        i=$(($i+1))

		if [ "$i" == '4' ] || [ "$i" == '5' ] || [ "$i" == '53' ];
		  then  # These have to be checked manually because of throws and addresses
		    continue
		fi

        ./ft_container "$i" > ../tests/ft.txt
        ./std_container "$i" > ../tests/std.txt

		if cmp -s "../tests/ft.txt" "../tests/std.txt"; then
			printf "${WHITE} Vector ${LPURPLE}diff test argument  ✅ ${LGREEN}	[ ${arguments[$i]} ] ${YELLO} %i ${NC}\n" $i
		else
			printf "${WHITE} Vector ${LPURPLE}diff test argument${LGREEN} -> [ ${arguments[$i]} ] ${YELLO} %i ${NC} ❌\n" $i
			exit 1
		fi
done

while [ $i -ne 125 ]
do
        i=$(($i+1))

        ./ft_container "$i" > ../tests/ft.txt
        ./std_container "$i" > ../tests/std.txt

		if cmp -s "../tests/ft.txt" "../tests/std.txt"; then
			printf "${WHITE} Map ${LPURPLE}diff test argument  ✅ ${LGREEN}	[ ${arguments[$i]} ] ${YELLO} %i ${NC}\n" $i
		else
			printf "${WHITE} Map ${LPURPLE}diff test argument${LGREEN} -> [ ${arguments[$i]} ] ${YELLO} %i ${NC} ❌\n" $i
			exit 1
		fi
done

cd ../tests
rm "ft.txt"
rm "std.txt"
