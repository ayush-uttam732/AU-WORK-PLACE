#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    int remender = 0;
    
    cout<<"Enter the number : ";
    cin>>n;
    int arm=n;
    while(n!=0){
        int remender =n%10;
        rev=rev*10+remender;
        n=n/10;
        // cout<<rev;
    }
    cout<<"reverse number is :"<<rev<<endl;
    if(rev==arm){
        cout<<n<<n<<"This is polindrome number \n ";
    }else{
        cout<<n<<"This is not a polindrome number ";
    }
    return 0;
}



//////////extra code