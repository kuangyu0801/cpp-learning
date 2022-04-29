#ifndef CAT_H_
#define CAT_H_
class Cat{
private:
    bool isHappy;
public:
    // constructor
    Cat();
    // destructor
    ~Cat();
    void speak();
    void jump();
    void makeHappy();
    void makeUnhappy();
};
#endif