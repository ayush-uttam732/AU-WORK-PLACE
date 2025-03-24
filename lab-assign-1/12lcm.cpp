#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    int lcm=0;
    cout<<"Enter the value of n1 and n2 ";
    cin>>n1>>n2;

    if(n1>n2){
        for(int i=1;i<=n1;i++){
            if(n1%i==0 & n2%i==0){
                lcm=i;
            }
        }
        cout<<"LCM of "<<n1<<" AND "<<n2<<" is "<<lcm;


    }else if(n2>n1){
      for(int i=1;i<=n2;i++){
            if(n1%i==0 & n2%i==0){
                lcm=i;
            }
        }  
        cout<<"LCM of "<<n1<<" and "<<n2<<" is "<<lcm;
    };

}