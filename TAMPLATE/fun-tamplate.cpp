#include<iostream>
using namespace std;
template <class T> T add (T a,T b){
    T result= a+b;
    return result;
    // return 0;
}
int main(){
    // int i=4, j=5;
    // float x=4.5,y=2.1;
    cout<<"Answer of int is :"<<add(4,5)<<endl;
    cout<<"Answer of float is :"<<add(4.5,2.1)<<endl;
    return 0;

}