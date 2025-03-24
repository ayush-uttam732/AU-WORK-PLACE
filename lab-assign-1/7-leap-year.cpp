#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter the leap year : ";
    cin>>y;
    if((y%4==0 && y%100!=0) || ( y%400==0)){
        cout<<"This is a leap year ";
    }else{
        cout<<"This is not a leap year ";
    }
    return 0;
}
