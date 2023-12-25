#include <iostream>
using namespace std;

inline int add(int x, int y=5, int r=6){

    //cout<<"Addition is: "<< x+y;
    int z;
    z=x+y+r;
    return z;
}
 
int main()
{
    int a,b,r,sum;
    cout<< "Enter value of a: "<<endl;
    cin>>a;

    /*cout<<"Enter value of b: "<< endl;
    cin>>b;*/

    sum= add(a);
    cout<<"Additon is:  "<< sum;
    return 0;
}