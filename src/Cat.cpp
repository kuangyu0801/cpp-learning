#include "Cat.hpp"
#include <iostream>
#include <sstream>
using namespace std;

// constructor
Cat::Cat() {
    cout << "Cat created" << endl;
}

// constructor initialization list
Cat::Cat(string name, string gender): name(name), gender(gender) {

}

Cat::Cat(string name, int age, string gender) {
    this->name = name;
    this->age = age;
    this->gender = gender;
    cout << "the object is allocated in: " << this << endl;
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
    ss << " and gender of ";
    ss << gender;
    return ss.str();
}