#include <iostream>
using namespace std;

int main() {
    int a, fact =1;

    cout<<"Enter the factorial for a number:\n";
    cin>> a;

    while (a>1){

        fact=fact*a;
        a--;

    }
    cout<< fact;
    return 0;   
}
   