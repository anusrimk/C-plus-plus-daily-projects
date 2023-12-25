// multiple heirarchy
#include <iostream>
using namespace std;

class A{
    public:
      int x;
      void Getx(){
        cout<<"Enter value of x: ";
        cin>>x;
      }
};
class B{
    public:
      int y;
      void Gety(){
        cout<<"Enter value of y: ";
        cin>>y;
      }
};
class C: public A, public B  //c is derived from a and b
{
    public:
      void sum(){
        cout<<"Sum is: "<< x+y;
      }
};

int main(){
    C obj1;
    obj1.Getx();
    obj1.Gety();
    obj1.sum();
    return 0;
    

}