#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<" Enter the character : ";
    cin>>a;
   if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ){
         cout<<"this is a vowel : "<<a;
   }else{
    cout<<"this is not a vowel ";
   }
   return 0;
}