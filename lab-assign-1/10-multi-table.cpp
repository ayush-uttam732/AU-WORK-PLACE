#include<iostream>
using namespace std;
 int main (){
    int n;
    int mul=1;
    cout<<"Enter the number which you want to print the table : ";
    cin>>n;
    for(int i=1;i<=10;i++){
        int mul=n*i;
        cout<<n <<" * "<<i<<" = "<<mul<<endl;
    }
    return 0;

 }