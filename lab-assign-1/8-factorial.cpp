#include<iostream>
using namespace std ;
int main(){
    int n;
    int fact=1;
    cout<<"Enter the number : ";
    cin>>n;
    if(n==0){
        cout<<"Factorial of "<<n<<" is 0 ";
    }
    else{
         for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial of "<<n<< " is "<<fact;
    }
    
    return 0;
};