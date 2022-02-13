#include <iostream>
#include <vector>
#include <map>
#include <algorithm>


class   matrix {
    private:
        std::string     __name;
        int     __row;
        int     __col;
        int     __init_value;
        std::vector<std::vector<int> > __matrix;

    public:

        matrix(int row, int col, std::string name, double init, std::vector<std::vector<int> > matrix) : __row(0),
                                                                                                         __col(col),
                                                                                                         __name(name),
                                                                                                         __init_value(init),
                                                                                                         __matrix(matrix)
        {};

};


int main(void) {
	
    std::vector<std::vector<int> > myVector = {{ 0, 1, 2}}; 
    std::vector<int>::iterator iter;    

    for (iter = myVector.begin(); iter != myVector.end(); iter++) {
        std::cout << *iter << std::endl;
    }

    matrix theMatrix(1, 2, "Hello", 5, myVector);
}
