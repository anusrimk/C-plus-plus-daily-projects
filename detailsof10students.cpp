#include <iostream>

using namespace std;

int main(){
    int arr[10] = {};
    int marks;

//to feed the values in the loop
    for (int i = 0 ; i < 10 ; i++){

        cout<<"Enter the marks of Roll No : "<<i+1<<"\n";
        cin>>marks;

        arr[i] = marks;
    }
// to print the values of loop 10 times
    for (int i = 0 ; i<10 ; i++){
        cout<<"Marks of Roll No. "<<i+1<<" : " << arr[i]<<"\n";
    }

    return 0;
}