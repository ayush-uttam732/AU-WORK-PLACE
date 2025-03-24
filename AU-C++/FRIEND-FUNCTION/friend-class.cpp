#include<iostream>
using namespace std;
class A;
class B{
    public:
    void display(A & obj);
};
class A {
    private:
    int a;
    int b;
    protected:
    int c;
    public:
    A(){
        a=10;
        b=20;
        c=30;
    }
    friend void B::display(A & obj);

};
void B::display(A & obj){
    cout<<"a="<<obj.a<<endl;
    cout<<"b="<<obj.b<<endl;
    cout<<"c="<<obj.c<<endl;
}
int main(){
    A obj1;
    B obj2;
    obj2.display(obj1);
    return 0;
}