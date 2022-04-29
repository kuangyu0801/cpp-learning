#ifndef CAT_H_
#define CAT_H_
#include <iostream>
using namespace std;
class Cat{
private:
    bool isHappy;
    string name;
    int age;
public:
    // constructor
    Cat();
    // inline constuctor
    Cat(string input, int num) { name = input; age = num;}; 
    // destructor
    ~Cat();
    void speak();
    void jump();
    void makeHappy();
    void makeUnhappy();
    void setName(string input);
    string getName();
    string toString();
};
#endif