#include<iostream>
using namespace std;
int main(){
    int n1,n2,i;
    int arr[4]={2,4,56,6};
    cout<<"Enter array index :";
    cin>>i;
    try{
        if(i>=4)
        throw "Array out of bond index ";
        cout<<"Enter n1 :";
        cin>>n1;
        cout<<"Enter n1 :";
        cin>>n2;
        if(n2==0)
        throw 0;
        arr[i]=n1/n2;
        cout<<arr[i];
    }
    catch(const char *msg){
        cout<<"Error :"<<msg;
    }
    catch(int n){
        cout<<"Can not divided by : "<<n;
    }
    catch(...){
        cout<<"unexpected error";
    }
 return 0;
}