// program to check whether a number is positive,negative or zero.......

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    if(n<0){
       cout<<n<<" : is a negative number";
    }else if(n>0){
      cout<<n<<": is a positive number ";
    }else{
        cout<<n<<" is the zero ";
    }
    return 0;
}


