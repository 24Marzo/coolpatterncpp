#include <iostream>

class Variables {
    public:
    int var;
};

void printVar() {
    Variables Variables;
    int x;
    x = Variables.var;
    std::cout << x << std::endl;
}

int main() {
    Variables Variables;
    Variables.var = 9;
    printVar();

    /*
    expected output: 9
    actual output: -137179539
    */
}