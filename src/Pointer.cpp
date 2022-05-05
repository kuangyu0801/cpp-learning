#include "Pointer.h"
#include "Animal.h"
#include "Animals.h"
#include <iostream>
using namespace std;
using namespace liku;


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

void Pointer::chararray() {
    // last is a null character \0
    char array[] = "hello";
    cout << array << endl;

    for (int i = 0; i < sizeof(array); i += 1) {
        cout << i << ": " << array[i] << " in " << (int) array[i] << endl;
    }

    // output all the chars with a while loop
    int i = 0;
    while (true) {
        // stop at null character
        if (array[i] == 0) {
            break;
        }
        cout << i << ": " << array[i] << endl;
        i += 1;
    }


    char *pStart = array;
    char *pEnd = array + sizeof(array) - 2;
    // reverse string
    while (pStart < pEnd) {
        
        char temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;
        pStart += 1;
        pEnd -= 1;
    }

    cout << array << endl;

}


void changeWithoutReference(int value) {
    value = 15;
}

void changeWithReference(int &value) {
    value = 15;
}

void Pointer::reference() {
    int v1 = 8;
    int &v2 = v1;
    cout << "v1: " << v1 << ", v2: " << v2 << endl;

    v2 = 10;
    cout << "v1: " << v1 << ", v2: " << v2 << endl;

    changeWithReference(v2);
    cout << "v1: " << v1 << ", v2: " << v2 << endl;

    changeWithoutReference(v2);
    cout << "v1: " << v1 << ", v2: " << v2 << endl;
}

void Pointer::demoConst() {
    cout << "Pointer::demoConst()" << endl;
    int v = 10;
    // tip: reading the type backwards
    // pointer to an integer
    int *p1 = &v;

    // pointer to an constant integer
    const int *p2 = &v;

    cout << *p1 << ": " << *p2 << endl;

    v = 13;
    // chaning int is not allowed since it is pointed to constant int
    // *p2 = 13;
    cout << *p1 << ": " << *p2 << endl;

    // constant pointer to an integer
    int * const p3 = &v;
    int v2 = 15;
    
    // changing pointer is not allowed since the pointer itself is constant
    // p3 = &v2;
    // chaning the pointer value is allowed, this will change the pointer integer v
    *p3 = v2;
    cout << *p1 << ": " << *p2 << ": " << *p3 <<endl;
}

void Pointer::copyConstructor() {
    
    // same as using copy constructor directly
    Animal a1;
    a1.setName("Bob");

    // using = is implictly calling copy constructor
    // creates a new object
    Animal a2 = a1;
    a2.speak();
    a2.setName("Cathy");

    a1.speak();
    a2.speak();

    Animal a3(a1);
    a3.speak();

}


void Pointer::newOperator() {
    // new Animal will also do
    // object is created on "heap" rather than stack
    Animal *pAnimal = new Animal();
    // dot operator '.' has higher precedence than star operator '*'
    // cannot directly call pointer with *().
    pAnimal->setName("Bob");
    pAnimal->speak();
    // need to explicitly recollect the allocated memory
    delete pAnimal;
}

void Pointer::returnObject() {
    Animal *pA = Animal::createAnimal();
    pA->speak();

    delete pA;
}

void Pointer::allocateMemory() {
    Animal *pAnimal = new Animal[10];
    // destroy all 
    delete [] pAnimal;
    // cannot use delete pAnimal;
    // will result munmap_chunk(): invalid pointer
    // new can be used for all type
    char *chs = new char[1000];

    delete [] chs;
}

void printArray(int size, string strs[]) {
    // 8, which is the size of pointer, not the whole array
    cout << "size of array in passing function: " <<sizeof(strs) << endl;
}

void pringPtrArray(int size, string *strs) {
    // warning: ‘sizeof’ on array function parameter ‘strs’ will return size of ‘std::string*’
    cout << "size of array in passing function using pointer: " <<sizeof(strs) << endl;
    for (int i = 0; i < size; i += 1) {
        cout << strs[i] << ", " << flush;
    }
    cout << endl;
}

// the size inside [] must be the actual size of the array
void printRefArray(string (&strs)[3]) {
    cout << "size of array in passing function using reference: " << sizeof(strs) << endl;
}

char * getCharArray(int size) {
    char * pChs = new char[size];
    return pChs;
}

void freeCharArray(char *pChs) {
    delete pChs;
}

void Pointer::passArray() {
    string strs[] = {"apple", "banana", "orange"};

    // 96
    cout << "size of array in defining function: " <<sizeof(strs) << endl;
    int size = sizeof(strs)/sizeof(string);
    printArray(size, strs);
    pringPtrArray(size, strs);
    printRefArray(strs);

    char *pChs = getCharArray(10);
    cout << sizeof(pChs) << endl;
    freeCharArray(pChs);
}

void Pointer::useNamespace() {
    // this cat is from "Cat.hpp" with default namespace
    
    Cat cat;
    cat.speak();

    kuli::Cat cat1;
    cat1.speak();

}