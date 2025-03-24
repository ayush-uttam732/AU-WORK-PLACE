// WRITE A PROGRAM TO FIND PRIME FACTOR OF A NUMBER USING CONSTRUCTOR ....

#include <iostream>
using namespace std;
class prime{
    int num;
    public:
    prime(int n){
        num=n;
    }
    void display(){
        cout<<"The prime factors of "<<num<<" are: ";
        for(int i=2;i<num;i++){
            if(num%i==0){
                  int count=0;
                    for(int j=2;j<i;j++){
                        if(i%j==0){
                            count++;
                        }
                    }
                    if(count==0){
                        cout<<i<<" ";
                    }
                }
            }
        }   
    };                     
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n; 
    prime p(n);
    p.display();
    return 0;
}