// CPP program to find if x is a
// perfect square.

#include<iostream>
using namespace std;

int main()
{
    int i, number, flag=0;

    cout<<"Enter a number: ";
    cin>>number;

    if(number == 1 || number == 0){
        cout<<("d is a Perfect Square.", number);
        flag=1;
    }

    for(i = 2; i <= number/2; i++) // for factors of a given number
    {
        if(number == i*i) // for the factorials
        {
            cout<<("d is a Perfect Square.", number);
            flag=1;
            break;
        }
    }
    if(flag == 0)
        cout<<("d is not a Perfect Square\n", number);

    return 0;
}