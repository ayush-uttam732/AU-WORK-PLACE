#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter the year that you want to cheack leep year ir not : ";
    cin>>y;
    if(y%4==0){
        cout<<y<<" : is a leap year ";
    }
    else{
        cout<<y<<" : is not a leap year ";
    }
    return 0;
}