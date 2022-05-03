#include "Pointer.h"
#include <iostream>
using namespace std;

void Pointer::manipulate(int *ptrValue) {
    cout << "Value via pointer: " << *ptrValue << endl; // 10
    *ptrValue = 20;
    cout << "Value via pointer: " << *ptrValue << endl; // 20
}

void Pointer::basic() {
    int value = 10;

    // pointer : address
    int* ptrValue = &value;

    cout << "value: " << value << endl;
    cout << "Pointer to value: " << ptrValue << endl;
    // dereferencing
    cout << "Value via pointer before manipulate(): " << *ptrValue << endl;
    manipulate(ptrValue);
    cout << "Value via pointer after manipulate(): " << *ptrValue << endl; // 20
}
