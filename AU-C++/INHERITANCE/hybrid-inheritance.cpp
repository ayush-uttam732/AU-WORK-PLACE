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
       
};
class C:public B{

};
class D:public C,public B{

};
int main(){
    D obj;
    obj.show();
    return 0;
}

