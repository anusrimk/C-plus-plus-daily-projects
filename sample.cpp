/*#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a,b,c,d,e,f,g;

    cout<< "Enter number:";
    cin >>a;
    cout<< "Enter number 2:";
    cin >>b;
    c=a+b;
    d=a-b;
    e=a/b;
    f=int(a)%int(b); 
    g=a*b;

    cout<<"The respective results of "<< a << " and " << b <<" i.e " "\naddition "<< fixed<<setprecision(2)<< c<<" \nsubtraction " << fixed<<setprecision(2) << d << " \ndivision "<<fixed<<setprecision(2)<< e << " \nremainder " <<fixed<<setprecision(2) << f << " \nmultiply "<<fixed<<setprecision(2) <<g;
    return 0;
}*/


//program for prinitng numbers backward usiing for loop
/*#include <iostream>
using namespace std;

int main(){
     for(int n=10; n>0; n--){
        cout<<n<<",";
     }
     cout<<"FIRE!";
     return 0;
}*/

/*//program for prinitng numbers backward by while loop
#include <iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the starting number: ";
     cin>>n;
     while(n>0){
        cout<<n<<",";
        --n;
     }
     cout<<"Finish!";
     return 0;
}*/


//using incrementation operator

/*#include <iostream>

using namespace std;


int main(){

    int n , i = 0;

    cout<<"Enter no . : \n";
    cin>>n;

    while(i<n){
        cout<<"i";
        ++i;
    }

}*/

/*#include <iostream>
using namespace std;

int main(){
    
    unsigned long n; // can try with int or float
    do{
        cout<<"Enter number(0 to end): ";
        cin>>n;
        cout<<"You entered: "<<n<<"\n";
    }
    while(n!=0);
    return 0;
}*/

#include <iostream>
using namespace std;
 
int main(){
    int a=50;
    int b=2;
    int c;

    if (a&&b){
        cout<<"1-Condition is true "<< endl;
    } 
    if (a||b){
        cout<<"2-Condition is true "<< endl;
    }
    // after changing the value of a an b
    a=4;
    b=60;

    if (a&&b){
        cout<<"3-Condition is true "<< endl;
    } else{
        cout<<"4- Condition is not true "<< endl;
    }
    if (!(a&&b)){
        cout<<"5-Condition is true "<< endl;
    return 0;
    }
}

