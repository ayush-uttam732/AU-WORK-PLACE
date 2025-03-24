#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    int sum;
    cout<<"Enter the value :";
    cin>>n;
    int temp=n;
    while(n!=0){
        sum=n%10;
        rev=rev*10+sum;
        n=n/10;

    }
    if(temp==rev){
        cout<<"this is a polindrome number ";
    }
    else{
        cout<<"This is not a polindrome number ";
    }
    cout<<rev;
}