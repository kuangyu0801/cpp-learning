#include "Cat.hpp"
#include <iostream>
#include <sstream>
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

void Cat::setName(string input) {
    name = input;
}

string Cat::getName() {
    return name;
}

string Cat::toString() {
    stringstream ss;
    ss << "Cat is ";
    ss << name;
    ss << " with age of ";
    ss << age;
    return ss.str();
}