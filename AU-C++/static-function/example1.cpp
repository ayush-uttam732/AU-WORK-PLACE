#include<iostream>
using namespace std;
class A{
    public:
    int x;
    static int z;
};
int A::z=10;
int main(){
    int x;
    A obj1,obj2;
    cout<<"Enter the value of x : ";
    cin>>obj1.x;
    cout<<"Enter the value of x : ";
    cin>>obj2.x;
    cout<<obj1.x<<endl;
    cout<<obj2.x<<endl;
    cout<<obj1.z<<endl;
    cout<<obj2.z<<endl;
    return 0;
}
