#include<iostream>
using namespace std;
template <class T>
    class A{
        public:
        T n1=3;
        T n2=4;
        void add(){
            cout<<"addition is :"<<n1+n2;
        }
    };
int main(){
    A<int>obj;
    obj.add();
    return 0;
}