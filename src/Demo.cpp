#include "Demo.hpp"
#include <iostream>
#include <vector>
#include <iterator>
#include <cstring>
// https://www.cplusplus.com/reference/climits/
#include <climits>
#include <iomanip>
using namespace std;

void Demo::demoIterator() {
    cout << "demoIterator()" << endl;
    vector<string> v = {"first", "second", "third", "forth", "fifth"};
    auto b = v.begin();
    auto e = v.end();
    cout << "size: " << e - b << endl;
    for (auto i = v.begin(); i < v.end(); i++) {
        cout << *i << endl;
    }
}

void Demo::demoArray() {
    cout << "[demoArray()]" << endl;
    // array must be declared with cons expression
    // Two ways to declare an array
    int arr[] = {1, 2, 3};
    
    int size = 3;
    int arr_copy[size];
    // accessing array element with iterator
    // std::begin()/end() is C11 feature
    for (auto i = begin(arr); i != end(arr); i++) {
        cout << *i << endl;
        cout << i << endl;
    }
    
    // accessing array with pointer
    for (int* i = arr; i != arr + 3; i ++) {
        cout << *i << endl;
        cout << i << endl;
    }

    for (int i = 0; i < size; i ++) {
        arr_copy[i] = arr[i];
    }

    int arr1[5] = {1, 2, 3}; // rest element is padded with 0;
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }

    // array of string
    string texts[] = {"apple", "banana", "orange"};
    for (int i = 0; i < sizeof(texts)/sizeof(string); i += 1) {
        cout << "Element at index " << i << ":" << texts[i] << endl;
    }
    cout << sizeof(texts) << endl;

    // accessing non-exist array
    // result in segmentation fault
    // cout << texts[4] << endl;
}

void Demo::demoPointer() {

}

void Demo::demoVector() {
    cout << "demoVector" << endl;
    vector<int> v1;
    // a vector with 10 elements initialized with 2;
    vector<int> v2(10, 2);
    cout << v2.size() << endl;

    // a vector with 2 elements initialized with 10;
    vector<int> v3(2, 10);
    cout << v3.size() << endl;

    // a vector with two elements 2, 10
    vector<int> v4{2, 10};
    cout << v4.size() << endl;

    // vector
    vector<int> v4_copy(v4);

    v4_copy.push_back(11);
    for (auto i : v4_copy) {
        i *= i;
    }

    for (auto i : v4_copy) {
        cout << i << " ";
    }

    // reference will change the vector element
    for (auto &i : v4_copy) {
        i *= i;
    }

    for (auto i : v4_copy) {
        cout << i << " ";
    }
}

void Demo::demoCString() {
    cout << "[demoCString()]" << endl;
    char cs1[] = "This is a c-style string";
    int char_size = strlen(cs1);
    int arr_size = sizeof(cs1) / sizeof(cs1[0]);
    cout << "characters size: " << char_size << endl;
    printf("array size (including null char '/0'): %d \n", arr_size);
}

void Demo::demoString() {
    cout << "[demoString()]" << endl;
    string s1 {"This is a string object"};
    printf("String s1: %s \n", s1.c_str());
    printf("Iterating through the string... \n");
    int i = 0;
    for (auto c : s1) {
        printf("%d-th char is: %c \n", i, c);
        i++;
    }

    string t1 = "Hello";
    string t2 = "Fred";
    string t3 = t1 + t2;
    cout << t1 << t2 << endl;
    cout << t3 << endl;
}

void Demo::demoInput() {
    cout << "Enter user name: " << flush;

    string input;

    cin >> input;
    cout << "You entered: " << input << endl;

    int value;
    cout << "Enter user value: " << flush;
    cin >> value;
    cout << "You entered: " << value << endl;

}

void Demo::demoInteger() {
    // #include <climits>
    cout << "Max int value: " << INT_MAX << endl;
    cout << "Min int value: " << INT_MIN << endl;
    cout << "Max short int value: " << SHRT_MAX << endl;
    cout << "Min short int value: " << SHRT_MIN << endl;
    cout << "Max long int value: " << LONG_MAX << endl;
    cout << "Min long int value: " << LONG_MIN << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of short int: " << sizeof(short int) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;
}

void Demo::demoFloat() {
    float fValue = 76.8;
    cout << fValue << endl;
    cout << scientific << fValue << endl;
    cout << fixed << fValue << endl;
    cout << "size of float: " << sizeof(float) << endl;
    double dValue = 76.8;
    cout << "size of double: " << sizeof(double) << endl;
    dValue = 123.456789123456;
    cout << setprecision(20) << fixed << dValue << endl;
    long double lValue = 123.456789123456;
    cout << "size of long double: " << sizeof(long double) << endl;
    // #include <iomanip>
    cout << setprecision(20) << fixed << lValue << endl;
}

void Demo::demoBool() {
    bool bValue = true;
    cout << bValue << endl;
    cout << "size of bool: " << sizeof(bool) << endl;

    char cValue = 55;
    
    cout << "size of char: " << sizeof(char) << endl;
    cout << cValue << endl;
    cValue = 'g';
    cout << cValue << endl;
    // for uni code up to 4 bytes
    wchar_t wValue = 'y';
    cout << "size of wchar_t: " << sizeof(wchar_t) << endl;
    cout << wValue << endl;
}

void Demo::demoIf() {
    string password = "hello";
    cout << "Enter your password > " << flush;

    string input;
    cin >> input;

    cout << "'" << input << "'" << endl;
    if (input == password) {
        cout << "password is correct" << endl;
    } else {
        cout << "password is incorrect" << endl;
    }

    // reading from left to right
    int v1 = 9;
    cout << "(v1 == 8 && v1 != 10 || v1 < 10) evaluates to" << endl;
    if (v1 == 8 && v1 != 10 || v1 < 10) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}

void Demo::compareFloat() {
    float fValue = 1.1;
    cout << setprecision(10) << fValue << endl;
    if (fValue == 1.1) {
        cout << "float is equal!" << endl;
    } else {
        cout << "float is not equal!" << endl;
    }
}

void Demo::whileLoop() {
    int i = 10;
    while (i < 10) {
        cout << "i: " << i << endl;
        i += 1;
    }

    int j = 10;
    do {
        cout << "j: " << j << endl;
        j += 1;
    } while (j < 10);
}

void Demo::forLoop() {
    // infinite loop
    int i = 0;
    for (; ;) {
        cout << "running" << endl;
        if (i == 100) {
            break;
        }
        i += 1;
    }
}

void Demo::multiDimensionArray() {
    string animals[2][3] = {
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}
    };

    for (int i = 0; i < 2; i += 1) {
        for (int j = 0; j < 3; j += 1) {
            cout << "animals[" << i << "][" << j << "]: " << animals[i][j] << ", "<<flush;
        }
        cout << endl;
    }
}