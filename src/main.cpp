#include <iostream>
#include "Formular.h"
#include "Demo.hpp"
#include "Function.hpp"
using namespace std;

void demoFunctionClass() {
    Function::func0(10);
    int returnInput = Function::returnUserInput();
    cout << "User input is " << returnInput << endl;
    int tenTimes = Function::tenTimesValue(returnInput);
    cout << "Ten times input is " << tenTimes << endl;
    Function::prototypeDemo();
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
    Demo::demoSwitch();
    demoFunctionClass();
    return 0;
}