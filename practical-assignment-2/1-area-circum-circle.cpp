// 17=> write a c++ program to implement a class that called circle that has private member variable for radius include
// member function 

#include<iostream>
using namespace std;
class circle{
      private:
        float radius;
        public:
      circle(float r){
          radius=r;
      }
      void area(){
        cout<<"The area of the circle is: "<<3.14*radius*radius<<endl;
      }
      void circum(){
        cout<<"The circumference of the circle is: "<<2*3.14*radius<<endl;
      }
};
int main(){
    float r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    circle c1(r);
    c1.area();
    c1.circum();
    return 0;
}