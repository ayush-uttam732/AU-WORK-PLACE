//15=>write a C++ program to implement the concept of virtual base class.

#include <iostream>
using namespace std;

class Base {
protected:
    int value;
public:
    void setValue(int v) {
        value = v;
    }
};

class Derived1 : virtual public Base {
public:
    void showValue1() {
        cout << "Value from Derived1: " << value << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void showValue2() {
        cout << "Value from Derived2: " << value << endl;
    }
};

class FinalDerived : public Derived1, public Derived2 {
public:
    void showFinalValue() {
        cout << "Value in FinalDerived: " << value << endl;
    }
};

int main() {
    FinalDerived obj;
    obj.setValue(42);
    obj.showValue1();
    obj.showValue2();
    obj.showFinalValue();
    return 0;
}