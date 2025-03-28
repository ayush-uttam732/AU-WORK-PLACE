//12.Write a C++ program to implement Hybrid inheritance.

#include<iostream>
using namespace std;
class A{
    public:
        void displayA(){
            cout << "This is class A." << endl;
        }
};
class B : virtual public A{
    public:
        void displayB(){
            cout << "This is class B." << endl;
        }
};
class C : virtual public A{
    public:
        void displayC(){
            cout << "This is class C." << endl;
        }
};
class D : public B, public C{
    public:
        void displayD(){
            cout << "This is class D." << endl;
        }
};
int main(){
    D obj;
    obj.displayA(); // Calling method from class A
    obj.displayB(); // Calling method from class B
    obj.displayC(); // Calling method from class C
    obj.displayD(); // Calling method from class D
    return 0;
}