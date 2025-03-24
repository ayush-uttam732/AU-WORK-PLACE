#include<iostream>
using namespace std;
int opt;
int main(){
    int a,b,ans;
    float answer;
     cout<<"1: add, 2: sub, 3: mul,4: div : "<<endl;
     cin>>opt;
     switch (opt){
         case 1:
         cout<<"enter the value of a and b : ";
         cin>> a>>b;
         ans=a+b;
         cout<<"Answer is : "<<ans<<endl;
         break;

         case 2:
         cout<<"enter the value of a and b : ";
         cin>> a>>b;
         ans=a-b;
         cout<<"Answer is : "<<ans<<endl;
         break;

         case 3:
         cout<<"enter the value of a and b : ";
         cin>> a>>b;
         ans=a*b;
         cout<<"Answer is : "<<ans<<endl;
         break;

         case 4:
         cout<<"enter the value of a and b : ";
         cin>> a>>b;
         answer=a/b;
         cout<<"Answer is : "<<answer<<endl;
         break;

         default:{
            cout<<"Wrong choice ! ";
         }
     }
     return 0;
}
