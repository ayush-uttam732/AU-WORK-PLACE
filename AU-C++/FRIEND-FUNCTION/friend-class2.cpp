#include<iostream>
using namespace std;
class A;
class B{
    private:
    int x;
    public:
    friend class A;
    B(){
        x=10;
    }
};
class A{
    private:
    int y;
    public:
    A(){
        y=20;
    }
    void add(){
        B obj;
        cout<<obj.x+y<<endl;
    }
};
int main(){
    A obj;
    obj.add();
    return 0;

}