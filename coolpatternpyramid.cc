#include <iostream>

// global variables, accessible and modifiable from any class or function
int * pointerToLenght; // this is a pointer, which we can modify in any class or function to point to one of its variables and access it somewhere else
int * pointerToWhiteSpaces;
bool firstPhaseGlobal;

class UsefulVariables {
    public:
        bool firstPhase;
        bool isDone = false;
        int lenght;
        int whiteSpace;
        int asterisksToPrint;
};

// void does not return any vvalues

void printWhiteSpaces() {
    UsefulVariables UsefulVariables;
    int x = *pointerToWhiteSpaces;
    int y = *pointerToLenght-1;
    std::string a;
    if (firstPhaseGlobal == false) {
        while(x != 0) {
            std::cout << "⠀";
            x--;
        }
    }
        else {
            while(1+1 == 2) {

        }
    }
}

void printAsterisks() {
    UsefulVariables UsefulVariables;
    int x = *pointerToLenght - *pointerToWhiteSpaces;
    x = x*2;

    while(x != 0) {
        x--;
        std::cout << "*";
    }
    std::cout << std::endl;
}

int main() {
    UsefulVariables UsefulVariables;
/*
  *
 **
***
 **
  *
*/
    std::cout << "Please input how long you want the base's pyramid to be: ";
    std::cin >> UsefulVariables.lenght;
    std::cout << std::endl;
    UsefulVariables.whiteSpace = UsefulVariables.lenght-1;
    UsefulVariables.firstPhase = false;

    pointerToLenght = &UsefulVariables.lenght;
    pointerToWhiteSpaces = &UsefulVariables.whiteSpace;

    UsefulVariables.asterisksToPrint = 0;

        while(UsefulVariables.isDone == false) {
            printWhiteSpaces();
            printAsterisks();
            UsefulVariables.whiteSpace--;

            if(UsefulVariables.whiteSpace == 0) {
                printAsterisks();
                UsefulVariables.firstPhase = true;
                std::cout << "FIRST PHASE DONE!!\n";
                int a;
                firstPhaseGlobal = true;
            }
        }
}
