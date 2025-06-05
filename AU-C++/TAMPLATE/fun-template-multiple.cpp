#include<iostream>
using namespace std;
template <class A,class B> void fun(A x,B y){
    cout<<"value of x is :"<<x;
    cout<<"value of y is :"<<y;
}
int main(){
    fun(3,5.4);
    return 0;
}