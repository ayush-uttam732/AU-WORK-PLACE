// 24=>Write a C++ program to overload operartor ++ .

#include<iostream>
using namespace std;
class Add{
    private:
        int a;
    public:
        Add(int x){
            a = x;
        }
        // Overloading the ++ operator
        Add operator++(){
            a++;
            return *this;
        }
        void display(){
            cout << "Value of a: " << a << endl;
        }

};
int main(){
    Add obj(5);
    cout << "Before incrementing: ";
    obj.display();
    ++obj; // Calls the overloaded ++ operator
    cout << "After incrementing: ";
    obj.display();
    return 0;
}