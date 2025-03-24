#include<iostream>
using namespace std;
class student{
    private:
    int rollNo,mobile_no;
    string name;
   double cgpa;
   public:
    student(int r,int m,string n,double c){
rollNo=r;
mobile_no=m;
name=n;
cgpa=c;
cout<<rollNo<<endl<<name<<endl<<mobile_no<<endl<<cgpa;
    }
    
};
int main(){
    student (90,8957083890,"neeraj",8.9);
    return 0;
}
