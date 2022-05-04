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

void Pointer::array() {
    string strs[] = {"one", "two", "three"};
    // points to the first element in the array
    string *pStrs = strs;
    int n = sizeof(strs)/sizeof(string);
    cout << n << endl;

    // loop through an array using a pointer
    for (int i = 0; i < n; i += 1) {
        cout << strs[i] << " " << flush;
        cout << pStrs[i] << " " << flush;
        cout << endl;
    }

    // loop through an array by increasing a pointer
    for (int i = 0; i < n; i += 1) {
        cout << *pStrs << " " << flush;
        pStrs += 1;
        cout << endl;
    }

    string *pFirst = strs;
    string *pEnd = &strs[2];

    // loop through an array stopped by comparison
    cout << "loop through an array stopped by comparison..." << endl;
    while (true) {
        cout << *pFirst << " " << flush;
        if (pFirst == pEnd) {
            break;
        }
        pFirst += 1;
    }
}

void Pointer::arith() {
    const int N = 5;
    string strs[] = {"one", "two", "three", "four", "five"};

    string *pStrs = strs;

    pStrs += 2;

    cout << *pStrs << endl;

    pStrs -= 2;

    cout << *pStrs << endl;

    string *pEnd = &strs[N];

    while (pStrs != pEnd) {
        int diff = pEnd - pStrs;
        cout << diff << ": " << *pStrs << endl;
        pStrs += 1;
    }



}
