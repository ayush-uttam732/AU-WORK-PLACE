#include<iostream>
using namespace std;
class student{
    private:
    int rollNo;
    string name;
    public:
    void getStudent(int r, string n){
        rollNo = r;
        name = n;
    }
    void showStudent(){
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
    }
    
};
class college{
    private:
    string collegeName;
    string collegeAddress;
    public:
    void getCollege(string n, string a){
        collegeName = n;
        collegeAddress = a;
    }
    void showCollege(){
        cout<<"College Name: "<<collegeName<<endl;
        cout<<"College Address: "<<collegeAddress<<endl;
    }
};
class information:public student, public college{
};
int main(){
    information obj;
    obj.getStudent(101, "John");
    obj.getCollege("XYZ College", "Delhi");
    obj.showStudent();
    obj.showCollege();
    return 0;
}
 
