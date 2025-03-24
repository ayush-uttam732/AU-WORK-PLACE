#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    int sum;
    cout<<"Enter the value :";
    cin>>n;
    while(n!=0){
        sum=n%10;
        rev=rev*10+sum;
        n=n/10;

    }
    cout<<rev;
}