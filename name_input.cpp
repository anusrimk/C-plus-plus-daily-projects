#include <iostream>
using namespace std;
int main()

{
    string name,emailid;
    string moblieno;
    cout<<"Enter your name:";
    getline(cin, name);
    
    cout<<"Enter your email:";
    getline(cin, emailid);

    cout<<"Enter your mobile no:";
    cin>> moblieno;

    cout<< "  "<< "\n";
    cout<< "  "<< "\n";
    cout<< "The name was: " << name << "\n" ;
    cout<< "The email id was: " << emailid << "\n";
    cout<< "The mobile no was: " << moblieno << "\n";

    return 0;

}