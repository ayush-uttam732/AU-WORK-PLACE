//5=> Write a C++ program to implement a class called Employee that has private
//member variables for name, employee ID, and salary. Include member functions to
//calculate and set salary based on employee performance

#include<iostream>
using namespace std;
class Employee{
    private:
    string name;
    int empId;
    int salary;
    public:
    void get_data(){
        cout<<"Enter employee name: ";
        cin>>name;
        cout<<"Enter employee ID: ";
        cin>>empId;    
    };
    void calculate_salary(){
        int rating;
        cout<<"Enter employee performance rating (1-10): ";
        cin>>rating;
        if(rating>=1 && rating<=10){
            salary = 5000 + (rating * 5000);
        }
        else{
            cout<<"Invalid performance rating. Salary not calculated."<<endl;
        }
    }
    void display_data(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee ID: "<<empId<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};
int main(){
    Employee e;
    e.get_data();
    e.calculate_salary();
    e.display_data();
    return 0;
}