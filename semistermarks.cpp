#include <iostream>

using namespace std;

int main(){
    int sem1 , sem2 , sem3 , sem4 , sem5 , average; 

    cout<< " Semester - 1 Marks -   \n";
    cin >>sem1;

    cout<< " Semester - 2 Marks -   \n";
    cin >>sem2;
    cout<< " Semester - 3 Marks -   \n";
    cin >>sem3;
    cout<< " Semester - 4 Marks -   \n";
    cin >>sem4;
    cout<< " Semester - 5 Marks -   \n";
    cin >>sem5;

    average = (sem1+sem2+sem3+sem4+sem5)/5;

    if (sem1<60  || sem2<60 || sem3<60 || sem4<60 || sem5<60 || average<70){
        cout<<"You are not eligible";
    }else{
        cout<<"You are eligible";
    }



    return 0;
}
