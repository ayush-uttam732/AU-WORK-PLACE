//19 => Write a C++ program to create a class called Car that has private member variables
// for company, model, and year. Implement member functions to get and set these  variables.
#include<iostream> 
using namespace std;
class A{
    private:
    string company;
    string model;
    int year;
    public:
    void get_data(){
        cout<<"Enter the company name : "<<endl;
        cin>>company;
        cout<<"Enter the model name : "<<endl;
        cin>>model;
        cout<<"Enter the year of manufacture : "<<endl<<endl;    ;
        cin>>year;
    }
    void set_data(){
        cout<<"Company name : "<<company<<endl;
        cout<<"Model name : "<<model<<endl;
        cout<<"Year of manufacture : "<<year<<endl;
    }
};
int main(){
    A obj;
    obj.get_data();
    obj.set_data();
    return 0;
}