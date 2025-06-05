#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of a : ";
    cin>>b;
    try{
        if(b==0)
        throw 0;
        cout<<a/b;
    }catch(int err){
      cout<<"A is not divided by "<<err;
    }
    return 0;
}