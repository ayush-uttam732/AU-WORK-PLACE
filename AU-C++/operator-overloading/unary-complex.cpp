#include<iostream>
using namespace std;
class complex{
    int x,y;
    public:
    // void get(int x ,int y);
    complex(int i, int j){
        x=i;
        y=j;
    }
    complex(){

    }
    void display();
    complex operator +(complex);
};
void complex::display(){
    cout<<x<<" + "<<y<<"i"<<endl;
}
complex complex::operator +(complex obj){
    complex temp;
    temp.x=x+obj.x;
    temp.y=y+obj.y;
    return temp;
}
int main(){
    complex obj1(1,4);
    complex obj2(3,4);
    complex obj3;
    obj3=obj1+obj2;
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}
