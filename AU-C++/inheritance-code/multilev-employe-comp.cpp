#include<iostream>
using namespace std;
class employee{
    private:
    int empId;
    string empName;
    public:
    void getEmployee(int id, string name){
        empId = id;
        empName = name;
    }
    void showEmployee(){
        cout<<"Employee ID: "<<empId<<endl;
        cout<<"Employee Name: "<<empName<<endl;
    }
};
class company{
    private:
    string companyName;
    string companyAddress;
    public:
    void getCompany(string name, string address){
        companyName = name;
        companyAddress = address;
    }
    void showCompany(){
        cout<<"Company Name: "<<companyName<<endl;
        cout<<"Company Address: "<<companyAddress<<endl;
    }
};
class information:public employee, public company{
    
};
int main(){
    information obj;
    obj.getEmployee(101, "John");
    obj.getCompany("XYZ Company", "Delhi");
    obj.showEmployee();
    obj.showCompany();
    return 0;
}