#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    if(n%2==0){
        cout<<n<<" : this is a even number ";
    }else{
        cout<<n<<" : this is a odd number ";
    }
    return 0;
}