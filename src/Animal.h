#include <iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    Animal() {cout << "Animal created." << endl;};
    // overriding the default copy constructor
    Animal(const Animal &other): name(other.name) { cout << "Animal created by copy constuctor" << endl;};
    void setName(string name) {this->name = name;};
    void speak() {cout << "My name is: " << name << endl;};
};