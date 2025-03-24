// ADD COMPLEX NUMBER 

#include <iostream>
using namespace std;
class complex{
    int reaL1,imag1,reaL2,imag2;
    public:
    complex(int r1,int i1,int r2,int i2){
        reaL1=r1;
        imag1=i1;
        reaL2=r2;
        imag2=i2;
    }
    void display(){
       
        cout<<"The sum of two complex number is: "<<reaL1+reaL2<<" + "<<imag1+imag2<<"i"<<endl;
    }
};
int main(){
    int i1,i2,r1,r2;
    complex c1(3,4,1,2);
    c1.display();
    return 0;
}