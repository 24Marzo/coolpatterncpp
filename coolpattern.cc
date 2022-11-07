#include <iostream>

int main() {

    /*
    print

    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
    
    */

    std::string x = "*";
    bool firstPhase = false;
    bool isDone = false;
   
    while(firstPhase == false) {
        std::cout << x << std::endl;
        x = x += "*";
        if (x.length() == 6) {
            firstPhase = true;
        }
    }

    while(isDone == false) {
        std::cout << x << std::endl;
        x.erase(0,1);  //erases the first character of string
        if (x.length() == 0) {
            isDone = true;
        }
    }


}