#include<iostream>
using namespace std;
template <class A,class B> B fun(A x,B y){
   return x+y;
}
int main(){
    cout<<fun(3,5.4);
    
    return 0;
}