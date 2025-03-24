#include<iostream>
using namespace std;
class BCA{
    public:
    int rollNO;
    string name;
    static char section;
    // void get_data();
    // void display_data();
    
void get_data(){
    // for(int i=1;i<=3;i++){
        cout<<"Enter the roll no. of student "<<" : "<<endl;
        cin>>rollNO;
        cout<<"Enter name of student "<<" : "<<endl;
        cin>>name;
    // 
     section='B';
}
void display_data(){
    // for(int i=1;i<=3;i++){
        cout<<endl<<endl;
        cout<<"Roll number of student "<<" : "<<rollNO<<endl;
        cout<<"Name of student is "<<" : "<<name<<endl;
        cout<<"Section of student  "<<" : "<<section<<endl;
    // }
}
};

char BCA::section;

int main(){
    BCA stu;
    for(int i=1;i<=3;i++){
        stu.get_data();
        // cout<<"Number the student :"<<i<<endl<<endl;
    }

    for(int i=1;i<=3;i++){
        stu.display_data();
    }
    return 0;
}