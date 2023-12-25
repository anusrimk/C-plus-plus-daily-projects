#include <iostream>
using namespace std;
class Demo
{
private:
int data;
public:
void setdata(int d)
{
    data = d;
}
void displaydata()
{
    cout<<"Data is:"<<data<<endl;
}
};
int main(){
    Demo s1,s2;
    s1.setdata(10);
    s2.setdata(15);
    s1.displaydata();
    s2.displaydata();
    return 0;
}