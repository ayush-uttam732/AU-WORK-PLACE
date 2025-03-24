#include<iostream>
using namespace std;
class A {
    private:
    int x;
    static int z;
    public:
    void get_data(int a){
        x=a;
        z++;
    };
    void display_data(){
        cout<<"value of x is : "<<x<<endl;
        cout<<"value of z is : "<<z<<endl;
    };
};
int A::z;
int main(){
    A obj1,obj2;
    obj1.get_data(10);
    obj2.get_data(20);

    obj1.display_data();
    obj2.display_data();
    
    obj1.get_data(30);
    obj1.display_data();
    obj2.get_data(40);
    obj2.display_data();
    return 0;
}