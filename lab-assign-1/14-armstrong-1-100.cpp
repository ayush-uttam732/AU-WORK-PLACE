#include<iostream>
using namespace std;
int main(){
    int n;
    int remender = 0;
    int sum = 0;
   
    for(int i=1;i<=1000;i++){
        int temp=i;
        while(temp!=0){
            remender =temp%10;
            sum=sum+(remender*remender*remender);
            temp=temp/10;
        }
        if(sum==i){
            cout<<i<<" is an Armstrong number \n ";
        }
        sum=0;
    }
    return 0;

}