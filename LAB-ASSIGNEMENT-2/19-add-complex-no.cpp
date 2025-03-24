// 19=>  WRITE A PROGRAM TO ADD TWO COMPLEX NUMBER BY USING CONSTRUCTOR ....

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
        cout<<endl<<"The first complex number is: "<<reaL1<<" + "<<imag1<<"i"<<endl;
        cout<<"The second complex number is: "<<reaL2<<" + "<<imag2<<"i"<<endl<<endl;
        cout<<"The sum of two complex number is: "<<reaL1+reaL2<<" + "<<imag1+imag2<<"i"<<endl;
    }
};
int main(){
    int i1,i2,r1,r2;
    cout<<"Enter the real part of first complex number: ";
    cin>>r1;
    cout<<"Enter the imaginary part of first complex number: ";
    cin>>i1;    
    cout<<"Enter the real part of second complex number: ";
    cin>>r2;
    cout<<"Enter the imaginary part of second complex number: ";
    cin>>i2;
    complex c1(r1,i1,r2,i2);
    c1.display();
    return 0;
}