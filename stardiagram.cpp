 /*#include <iostream>
 using namespace std;

 int main(){
    int n, i, j;
    
    cout<< "Enter the number of lines for the pyramid:";
    cin>> n;

    for(i=0; i<n; i++){
        
        for (j=0; j<=i; j++){
            cout<<i;
        }
        cout<<"\n";
    }
   return 0;

 }*/

 #include <iostream>
 using namespace std;

 int main(){
    int n, i, j;
    
    cout<< "Enter the number of lines for the pyramid:";
    cin>> n;

    for(i=0; i<n; i++){
        
        for (j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
   return 0;

 }

 