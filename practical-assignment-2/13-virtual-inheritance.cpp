//13=> Write a C++ program to use pointer for both base and derived classes and call the member 
//function using virtual keyword.

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

    // Call the display function using the base class pointer
    basePtr->display();

    return 0;
}