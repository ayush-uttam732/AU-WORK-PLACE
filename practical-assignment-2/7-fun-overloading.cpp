//7=> Write a C++ program to implement function overloading with type, order, and
//sequence of arguments.

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
        void fun(int a, int b){
            cout << "Function with two integer arguments called." << endl;
            cout << "Integer 1: " << a << ", Integer 2: " << b << endl;
        }
        void fun(float a, float b){
            cout << "Function with two float arguments called." << endl;
            cout << "Float 1: " << a << ", Float 2: " << b << endl;
        }
};
int main(){
    funOver obj;
    obj.fun(5, 3.14f); // Calls the function with int and float arguments
    obj.fun(3.14f, 5); // Calls the function with float and int arguments
    obj.fun(5, 10); // Calls the function with two integer arguments
    obj.fun(3.14f, 2.71f); // Calls the function with two float arguments

    return 0;
}