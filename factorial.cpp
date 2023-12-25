// Program to the factorial of a number 14 sept 23

#include <iostream>
using namespace std;

int main() {
    int number;
    long factorial= 1.0;

    cout<<"Enter a number: ";
    cin>> number;

    if (number<0)
        cout<<"Invaid input, factorial of negative number doesnt exist";
    if (number==0)
        cout<<"The factorial of 0 is 0";
    else {
        for(int i=1; i <= number; ++i) {   
            factorial *=i ;
        }
        cout<<"Factorial of" << number << "is :" << factorial;
        }
}