#include <iostream>
#include "Formular.h"
#include "Demo.hpp"
using namespace std;

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
    Demo::forLoop();
    return 0;
}