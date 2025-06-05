#include<iostream>
using namespace std;
class A{
    public:
    virtual void fun(){
        cout<<"Hello, i am function of A"<<endl;
    }
};

class B:public A{
    public:
    void fun(){
        cout<<"Hello, i am function of B";
    }
};
int main(){
    A *ptr;
    ptr=new A();
    ptr->fun();
    ptr=new B();
    ptr->fun();
    delete ptr;
    return 0;
}   