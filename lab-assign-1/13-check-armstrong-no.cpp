// 13=> C++ program to check Armstrong number.
#include <iostream>
using namespace std;
int main(){
    int n;
    int remender = 0;
    int sum = 0;
    cout<<"Enter the number : ";
    cin>>n;
    int arm=n;
    while(n!=0){
        remender =n%10;
        sum=sum+(remender*remender*remender);
        n=n/10;
    }
    if(sum==arm){
        cout<<arm<<" is an Armstrong number \n ";
    }else{
        cout<<arm<<" is not an Armstrong number ";
    }   
    return 0;
}
     