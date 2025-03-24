#include<iostream>
using namespace std;
class student {
    private:
    int roll;
    int marks;
    public:
    void get_data(){
        roll=1;
        marks=100;
    }
    void display_data(){
        cout<<"Roll no : "<<roll<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};
class show:public student{
    public:
    void show_data(){
        cout<<"I am a derived class"<<endl;
    }
};
int main(){
      show obj;
        obj.get_data(); 
        obj.display_data();
        obj.show_data();
        return 0;
}