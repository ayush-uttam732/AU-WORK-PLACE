//23=> Write a C++ program to implement function overloading with type, order, and sequence of arguments.

#include<iostream>
using namespace std;
class funOver{
    public:
        void fun(int a, float b){
            cout << "Function with int and float arguments called." << endl;
            cout << "Integer: " << a << ", Float: " << b << endl;
        }
        void fun(float a, int b){
            cout << "Function with float and int arguments called." << endl;
            cout << "Float: " << a << ", Integer: " << b << endl;
        }
        void fun(int a, int b ,int c){
            cout << "Function with two integer arguments called." << endl;
            cout << "Integer 1 , 2 and 3 is : " << a << b <<c << endl;
        }
       
};
int main(){
    funOver obj;
    obj.fun(5, 3.14f); // Calls the function with int and float arguments
    obj.fun(3.14f, 5); // Calls the function with float and int arguments
    obj.fun(5, 10,30); // Calls the function with two integer arguments

    return 0;
}