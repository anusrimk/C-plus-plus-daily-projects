/*#include <iostream>
using namespace std;

void callbvalue(int a, int b)
{
    int z=a;
    int a=b;
    int b=z;
}
 void callbyreference(int a int b);
{

}

int main(){
     
    int a,b;
    cout<<"Enter value for a: \n";
    cin>>a;

    cout<<"Enter value for b: \n";
    cin>>b;

    cout<<"The characters after swapping: "<< a<< "and"<< b << "is"<< callbvalue();
    
    return 0;
}*/

#include <iostream>
using namespace std;


void callbyvalue(int a , int b)
{
    int z = a;
    a = b;
    b = z;
    cout<<"Using Value : \nValue of a : "<<a<<"\nValue of b : "<<b<<"\n";
    
}

void callbypointer(int *a , int * b){
    int z = *a;
    *a = *b;
    *b = z;
    cout<<"Using Pointer : \nValue of a : "<<*a<<"\nValue of b : "<<*b<<"\n";
    
        
}

void callbyrefrence(int &a , int &b){
    int z = a;
    a = b;
    b = z;
    cout<<"Using refrence : \nValue of a : "<<a<<"\nValue of b : "<<b<<"\n";

}

int main (){

    int a , b , x , y;

    cout<<"Enter value of a : \n";
    cin>>a;

    cout<<"Enter value of b : \n";
    cin>>b;


    x = a;
    y = b;
    callbyvalue(a,b);
    callbyrefrence(a,b);
    callbypointer(&x,&y);

    return 0;
}