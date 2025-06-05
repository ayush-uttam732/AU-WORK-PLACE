#include<iostream>
using namespace std;
template <class X>void fun(X a){
    cout<<"Value of a is: "<<a;
}
template <class X,class Y> void fun(X a,Y b){
    cout<<"Value of b is : "<<b;
    cout<<"Value of a is : "<<a;

}
int main(){
    fun(3);
    fun(4,6);
    return 0;
}