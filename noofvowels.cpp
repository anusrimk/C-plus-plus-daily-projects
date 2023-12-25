#include <iostream>
using namespace std;

int main(){

    string a;
    int len;
    int l=0,i;

    cout<<"Enter a sentence: ";
    cin>>a;

    len=a.length();

    for (i=0; i<=len; i++)
    {
        if (a[i]=='A' ||  a[i]=='E' || a[i]=='I' ||a[i]=='O' || a[i]=='U'){
            l=l+1;
        }
        else if(a[i]=='a' ||  a[i]=='e' || a[i]=='i' ||a[i]=='o' || a[i]=='u'){
            l=l+1;
        }
    }
    cout<<"The number of vowels is: "<<l;

    return 0;



}