// 20=>   TAKE INPUT FROM USER AND FIND CO-PRIME FACTOR OF THIS NUMBER .....

#include <iostream>
using namespace std;
class prime{
    int num;
    public:
    prime(int n){
        num=n;
    }
    void display(){
        cout<<"The coprime factors of "<<num<<" are: ";
        for(int i=2;i<num;i++){
            if(num%i==0){
                if(i%2!=0){
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
