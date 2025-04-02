// 6=> Write a C++ program to implement a class called Student that has private member
//variables for name, class, roll number, and marks. Include member functions to
//calculate the grade based on the marks and display the student's information.

#include <iostream>
using namespace std;
class student{
    private:
        string name;
        string className;
        int rollNumber;
        float marks;
    public:
        void setData(string n, string c, int r, float m){
            name = n;
            className = c;
            rollNumber = r;
            marks = m;
        }
        char calculateGrade(){
            if(marks >= 90){
                return 'A';
            } else if(marks >= 80){
                return 'B';
            } else if(marks >= 70){
                return 'C';
            } else if(marks >= 60){
                return 'D';
            } else {
                return 'F';
            }
        }
        void displayInfo(){
            cout << "Name: " << name << endl;
            cout << "Class: " << className << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;
            cout << "Grade: " << calculateGrade() << endl;
        }
};
int main (){
    student s1;
    string name, className;
    int rollNumber;
    float marks;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter class: ";
    cin >> className;
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter marks: ";
    cin >> marks;

    s1.setData(name, className, rollNumber, marks);
    s1.displayInfo();

    return 0;
}
