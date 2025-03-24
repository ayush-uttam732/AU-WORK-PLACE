#include<iostream>
using namespace std;
class A{
    int x;               //member variable
    static int z;        // static member variable
    public:
    void get_data(){      //function for geting data from user  
        cout<<"enter value of x : ";
        cin>>x;
        z=15;
    }
    void display_data(){        //fun. for display data 
        cout<<"value of x is : "<<x<<endl;
        cout<<"value of z is : "<<z<<endl;
    }
};
int A::z;              //datatype classname :: static variable name 
int main(){
    A obj1,obj2;
    obj1.get_data();
    obj2.get_data();
    obj1.display_data();
    obj2.display_data();
    return 0;
}
