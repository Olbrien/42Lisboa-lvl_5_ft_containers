![GitHub Logo](/extras/images/Success.png)

###### <i>Recent Update on 13/04/2022.</i>
• Finished the project.

###### <i>Old Update on 01/04/2022.</i>
• Re-started the project.

###### <i>Old Update on 01/03/2022.</i>
• Stopped the project to do webserv.

###### <i>Old Update on 22/12/2021.</i>
• Started the project.

## Subject:

You can find the subject of this project [here.](https://github.com/Olbrien/42Lisboa-lvl_5_ft_containers/blob/main/extras/lvl_5_ft_containers.pdf)

![](/extras/images/gif2.gif)
![](/extras/images/gif1.gif)

## How to run:

First download the repository.

On ft_containers folder type "make" to compile the project. \
You'll get two binaries:
- ft_container
- std_container

The ft_container contain the tests for my own implementations.
The std_container contains the same tests but using the original Standard Template Library.

You can run these tests simultaneous side by side using your terminal. One running ./std_container the other using ./ft_container.

It has 145 own made tests for everything of Vectors, Map and Stack. Plus extra tests for own made iterators, const iterators, reverse iterators, const reverse iterators, iterator_traits, enable_if, is_integral, equal, lexicographical_compare, pair, make_pair, balanced binary search tree.

Also I have a tester that runs all 145 tests side by side checks it's diffs and it also fsanitize.

## Tester:

To run the tester it's on tests folders. \
Checks for diffs on the 145 tests and it also fsanitizes. \
It also shows Try and Catches.

`bash ./check_diff.sh normal` \
`bash ./check_diff.sh sanitize`

![](/extras/images/gif3.gif)

## Useful Links:

[cplusplus.com](https://www.cplusplus.com)\
[cppreference.com](https://en.cppreference.com)\
[binary search tree](https://medium.com/swlh/binary-search-trees-c-484377f0d349)



## Research:

<code>
Value categories:

    lvalues and rvalues:

        https://www.internalpointers.com/post/understanding-meaning-lvalues-and-rvalues-c

        An lvalue is something that points to a specific memory location.
        An rvalue is something that doesn't point anywhere.

        In general, rvalues are temporary and short lived, while lvalues live a longer life
        since they exist as variables.

        It's also fun to think of lvalues as containers and rvalues as things contained in the
        containers. Without a container, they would expire.

            Example 1:
                int x = 42;    // OK!

                    x is a variable. A variable has a specific memory location.
                    x is an lvalue.

                    It has no specific memory address.
                    42 is an rvalue.


            Example 2:
                int y;
                42 = y;     // NOT OK!

                    It does not work because the left assignment should have an lvalue, but 42
                    is an rvalue.

                    42 does not have a specific memory location, you're assigning y to no where.

                        error: lvalue required as left operand of assignment


            Example 3:
                int *y = &42;   // NOT OK!

                    The & operator wants an lvalue in input, because only an lvalue has an address
                    that & can process.

                        error: lvalue required as unary '&' operand`


        With functions:

            Example 1:
                int setValue() {
                    return 6;
                }

                int main() {
                    setValue() = 3; //  NOT OK!
                }

                    setValue() returns an rvalue (the temporary number 6), which cannot be
                    a left operand of assignment.


            Example 2:
                int global = 100;

                int& setGlobal() {
                    return global;
                }
                int main() {
                    setGlobal() = 400; // OK
                }

                    It works because here setGlobal returns a reference, unlike setValue()
                    above. A reference is something that points to an existing memory location
                    (the global variable) thus is an lvalue, so it can be assigned to.
                    Watch out for & here: it's not the address-of operator, it defines the type
                    of what's returned (a reference).



        Lvalue to rvalue conversion:

            An lvalue may get converted to an rvalue: that's something perfectly legit and it
            happens quite often. Let's think of the addition + operator for example.
            According to the C++ specifications, it takes two rvalues as arguments and
            returns an rvalue.

            Let's look at the following snippet:

                int x = 1;
                int y = 3;
                int z = x + y;   // OK

            Wait a minute: x and y are lvalues, but the addition operator wants rvalues: how come?
            The answer is quite simple: x and y have undergone an implicit lvalue-to-rvalue
            conversion. Many other operators perform such conversion — subtraction, addition
            and division to name a few.


        Lvalue references:

            What about the opposite? Can an rvalue be converted to lvalue? Nope. It's not a
            technical limitation, though: it's the programming language that has been designed
            that way.

                int y = 10;
                int& yref = y;  // OK
                yref++;        // y is now 11

            You are declarying yref as of type int&: a reference to y. It's called an lvalue
            reference. Now you can happily change the value of y through its reference yref.

            We know that a reference must point to an existing object in a specific memory
            location, i.e. an lvalue. Here y indeed exists, so the code runs flawlessly.

            But this:

                int& yref = 10;  // NOT OKAY

            Won't work.
            On the right side we have a temporary thing, an rvalue that needs to be stored
            somewhere in an lvalue.
            On the left side we have the reference (an lvalue) that should point to an
            existing object. But being 10 a numeric constant, i.e. without a specific memory
            address, i.e. an rvalue, the expression clashes with the very spirit of the reference.


        Const lvalue reference to the rescue:

            According to the language specifications, you are allowed to bind a const lvalue
            to an rvalue. So the following snippet works like a charm:

                const int& ref = 10;  // OK

            The literal constant 10 is volatile and would expire in no time, so a reference
            to it is just meaningless. Let's make the reference itself a constant instead,
            so that the value it points to can't be modified. Now the problem of modifying
            an rvalue is solved for good.

            Under the hood the compiler creates an hidden variable for you (i.e. an lvalue)
            where to store the original literal constant, and then bounds that hidden variable
            to your reference.

                // THIS IS THE SAME AS BELOW
                    const int& ref = 10;

                // THIS IS WHAT THE COMPILER DOES INTERNALLY ABOVE
                    int __internal_unique_name = 10;
                    const int& ref = __internal_unique_name;

---------------------------------------------------------------------------------------------

Templates:

    A template is a simple and yet very powerful tool in C++.
    The simple idea is to pass data type as a parameter so that we don’t need to write the
    same code for different data types.

    For example, a software company may need sort() for different data types.
    Rather than writing and maintaining the multiple codes, we can write one sort()
    and pass data type as a parameter.

    C++ adds two new keywords to support templates: ‘template’ and ‘typename’.
    The second keyword can always be replaced by keyword ‘class’.


    How do templates work?

        Templates are expanded at compiler time. This is like macros.
        The difference is, the compiler does type checking before template expansion.
        The idea is simple, source code contains only function/class, but compiled code
        may contain multiple copies of same function/class.



Function Templates:

    The format for declaring function templates with type parameters is:

        template <class identifier> function_declaration;
        template <typename identifier> function_declaration;

    The only difference between both prototypes is the use of either the keyword class
    or the keyword typename. Its use is indistinct, since both expressions have exactly
    the same meaning and behave exactly the same way.


    Example 1 (Normal):

        #include <iostream>

        template <typename T>               // This case it could be used <class T>, same thing.
        T max(T x, T y) {
            return (x >= y ? x : y);
        }

        int main() {
            int a = 200;
            int b = 300;

            long c = 9000;
            long d = -2000;

            std::cout << max<int>(a, b) << std::endl;  // Explicit instanciation
            std::cout << max(c, d) << std::endl;       // Implicit instanciation
        }

        Explicit instanciation will be the norm to use, implicit should not be used that often.


    Example 2 (Multiple typenames):

        template <typename T, typename U>
        T min(T x, U y) {
            return (x < y ? x : y);
        }

        int main() {
            int a = 200;
            long d = -2000;

            std::cout << min<int, long>(a, d) << std::endl;
            std::cout << min(a, d) << std::endl;
        }


    Example 3 (Default Typename):

        template <typename T = float, typename U = int>
        void print(T x, U y) {
            std::cout << x << std::endl;
            std::cout << y << std::endl;
        }

        int main() {
            print<>(125.55, 55.55);
            print<float, float>(125.55, 55.55);
        }



Class Templates:

    Like function templates, class templates are useful when a class defines something
    that is independent of the data type. Can be useful for classes like LinkedList,
    BinaryTree, Stack, Queue, Array, etc.


    Example 1:

        #include <iostream>

        template <class T>
        class Array {
            public:
                Array(T arr[], int s);
                void print();

            private:
                T       *ptr;
                int     size;
        };

        template <class T>
        Array<T>::Array(T arr[], int s) {
            ptr = new T[s];
            size = s;
            for(int i = 0; i < size; i++)
                ptr[i] = arr[i];
        }

        template <typename T>
        void Array<T>::print() {
            for (int i = 0; i < size; i++)
                std::cout<<" "<<*(ptr + i);
            std::cout<<std::endl;
        }

        int main() {
            int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
            Array<int> a(arr, 9);
            a.print();
            return 0;
        }



Templates Specialization:

    Imagine you want to build a template to handle only numbers, but you pass a Character.
    You want to deal the Strings and Characters in a different way you do if you passed
    numbers.
    This is what template specializations are for.


    Example 1 (Classes):

        #include <iostream>

        template <typename T>
        class Base {
            public:
                Base(T x) {
                    std::cout << x << " is not a character!" << std::endl;
                }
        };

        template <>
        class Base<char> {
            public:
                Base(char x) {
                    std::cout << x << " is a character!" << std::endl;
                }
        };

        int main() {
            Base<int> a(25);
            Base<float> b(99.5);
            Base<char> c('x');
        }

        Output:
                25 is not a character!
                99.5 is not a character!
                x is a character!



    Example 2 (Functions):

        #include <iostream>

        template <typename T>
        void print() {
            std::cout << "this is not a string!" << std::endl;
        }

        template <>
        void print<std::string>() {
            std::cout << "this is a string!" << std::endl;
        }

        int main() {
            print<float>();
            print<std::string>();
        }

        Output:
            this is not a string!
            this is a string!


---------------------------------------------------------------------------------------------

Allocator:

    Allocators are objects responsible for encapsulating memory management. std::allocator
    is used when you want to separate allocation and do construction in two steps. It is
    also used when separate destruction and deallocation is done in two steps.

        Example:

            // ****************** //
            // Standard Allocator //

            std::cout << "Standard Allocator: " << std::endl;

            std::allocator<int> myAllocator;

            int *arr = myAllocator.allocate(3);
            myAllocator.construct(arr, 5);
            myAllocator.construct(arr + 1, 2);
            myAllocator.construct(arr + 2, 3);

            std::cout << arr[0] << " " << arr[1] << " " << arr[2] << std::endl;
            std::cout << std::endl;


    All the STL containers in C++ have a type parameter Allocator that is by default
    std::allocator. The default allocator simply uses the operators new and delete to obtain
    and release memory.

        Example:

            template <typename _Tp, typename _Alloc = std::allocator<_Tp> >
            class vector {
                // code
            };


    You are using the std::allocator as default when creating a container unless you want to use
    another one.

        Example:

            std::vector<int> myVector(2);                          // Same as
            std::vector<int, std::allocator<int>> myVector(2);     // This


        This means, when you do "myVector(2)" it's allocating 2 spaces using std::allocator
        in it's constructor.


---------------------------------------------------------------------------------------------

SFINAE:

    Substitution Failure Is Not An Error.
    S            F       I  N   A  E.

    When substituting the explicitly specified or deduced type for the template parameter
    fails, the specialization is discarded from the overload set instead of causing a
    compile error.


    How SFINAE works:

            #include <iostream>

            long multiply(int i, int j) { return i * j; }

            template <class T>
            typename T::multiplication_result multiply(T t1, T t2)
            {
                return t1 * t2;
            }
            int main(void)
            {
                std::cout << multiply(4,5) << std::endl;
            }

        This works, because multiply will try to do the template functions, see it doesn't fit,
        and move to the other multiply function (the first one).

        If you remove the first function, it will give an error instead. Because the template
        multiply doesn't work.



Enable If (std::enable_if):

    The type T is enabled as member type enable_if::type if Cond is true.
    Otherwise, enable_if::type is not defined.


    It can be defined in several ways, but these two are good enough.

        Example (Way 1):

            template <class T>
            typename std::enable_if<std::is_integral<T>::value>::type
            isInt (T) {
                std::cout << "It is an int!" << std::endl;
            }

            template <class T>
            typename std::enable_if<std::is_floating_point<T>::value>::type
            isInt (T) {
                std::cout << "Floating Point!" << std::endl;
            }


        Example (Way 2):

            void isClass (...) {
                std::cout << "Not a class!!" << std::endl;
            }

            template <class T, class = typename std::enable_if<std::is_class<T>::value>::type>
            void isClass (const T&) {
                std::cout << "It is a class!" << std::endl;
            }


    Can also used with conditions like "&&" and "||":

        void intSign(...) {
            std::cout << "Not Integral or Signed!!!" << std::endl;
        }

        template <class T, class = typename std::enable_if<std::is_integral<T>::value &&
                                                        std::is_signed<T>::value>::type>
        void intSign (T) {
            std::cout << "Integral and Signed!" << std::endl;
        }


    My own enable_if implementation:

        template<bool B, class T = void>
        struct enable_if {};

        template<class T>
        struct enable_if<true, T> { typedef T type; };

        void myIntSign(...) {
            std::cout << "Not Integral or Signed!!!" << std::endl;
        }

        template <class T, class = typename enable_if<std::is_integral<T>::value &&
                                                    std::is_signed<T>::value>::type>
        void myIntSign (T) {
            std::cout << "Integral and Signed!" << std::endl;
        }


---------------------------------------------------------------------------------------------

What is an Iterator?

    An iterator is any object that, pointing to some element in a range of
    elements (such as an array or a container), has the ability to iterate through
    the elements of that range using a set of operators (with at least the increment
    (++) and dereference (*) operators).

        Example:

            int main() {
                int array[] = {1, 4, 7, 11};

                int *pointer = array;
                std::cout << "array = " << *array << std::endl;
                std::cout << "pointer = " << *pointer << std::endl;

                pointer++;
                std::cout << "array = " << *array << std::endl;
                std::cout << "pointer = " << *pointer << std::endl;

                pointer++;
                *pointer = 1000;
                std::cout << "array[2] = " << array[2] << std::endl;
                std::cout << "pointer = " << *pointer << std::endl;
            }

            Output:  array = 1
                        pointer = 1
                        array = 1
                        pointer = 4
                        array[2] = 1000
                        pointer = 1000



    But other kinds of iterators are possible.
    For example, each container type (such as a list) has a specific iterator type designed
    to iterate through its elements.

    Notice that while a pointer is a form of iterator, not all iterators have the same
    functionality of pointers; Depending on the properties supported by iterators,
    they are classified into five different categories.


    Iterator categories:

	/--------------
	|
	|          Input Iterator:
	|              std::input_iterator_tag
	|
	|              Input iterators are iterators that can be used in sequential input operations,
	|              where each value pointed by the iterator is read only once and then the iterator
	|              is incremented.
	|
	|
	|          Output Iterator:
	|              std::output_iterator_tag
	|
	|              Output iterators are iterators that can be used in sequential output operations,
	|              where each element pointed by the iterator is written a value only once and then
	|              the iterator is incremented.
	|
	\-------------
		 .
	    / \     Forward Iterator:
	   /   \       std::forward_iterator_tag
	  /     \
	 /__| |__\       Forward iterators are iterators that can be used to access the sequence of
	    | |         elements in a range in the direction that goes from its beginning towards
	    | |         its end.
	    | |         Performing operations on a forward iterator that is dereferenceable never
	    | |         makes its iterator value non-dereferenceable. This enables algorithms that
	    | |         use this category of iterators to use multiple copies of an iterator to pass
	    | |         more than once by the same iterator values.
	    | |
	    | |
	    | |     Bidirectional Iterator:
	    | |         std::bidirectional_iterator_tag
	    | |
	    | |        Bidirectional iterators are iterators that can be used to access the sequence
	    | |        of elements in a range in both directions (towards the end and towards the
	    | |		   beginning).
	    | |
	    | |     Random Access Iterator:
	    | |        std::random_access_iterator_tag
	    | |
	    | |        Random-access iterators are iterators that can be used to access elements at an
	    | |        arbitrary offset position relative to the element they point to, offering the same
	    | |        functionality as pointers.
	    | |
	    | |         Random-access iterators are the most complete iterators in terms of functionality.
	    | |         All pointer types are also valid random-access iterators.
	    ---

	This arrow represents the hierarchy.
        .Random Access Iterator has everything the others have.
        .Bidirectional Iterator has everything the others have except what Random Access iterators have.
        .Forward Iterator has everything the others have except what Random Access iterators and
    Bidirectional Iterator have.

        Output and Input are on the same level. Output has the Output properties, Input has the
        Input properties.


    Graphic Representation:

        https://www.cplusplus.com/reference/iterator/

        The graphic there represents it much better than I could write it here.


Iterator Traits (iterator_traits):

    It returns basic information about an iterator.
    The traits of the iterator.

    The template can be specialized for user-defined iterators so that the information about
    the iterator can be retrieved even if the type does not provide the usual typedefs.

    In other words, you have your Random Access Iterator class, you want to make it work for
    const_iterator and iterator. With iterator_traits you only need to do one class instead
    of two seperate classes.

    iterator_traits :

        template <class Iterator>           <----- Generic, not called. Just for Template.
        class iterator_traits {
            public:
                typedef typename  Iterator::difference_type     difference_type;
                typedef typename  Iterator::value_type          value_type;
                typedef typename  Iterator::pointer             pointer;
                typedef typename  Iterator::reference           reference;
                typedef typename  Iterator::iterator_category   iterator_category;
        };

        template <class T>
        class iterator_traits<T*> {        <----- Is called for ::iterator
            public:
                typedef typename  std::ptrdiff_t                   difference_type;
                typedef T                                          value_type;
                typedef T*                                         pointer;
                typedef T&                                         reference;
                typedef typename std::random_access_iterator_tag   iterator_category;
        };

        template <class T>
        class iterator_traits<const T*> {    <----- Is called for ::const_iterator
            public:
                typedef typename  std::ptrdiff_t                   difference_type;
                typedef T                                          value_type;
                typedef const T*                                   pointer;
                typedef const T&                                   reference;
                typedef typename std::random_access_iterator_tag   iterator_category;
        };


    In sum imagine this situation:

            ft::vector<int>::iterator itA;

        What goes behind the scenes:

            vector.hpp:

                template < class T, class Alloc = std::allocator<T> >
                class vector {
                    public:
                        /****************/
                        /* Member Types */

                        // ...Code...
                        typedef typename allocator_type::pointer              pointer;
	Goes Here ------------> typedef typename ft::random_access_iterator<pointer>  iterator;

                        // ...Code...
                    private:
                        // ...Code...
                };

            iterator.hpp:

                template <class T>
                class random_access_iterator {
                    public:
                        /****************/
                        /* Member Types */

	Goes Here First ------> typedef std::iterator_traits<T>                   traits_type;

                        typedef typename traits_type::value_type          value_type;
                        typedef typename traits_type::difference_type     difference_type;
                        typedef typename traits_type::pointer             pointer;
                        typedef typename traits_type::reference           reference;
                        typedef typename traits_type::iterator_category   iterator_category;

                        // ...Code...
                    private:
                        // ...Code...
                };

            iterator_traits.hpp:

                iterator traits has 2 specializations, one for normal pointer, other for const.
                Iterator is not a const therefor it goes here and fills everything.

                template <class T>
                class iterator_traits<T*> {
                    public:
                        typedef typename  std::ptrdiff_t                   difference_type;
                        typedef T                                          value_type;
                        typedef T*                                         pointer;
                        typedef T&                                         reference;
                        typedef typename std::random_access_iterator_tag   iterator_category;
                };


	Goes Back ----> iterator.hpp:

                template <class T>
                class random_access_iterator {
                    public:
                        /****************/
                        /* Member Types */

                       		typedef std::iterator_traits<T>                     traits_type;

	It fills these ------>  typedef typename traits_type::value_type          value_type;
	with the non const -->  typedef typename traits_type::difference_type     difference_type;
	definitions it got -->  typedef typename traits_type::pointer             pointer;
	from the traits ----->  typedef typename traits_type::reference           reference;
                        	typedef typename traits_type::iterator_category   iterator_category;

                        // ...Code...
                    private:
                        // ...Code...
                };


        This way it knows that the Pointer and Reference are non const. If it were const,
        then it would go to the other specialization that is a const, and it would retrieved
        and fill the pointer / reference as consts.

---------------------------------------------------------------------------------------------

Binary Tree:

    It's an abstract data type.
    A way to organize data.
    Binary trees are hierarchical data structures.

    Binary Trees are not linear (one doesn't come after another like Linked Lists).
    Binary Trees are non linear.

    It's also called a Binary Tree because it has at most 2 children, if it had 3 or more
    children it is not a Binary Tree

                                    (1)    <-- Root
              Branch / Edge -->   /     \
                                /         \
                              (2)         (3)  <-- Child (of 1)
                              /          /        Parent (of 5)
                             /          /
                           (4)         (5)  <-- Leaf (Leaves have no child)


        level 0 --->                (1)                     /.\
                                  /     \                    |
                                /         \                  |
        level 1 --->          (2)         (3)                |  Height (It's 3)
                              / \         / \                |
                             /   \       /   \               |
        level 2 --->       (4) (NULL)  (5) (NULL)            |

    l = level
    h = height
    n = number of nodes

    Leaves have no child meaning:

                                    (1)
                                  /     \
                                /         \
                              (2)         (3)
                                         /   \
                                        /     \
                                       (5)    (4)     Leaves are (2), (5) and (4).
                                                      This binary tree has 3 leaves.

    (1), (2), (4), (3), (5) are called Nodes.
    Each node has 3 things:
        - key
        - pointer to left node
        - pointer to right node



Properties of Binary Tree:

        1) The maximum number of nodes at level ‘l’ of a binary tree is 2^l.

            At level 0 = 2^0   (which is 1)
            At level 1 = 2^1   (which is 2)
            At level 2 = 2^2   (which is 4)
            At level 3 = 2^3   (which is 8)


                                        (1)             <---- Level 0
                                      /     \
                                   /           \
                                (2)            (3)       <---- Level 1
                               /  \            /  \
                             /     \          /     \
                          (4)     (7)       (5)      (13)   <---- Level 2
                         / \      / \       / \      /  \
                        /   \    /   \     /   \    /    \
                      (6)   (5) (8) (10) (11) (12) (14)  (15)  <---- Level 3


        2) The Maximum number of nodes in a binary tree of height ‘h’ is 2^(h) - 1.

            With height of 1 = 2^(1) - 1   (which is 1)
            With height of 2 = 2^(2) - 1   (which is 3)
            With height of 2 = 2^(3) - 1   (which is 7)
            With height of 2 = 2^(4) - 1   (which is 15)
	 .
	/.\                                  (1)             <---- 1 Node
	 |                                 /     \
	 |                              /           \
	 |                           (2)            (3)       <---- 2 Nodes
	 |  Height 4                /  \            /  \
	 |                        /     \          /     \
	 |                     (4)     (7)       (5)      (13)   <---- 4 Nodes
	 |                    / \      / \       / \      /  \
	 |                   /   \    /   \     /   \    /    \
	 |                 (6)   (5) (8) (10) (11) (12) (14)  (15)  <---- 8 Nodes

                                                             Total of 15 Nodes with
                                                             height of 4


        3) In a Binary Tree with N nodes, minimum possible height or the minimum
        number of levels is? Log2(N+1)

        If we want 7 nodes = Log2(7+1) ~= 2

                                        (1)                         /.\
                                      /     \                        |
                                   /           \                     |
                                (2)            (3)                   | Height 2
                               /  \            /  \                  |
                             /     \          /     \                |
                          (4)     (5)       (6)      (7)             |


        4) A binary tree with ‘L’ leaves has at least log2L+1 number of levels

        5) In Binary tree where every node has 0 or 2 children, the number of leaf
        nodes is always one more than nodes with two children.


Types of Binary Tree:

        1) Perfect Binary Tree

                                         (1)
                                        /   \
                                      /       \
                                   (2)         (3)
                                  /  \         /  \
                                 /    \       /    \
                               (4)    (5)   (6)    (7)

            It has the leaves on the same level.
            All iternal nodes have 2 children.

        2) Complete Binary Tree

                                         (1)
                                        /   \
                                      /       \
                                   (2)         (3)
                                  /  \         /
                                 /    \       /
                               (4)    (5)   (6)

            All the levels are completely filled except possibly the last level and
            the last level has all keys as left as possible.

                Wrong case:
                                         (1)
                                        /   \
                                      /       \
                                   (2)         (3)          This is not a Complete Binary Tree
                                  /  \            \         because (3), has right filled, and
                                 /    \            \        not left
                               (4)    (5)          (7)

        3) Full Binary Tree

                                         (1)
                                        /   \
                                      /       \
                                   (2)         (3)
                                  /  \         /  \
                                 /    \       /    \
                               (4)    (5)   (6)    (7)

            Or:

                                     (1)
                                   /     \
                                 /         \
                               (2)         (3)
                              /   \
                            /      \
                          (4)      (7)
                         /  \      /  \
                       /     \    /    \
                     (6)    (5)  (8)  (10)

            Binary Tree is a full binary tree if every node has 0 or 2 children.

        4) Degenerate (or pathological) Binary Tree

                                     (1)
                                     /
                                    /
                                  (2)
                                   \
                                    \
                                    (7)
                                      \
                                       \
                                      (10)

            A Tree where every internal node has one child.

        5) Balanced Binary Tree

            A binary tree is balanced if the height of the tree is O(Log n) where
            n is the number of nodes. For Example, the AVL tree maintains O(Log n)
            height by making sure that the difference between the heights of the left
            and right subtrees is at most 1. Red-Black trees maintain O(Log n) height
            by making sure that the number of Black nodes on every root to leaf paths
            is the same and there are no adjacent red nodes.


Enumeration of Binary Trees:

    A Binary Tree is labeled if every node is assigned a label and a Binary Tree is
    unlabelled if nodes are not assigned any label.

    Unlabelled:

                              o                 o
                            /   \             /   \
                           o     o           o     o

    Labeled:

                              A                C
                            /   \             /  \
                           B     C           A    B


    How many different Unlabelled Binary Trees can be there with n nodes?

        For n  = 1, there is only one tree

                                    o

        For n  = 2, there are two trees

                                 o            o
                                /              \
                               o                o

        For n  = 3, there are five trees

                    o           o             o              o               o
                   /             \           /  \           /                 \
                  o               o         o    o         o                  o
                 /                 \                        \                /
                o                   o                        o              o


    For example, let T(n) be count for n nodes.
    T(0) = 1  [There is only 1 empty tree]
    T(1) = 1
    T(2) = 2
    T(3) =  T(0)*T(2) + T(1)*T(1) + T(2)*T(0) = 1*2 + 1*1 + 2*1 = 5
    T(4) =  T(0)*T(3) + T(1)*T(2) + T(2)*T(1) + T(3)*T(0)
         =  1*5 + 1*2 + 2*1 + 5*1
         =  14

    The above pattern basically represents n’th Catalan Numbers. First few Catalan
    numbers are 1 1 2 5 14 42 132 429 1430 4862,…


Code for a simple binary tree:

        #include <iostream>

        /**********/
        /*  Node  */

        struct node {
            int               key;
            struct node       *left_child;
            struct node       *right_child;
        };

        /********************/
        /* Helper Functions */

        node        *createNode(int key) {
            struct node *created_node = new node();
            created_node->key = key;
            created_node->left_child = NULL;
            created_node->right_child = NULL;

            return created_node;
        }

        int main() {
            struct node *root = createNode(1);
            root->left_child = createNode(2);
            root->left_child->left_child = createNode(3);
            root->left_child->right_child = createNode(4);
            root->right_child = createNode(5);

            std::cout << root->left_child->key << std::endl;
            std::cout << root->left_child->left_child->key << std::endl;
        }

---------------------------------------------------------------------------------------------

Binary Search Trees:

https://www.cs.usfca.edu/~galles/visualization/BST.html

    Binary Search Tree is a node-based binary tree data structure which has the
    following properties:

        - The left subtree of a node contains only nodes with keys lesser than the
        node’s key.
        - The right subtree of a node contains only nodes with keys greater than the
        node’s key.
        - The left and right subtree each must also be a binary search tree.
        - There must be no duplicate nodes.


        If it's bigger, you go right, if it's smaller, you go left.

        The order of insertion decides the shape of the tree. Making it unbalanced
        eventually.

        Binary Search Trees will become unbalanced the more insertions you make.
        Unbalanced means that the Height of the left and the right have a difference
        superior than 1.


            Insert 10:

                                        (10)

            Insert 8:

                                        (10)
                                       /
                                     /
                                   (8)

            Insert 3:

                                        (10)
                                       /
                                     /
                                   (8)                      It is now unbalanced!
                                  /                         Difference of height is more
                                /                           than 1 (left = 2, right = 0)
                              (3)


            Insert 9:

                                        (10)
                                       /
                                     /
                                   (8)
                                  /   \
                                /      \
                              (3)      (9)

            Insert 11:

                                        (10)
                                       /    \
                                     /        \
                                   (8)        (11)          It became balanced again!
                                  /   \                     Difference of height is less or
                                /      \                    than 1 (left = 2, right = 1)
                              (3)      (9)


            Insert 1:


                                        (10)
                                       /    \
                                     /        \
                                   (8)        (11)          It became unbalanced again!
                                  /   \
                                /      \
                              (3)      (9)
                             /
                           /
                         (1)


            Insert 5:

                                        (10)
                                       /    \
                                     /        \
                                   (8)        (11)
                                  /   \
                                /      \
                              (3)      (9)
                             /  \
                           /     \
                         (1)    (5)


Self-Balancing Binary Search Trees (AVL, Black Red Tree):

https://www.cs.usfca.edu/~galles/visualization/AVLtree.html
https://www.cs.usfca.edu/~galles/visualization/RedBlack.html

    A self-balancing binary search tree is a type of BST which tries to balance itself,
    in case of arbitrary insertions and deletions, by using rotations.

    Follows the same rules of Binary Search Trees, but it balances itself.

    Same example as above:

            Insert 10:

                                        (10)

            Insert 8:

                                        (10)
                                       /
                                     /
                                   (8)

            Insert 3:

                                        (10)
                                       /
                                     /
                                   (8)                      It is now unbalanced!
                                  /                         Difference of height is more
                                /                           than 1 (left = 2, right = 0)
                              (3)

                Rotates itself:

                                        (8)
                                       /    \
                                     /        \
                                   (3)        (10)


            Insert 9:

                                        (8)
                                       /    \
                                     /        \
                                   (3)        (10)
                                              /
                                             /
                                           (9)

            Insert 11:

                                        (8)
                                       /    \
                                     /        \
                                   (3)        (10)
                                              /  \
                                             /    \
                                           (9)    (11)


            Insert 1:


                                        (8)
                                       /    \
                                     /        \
                                   (3)        (10)
                                  /           /  \
                                 /           /    \
                               (1)         (9)    (11)


            Insert 5:

                                        (8)
                                       /    \
                                     /        \
                                   (3)        (10)
                                  /   \        /  \
                                 /     \      /    \
                               (1)      (5) (9)    (11)


    It balanced itself.


Difference between ATL and Black Red Tree:

https://www.tutorialandexample.com/red-black-tree-vs-avl-tree/

    In red-black, each node stores an extra bit that determines the color of the
    node in red-black tree either red or black. These colors determine that the tree
    remains balanced or not, while performing insertions and deletions. The red-black
    tree is used to reduce the number of rotations while inserting and deleting the
    node.

    In red-black, the maximum of rotations are 2 are required to balance a tree.
    In AVL, there is no limit of maximum rotations.

    Red-black is better if you use insertions / delete more often.
    AVL is better if you don't use insertions / delete that often.

---------------------------------------------------------------------------------------------

</code>
