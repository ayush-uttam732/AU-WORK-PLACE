#include<iostream>
using namespace std;
class A{
    private:
        int a;
        int b;
     protected:
        int c;
    public:
        A(){
            a=10;
            b=20;
            c=30;
        }
      friend void display(A & obj);        
};
void display(A & obj){
    cout<<"a="<<obj.a<<endl;
    cout<<"b="<<obj.b<<endl;
    cout<<"c="<<obj.c<<endl;
}
int main(){
    A obj;
    display(obj);
    return 0;   
}

