#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter the value of n1,n2 and n3 :";
    cin>>n1>>n2>>n3;
    if(n1>n2 && n1>n2){
        cout<<n1<<" : is the greater number ";
    }else if(n2>n1 && n2>n3){
        cout<<n2<<" : is the greater number ";
    }else if(n3>n1 && n3>n2){
        cout<<n3<<" : is the greater number ";
    }else{
        cout<<n1<<" , "<<n2<<" , "<<n3<<" : is the equal number ";
    }
    return 0;
    
}