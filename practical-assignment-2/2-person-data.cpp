//18=> Write a C++ program to create a class called Person that has private member variables for name,
// age and country. Implement member functions to set and get the values of these variables

#include<iostream>
using namespace std;
class person {
    private:
    int age ;
    string name;
    string country;
    public:
    void set_data(){
        cout<<"Enter the name of the person: ";
        cin>>name;
        cout<<"Enter the age of the person: ";
        cin>>age;
        cout<<"Enter the country of the person: ";
        cin>>country;
    }
    void get_data(){
        cout<<"The name of the person is: "<<name<<endl;
        cout<<"The age of the person is: "<<age<<endl;
        cout<<"The country of the person is: "<<country<<endl;
    }
};
int main(){
    person p1;
    p1.set_data();
    p1.get_data();
    return 0;
}