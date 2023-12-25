/*#include <iostream>
using namespace std;

class StudData
{
    private:
        int rollno;
        string name;
    public:
       void SetData(int r, string n="Anusri"){
          rollno=r;
          name=n;
  
       }
       void ShowData(){
        cout<<"---------------------------\n";
        cout<<"Roll no: "<< rollno<< "\n";
        cout<< "Name: "<< name<<"\n";
        cout<<"---------------------------\n";
       
       }
       void SetDetails(){
        cout<<"Enter roll no: ";
        cin>> rollno;

        cout<<"Enter name: ";
        cin>>name;

       }

};
int main()
{
    
    StudData s1, s2, s3;
    s1.SetData(1);
    s1.ShowData();

    s2.SetData(2,"Romil\n");
    s2.ShowData();

    s2.SetDetails();
    s2.ShowData();

    return 0;
}*/

#include <iostream>
using namespace std;

class Student
{
    private:
       int rollno;
       string name;
    public:
        int rollno;
        string name;
        Student(int a){
        rollno=101;
        name= "\nAnusri";
        cout<<"\nDefault here ";
       }

       void GetData(){
        cout<<rollno;
        cout<<name;
       }      

};
int main(){
    Student s1;
    // s1.GetData();
    cout<<rollno


    return 0;
}