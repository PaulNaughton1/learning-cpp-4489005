// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "What is your name?" << '\n';
    std::cin >> str;

    std::cout << "Hello, " << str << "!";
    return 0;
}
