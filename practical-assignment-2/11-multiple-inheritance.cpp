//27=> Write a C++ program to implement multiple inheritance

#include<iostream>
using namespace std;
class Base1 {
    public:
        void displayBase1() {
            cout << "This is Base1 class." << endl;
        }
};
class Base2 {
    public:
        void displayBase2() {
            cout << "This is Base2 class." << endl;
        }
};
class Derived : public Base1, public Base2 {
    public:
        void displayDerived() {
            cout << "This is Derived class." << endl;
        }
};
int main() {
    Derived obj;
    obj.displayBase1(); // Calling method from Base1
    obj.displayBase2(); // Calling method from Base2
    obj.displayDerived(); // Calling method from Derived class
    return 0;
}