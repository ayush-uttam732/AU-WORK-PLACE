#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student{
    int RollNo;
    char N[20];
    long long int MobileNo;
    public:
    void get_student_data()
{
    cout<<"Enter the role number = ";
    cin>> RollNo;
     cout<<"Enter your name = ";
    cin>> N;
     cout<<"Enter your mobile number = ";
    cin>> MobileNo;

}
    void display_student_data()
    {
      cout<<"Student RollNo = " <<RollNo<<endl;
      cout<<"Student name = " <<N<<endl;
      cout<<"Student mobile number = "<<MobileNo<<endl;

    }
    

};

int main(){
    student stu;
    stu.get_student_data();
    stu.display_student_data();
    system("pause");
     return 0;

}