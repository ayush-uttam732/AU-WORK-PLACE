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
int main(){
    B obj;
    obj.show();
    return 0;
}
