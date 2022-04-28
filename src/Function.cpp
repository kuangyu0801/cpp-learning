// preprocesser diravatives
#include "Function.hpp"
#include <iostream>

using namespace std;
int Function::func0(int arg1) {
    cout << "func0" << endl;
    return 0;
}

int Function::returnUserInput() {
    int input;
    cout << "Give an input in integer:" << endl;
    cin >> input;
    return input;
}

// this is a prototype
void prototypeFunction();

int Function::tenTimesValue(int input) {
    return 10 * input;
}

void Function::prototypeDemo() {
    prototypeFunction();
}

void prototypeFunction() {
    cout << "Hello world from prototype" << endl;
}