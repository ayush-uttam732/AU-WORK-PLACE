#include<iostream>
using namespace std;
class space{
    private:
    int x,y,z;
    public:
    void get_data(int a,int b, int c);
    void display();
    void operator-();
};
void space::get_data(int a,int b,int c){
    x=a;
    y=b;
    z=c;
};
void space::display(){
    
    cout<<"value of x is :"<<x<<endl;
    cout<<"value of y is :"<<y<<endl;
    cout<<"value of z is :"<<z <<endl;
};
void space::operator-(){
    x=-x;
    y=-y;
    z=-z;
};
int main(){
    space obj;
    obj.get_data(3,5,6);
    obj.display();
    -obj;
    obj.display();
    return 0;
}