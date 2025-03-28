//10. Write a C++ program to implement Single inheritance.

#include<iostream>
using namespace std;
class Base {
    public:
        void display() {
            cout << "This is the base class." << endl;
        }
};
class Derived : public Base {
    public:
        void show() {
            cout << "This is the derived class." << endl;
        }
};
int main() {
    Derived obj;
    obj.display(); // Calling base class method
    obj.show();    // Calling derived class method
    return 0;
}