#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    int lcm;
    cout<<"ENter the value of n1 and n2 : ";
    cin>>n1;
    cin>>n2;
    for(int i=2; ;i++){
        if(i%n1==0 && i%n2==0){
            lcm=i;
            cout<<lcm;
            break;
        }
        
    }
    return 0;
}