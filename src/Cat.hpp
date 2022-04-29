#ifndef CAT_H_
#define CAT_H_
#include <iostream>
using namespace std;
class Cat{
private:
    bool isHappy;
    string name;
    int age;
    string gender;
public:
    // constructor
    Cat();
    // inline constuctor
    Cat(string input, int num) { name = input; age = num;};
    Cat(string name, int age, string gender);
    // constructor initialization list
    Cat(string name, string gender); 
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