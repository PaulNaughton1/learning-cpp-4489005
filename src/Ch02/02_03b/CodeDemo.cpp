// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>
#define cout std::cout
#define endln std::endl

int a = 4, b = 5;

int main(){
    bool myFlag;
    myFlag = false;

    cout << "myFlag = " << myFlag << std::endl;
    cout << "a = " << a << endln;
    cout << "b = " << b << std::endl;
    cout << "a + b = " << a+b << std::endl;
    cout << "a - b = " << a-b << std::endl;
    cout << std::endl << std::endl;

    unsigned int positive; // an unsigned variable will take the binary representation of -2 so instead of -2 it is 2^32 - 2
    positive = a-b;
    cout << positive <<endln;
    return (0);
}
