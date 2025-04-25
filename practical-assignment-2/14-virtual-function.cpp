//14=> Write a C++ program to implement the concept of Virtual functions.

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display function of Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Display function of Derived class" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

    // Virtual function ensures the derived class's method is called
    basePtr->display();

    return 0;
}



