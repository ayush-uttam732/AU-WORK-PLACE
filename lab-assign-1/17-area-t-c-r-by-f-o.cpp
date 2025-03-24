#include<iostream>
using namespace std;
int area(int r){
    cout<<3.14*r*r;
}
int area(int l,int b){
    cout<<l*b;
}
float area(float br,float h){
    cout<<(h*br)/2;
}

int main(){
    int r,l,b;
    float br,h;
    cout<<"Calculate area of circle "<<endl;
     cout<<"Enter the value of r : ";
     cin>>r;
    area(r);
    cout<<endl;

    cout<<"calculate area of rectangle "<<endl;
    cout<<"Enter the value of length and breadth :";
    cin>>l>>b;
    area(l,b);
    cout<<endl;

    cout<<"Calculate area of triangle "<<endl;
    cout<<"Enter the value of height and breadth : ";
    cin>>h>>br;
    area(h,br);
    cout<<endl;

    return 0;
}