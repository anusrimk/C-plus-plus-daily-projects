#include <iostream>

using namespace std;

int main(){
    int month , starting_day , days ;
    string months[12] = {"JANUARY" , "FEBRUARY" , "MARCH" , "APRIL" , "MAY" , "JUNE" , "JULY" , "AUGUST" , "SEPTEMBER" , "OCOTOBER" , "NOVEMBER" , "DECEMBER" };
    cout<<"Which month : ";
    cin>>month;

    if(month == 2){
        days = 28;
    }else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
        days = 31;
    }
    else{
        if(month > 12){
            cout<<"ERROR INPUT ";
            return 0;
        }
        days = 30;
    }

    cout<<"Starting day of the month (Monday - 1,Tuesday - 2,Wednesday - 3 ,Thursday - 4,Friday - 5 ,Saturday - 6 ,Sunday - 7)? ";
    cin>>starting_day;

    cout<<"\n\n           "<<months[month-1];
    cout<<"\n    M  T  W  T  F  S  S \n";
    cout<<"_____________________________\n";
    for(int i = 0 ; i < days ; i++){

        if(i == 0){
        for(int j = 0 ; j < starting_day ; j++)
        {
            cout<<"   ";
        }
        }
        if(i<9){
            cout<<"0"<<i+1<<" ";
        }
        else
            {cout<<i+1<<" ";}
        starting_day++;
        if(starting_day > 7){
            starting_day = 1;
            if(i<7){
                cout<<" ";
            }
            cout<<"|\n   |";
        }
    }
}