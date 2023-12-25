#include <iostream>

using namespace std;

int relation(int a , int b){
    if (a == b){
        return 0;
    }
    else if( a > b){
        return 1;
    }
    else if(a < b){
        return 2;
    }

    return 10;
}

int main(){
    int a , b , relate;


    cout<<"Enter the value of a : \n";
    cin>>a;

    cout<<"Enter the value of b : \n";
    cin>>b;

    relate=relation(a,b);

    if (relate == 0){
        cout<<"\nA & B is equal";
    }
    else if(relate == 1){
        cout<<"\nA is greater than B ";
    }
    else if (relate == 2){
        cout<<"\nA is smaller than B ";
    }
    
    return 0;
}