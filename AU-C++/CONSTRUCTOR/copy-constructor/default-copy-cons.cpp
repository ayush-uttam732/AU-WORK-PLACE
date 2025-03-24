#include<iostream>
using namespace std ;
class first {
    public:
    int x;
    string name;
    string lastName;

};
int main(){
    first obj;
    obj.x= 10;
    obj.name="ayush";
    obj.lastName="uttam";
    cout<<obj.x  <<endl;
    cout<<obj.name <<endl;
    cout<<obj.lastName  <<endl;

    first obj1(obj);
    cout<< obj1.name<<endl;
    cout<<obj1.lastName<<endl;
    cout<<obj1.x<<endl;
    cout<<obj1.x<<endl;
    // cout<<obj1.x;
    // obj1.x=30;
    // cout<<obj1.x;
    return 0;
}