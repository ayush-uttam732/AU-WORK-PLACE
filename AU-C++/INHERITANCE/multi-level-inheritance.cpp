#include<iostream>
using namespace std;
class A{
    public:
    void show (){
        cout<<"I am a base class"<<endl;
  }
};
class B:public A{     
       // drive class  ,  abstract class
    public:
    void display(){
        cout<<"I am drive class"<<endl;
    }
}; 
class C:public B{
    public:
    void display1(){
        cout<<"I am 2 drive class class"<<endl;
    }
};  
int main(){
    C obj;
    obj.show();
    obj.display();
    obj.display1();
    return 0;
}


