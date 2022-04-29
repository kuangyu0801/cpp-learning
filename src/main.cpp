#include <iostream>
#include "Formular.h"
#include "Demo.hpp"
#include "Function.hpp"
#include "Cat.hpp"
using namespace std;

void demoFunctionClass() {
    Function::func0(10);
    int returnInput = Function::returnUserInput();
    cout << "User input is " << returnInput << endl;
    int tenTimes = Function::tenTimesValue(returnInput);
    cout << "Ten times input is " << tenTimes << endl;
    Function::prototypeDemo();
}

void demoOOP() {
    Cat cat;
    
    //cat.isHappy = true;
    cat.setName("Garfield");
    cat.speak();
    cat.makeHappy();
    cat.speak();
    cat.jump();
    cout << cat.getName() << endl;
    
    Cat bob("Bob", 11);
    //bob.isHappy = false;
    bob.speak();
    bob.makeUnhappy();
    bob.speak();
    cout << bob.getName() << endl;
    cout << bob.toString() << endl;


    Cat cat3("Kathy", 15, "Female");
    cout << cat3.toString() << endl;


    Cat cat4("Naomi", 3, "Female");
    cout << cat4.toString() << endl;
}

int main() {
    cout << "bla: " << Formular::bla(2) << endl;
    /*
    Demo::demoCString();
    Demo::demoString();
    Demo::demoArray();
    Demo::demoVector();
    Demo::demoIterator();
    */
    //Demo::demoInput();
    Demo::demoInteger();
    Demo::demoFloat();
    Demo::demoBool();
    //Demo::demoIf();
    Demo::compareFloat();
    //Demo::whileLoop();
    //Demo::forLoop();
    //Demo::demoArray();
    //Demo::multiDimensionArray();
    //Demo::demoSwitch();
    //demoFunctionClass();
    demoOOP();
    Demo::demoStringStream();
    return 0;
}