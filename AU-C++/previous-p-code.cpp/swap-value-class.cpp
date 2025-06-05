#include<iostream>
using namespace std;
class B;
class A{
    private:
    int a;
    public:
    void get(int x){
       a=x;
    }
    friend void swap(A &, B &);
};
class B{
    private:
    int b;
    public:
    void get(int y){
       b=y;
    }
    friend void swap(A &, B &);
};
void swap(A &x, B &y){
    int temp=x.a;
    x.a=y.b;
    y.b=temp;
    cout<<"Value of A :"<<x.a<<" B :"<<y.b;
}
int main(){
    A obj1;
    B obj2;
    obj1.get(4);
    obj2.get(5);
    swap(obj1,obj2);
    return 0;
}