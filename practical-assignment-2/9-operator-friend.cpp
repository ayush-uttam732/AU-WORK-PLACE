//9.Write a C++ program to overload operator ++ and operator －－ using friend
//functions.

#include<iostream>
using namespace std;
class operatorOL{
    private:
        int a;
    public:
        operatorOL(int x){
            a = x;
        }
                                                                // Overloading the ++ operator using friend function
        friend  operatorOL operator++(operatorOL &obj){
            obj.a++;
            return obj;
        }
                                                                // Overloading the -- operator using friend function
        friend operatorOL operator--(operatorOL &obj){
            obj.a--;
            return obj;
        }
                                                                // Function to display the value of a
        void display(){
            cout << "Value of a: " << a << endl;
        }
};
int main(){
    operatorOL obj(5);
    cout << "Before incrementing: ";
    obj.display();
    ++obj;                                                       // Calls the overloaded ++ operator
    cout << "After incrementing: ";
    obj.display();
    --obj;                                                       // Calls the overloaded -- operator
    cout << "After decrementing: ";
    obj.display();
    return 0;
}