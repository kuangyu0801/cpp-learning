#ifndef CAT_H_
#define CAT_H_
#include <iostream>
using namespace std;
class Cat{
private:
    bool isHappy;
    string name;
public:
    // constructor
    Cat();
    // destructor
    ~Cat();
    void speak();
    void jump();
    void makeHappy();
    void makeUnhappy();
    void setName(string input);
    string getName();
};
#endif