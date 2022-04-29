#include "Cat.hpp"
#include <iostream>
using namespace std;

// constructor
Cat::Cat() {
    cout << "Cat created" << endl;
}


// destroctor
Cat::~Cat() {
    cout << "Cat destroyed" << endl;
}

void Cat::speak() {
    if (isHappy) {
        cout << "Meows!" << endl;
    } else {
        cout << "Sssss... " << endl;
    }
}

void Cat::jump() {
    cout << "Cat jumps!" << endl;
}

void Cat::makeHappy() {
    isHappy = true;
}

void Cat::makeUnhappy() {
    isHappy = false;
}