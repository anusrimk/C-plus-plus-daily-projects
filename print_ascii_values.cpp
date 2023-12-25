//upper case ascii value
#include<iostream>
using namespace std;
int main()
{
char arr[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
for(int i =0; i<26; i++)
{
    cout << arr[i]<<"-"<<(int)arr[i]<<endl;
}


return 0;
}