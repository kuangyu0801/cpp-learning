#include "Pointer.h"
#include <iostream>
using namespace std;

void Pointer::basic() {
    int value;
    int* ptrValue = &value;

    cout << "value: " << value << endl;
    cout << "Pointer to value: " << ptrValue << endl;
    // dereferencing
    cout << "Value via pointer: " << *ptrValue << endl;
}
