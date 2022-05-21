#include "Inheritance.h"
#include <iostream>

using namespace std;

class Machine {
private:
    static int count;
    bool onStatus;
    string name;
    int id;
public:
    static int MAX_CNT;

    //Machine(string name): name(name){};
    Machine() {
        cout << "Machine no-argument constructor" << endl;
        id = count;
        count += 1;
    }
    bool isOn() {
        return onStatus;
    } 
    void makeNoise() {
        cout << "Errrrr..." << endl;
    }
    string getName() {
        cout << "my name is: " << name << endl;
        return name;
    }
    void setName(string name) {
        this->name = name;
    }

    static void getCount() {
        cout << "count: " << count << endl;
    }

    void showId() {
        cout << "id of this object: " << this->id << endl;
    }    
};

// initialize static variable Machine
int Machine::MAX_CNT = 10;
int Machine::count = 0;
// Vehicle inherits Machine
class Vehicle: public Machine {
public:
};


// Car inherits Vehicle
class Car: public Vehicle {
public:
    Car() {
        cout << "Car no-argument constructor" << endl;
    }
    void drive() {
        cout << "Moving forward" << endl;
    }
};

class Airplane: public Machine {
public:
    void drive() {
        cout << "Moving upward" << endl;
    }
};

void Inheritance::demo() {
    cout << "Demo inheritance..." << endl;
    Machine m;
    m.makeNoise();
    m.getCount();
    m.showId();
    Car c;
    c.makeNoise();
    c.setName("BMW iX");
    c.drive();
    c.getCount();
    c.showId();
    Airplane a;
    a.setName("B787");
    a.drive();
    a.getName();
    a.getCount();
    a.showId();

    // calling static method
    Machine::getCount();
}

void Inheritance::demoConstuctor() {
    cout << "Cpp doesn't inherit constuctor" << endl;
}

void Inheritance::demoStaticVariabe() {

}