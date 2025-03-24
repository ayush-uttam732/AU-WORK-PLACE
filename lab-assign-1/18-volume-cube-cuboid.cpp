// write a program to find the valume of cube cuboid by using function overloading ....

#include<iostream>
using namespace std;
int volume(int s){
    cout<<s*s*s;
}
int volume(int l,int b,int h){
    cout<<l*b*h;
}

int main(){
    int s,l,b,h;
    cout<<"Calculate the  volume  of cube "<<endl;
    cout<<"Enter the value of side of cube : ";
    cin>>s;
    volume(s);
    cout<<endl;

    cout<<"Calculate the volume of cuboid  "<<endl;
    cout<<"Enter the value of length , breadth and height  : ";
    cin>>l>>b>>h;
    volume(l,b,h);
    cout<<endl;
    return 0;
}
