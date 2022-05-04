#include <iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    Animal() {cout << "Animal created." << endl;};
    ~Animal() {cout << "Animal destroyed." << endl;};
    // overriding the default copy constructor
    Animal(const Animal &other): name(other.name) { cout << "Animal created by copy constuctor" << endl;};
    void setName(string name) {this->name = name;};
    void speak() {cout << "My name is: " << name << endl;};
    // returning a reference from local variable is bad!
    /*
    static Animal& createAnimal() {
        Animal a; 
        a.setName("Frost"); 
        return a;
    };
    */
   static Animal* createAnimal() {
       // must use new to allocate memory; otherwise it will be destroy at
       // the end of method
       Animal *pAnimal = new Animal();
       pAnimal->setName("Bertie");
       return pAnimal;
   }
};