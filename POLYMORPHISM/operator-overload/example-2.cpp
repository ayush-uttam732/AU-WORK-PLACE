#include<iostream>
using namespace std;
class op_ol{
        public:
        int a,b;
    public:
    op_ol(int x,int y){
        a=x;
        b=y;
    }
  };
  op_ol operator+(op_ol obj1,op_ol obj2){
        op_ol temp(8,9);
        temp.a=obj1.a+obj2.a;
        temp.b=obj1.b+obj2.b;
        return temp;
    }
int main(){
    op_ol obj1(10,20),obj2(30,40);
    op_ol obj3=obj1+obj2; // operator overloading
    cout<<obj3.a<<endl<<obj3.b;
    return 0;
}