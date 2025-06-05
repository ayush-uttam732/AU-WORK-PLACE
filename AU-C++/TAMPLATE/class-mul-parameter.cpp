#include<iostream>
using namespace std;
template <class t,class t2> 
class A{
    public:
    t n1=3;
    t2 n2=3.4;
    void show(){
        cout<<"value n1 :"<<n1;
        cout<<"Value n2 :"<<n2;

    }
};
int main(){
    A<int,float>obj;
    obj.show();
    return 0;

}