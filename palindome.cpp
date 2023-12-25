/*#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;
    for (int i=0; i<=num; i++){

        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
     
     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;

    cout<<"Enter String:";
    getline(cin,str);
    int n=str.length();
    int flag=0;
    for(int i=0;i<=n/2;i++)
    {
        if(str[i]!=str[n-i-1])
        {
            flag=1;
            break;
        }
        
    }
    if(flag==0)
        cout<<"Yes, it is a palindrome"<<endl;  
    else
        cout<<"No, it is not a palindrome"<<endl;
    return 0;                          
}
