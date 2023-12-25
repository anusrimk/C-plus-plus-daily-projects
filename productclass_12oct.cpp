/*#include <iostream>
using namespace std;

class Product
{
   private:
     int productid;
     string name;
     float price;
     int quantity;
   public:
      void SetData(int pid, string n, float pr, int q)
      {

        productid=pid;
        name=n;
        price=pr;
        quantity=q;

      }

      void DisplayData()
      {
        cout<<"\n-------------------------------\n";
        cout<<"\nThe Product-ID is "<< productid;
        cout<<"\nThe name is: "<< name;
        cout<<"\nThe price is "<< price;
        cout<<"\nThe Quantity is "<< quantity;
        cout<<"\n-------------------------------\n";
      }

      ~Product()
      {
        cout<<"\nDestructor runned \n";
      }
};
int main()

{
    Product p1;

    int productid;
    string name;
    float price;
    int quantity;


        cout<<"Enter Product-id: ";
        cin>>productid;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Set price: ";
        cin>>price;
        cout<<"Enter quantity: ";
        cin>>quantity;

    p1.SetData(productid, name, price,quantity);
    p1.DisplayData();

// prod[i]=Product();

}*/

  

#include <iostream>
using namespace std;

class Product{
    private:
        int quantity;
        int productid;
        string productname;
        float price;
    public:

        Product(){
            quantity = 0;
            productid = 0000;
            price = 0.0;
            productname = "None";
        }

        Product(int id , string pname = "None", int st = 0, int pr = 0){
            productid = id;
            productname = pname;
            quantity = st;
            price = pr;
        }

        void setdetails(){
            cout<<"\n\n______________________________";
            cout<<"\nEnter the Product ID code: ";
            cin>>productid;
            cout<<"Product's Name : ";
            cin>>productname;
            cout<<"Price : ";
            cin>>price;
            cout<<"No. of Stocks : ";
            cin>>quantity;
        }

        void getdetails(){
            cout<<"\n_________________________________";
            cout<<"\nNAME : ";
            cout<<productname;
            cout<<"\nID : "<<productid<<"\n"<<"PRICE : "<<price<<"          STOCK : "<<quantity<<"\n";
        }
};


int main()
{
    int n , product_no;
    char y , x;

    cout<<"Enter the number of products: ";
    cin>>n;
    
    Product prod[n];

    for(int i = 0 ; i < n ; i++){
        cout<<"Details of Product "<<i+1;
        prod[i].setdetails();
    }

    access:

    cout<<"Which product you want to access? ";
    cin>>product_no;

    prod[product_no-1].getdetails();

    cout<<"\nAny changes?(y/n)";
    cin>>y;

    if(toupper(y) == 'Y'){
        prod[product_no].setdetails();
    }
    
    cout<<"Do you want to access details ?";
    cin>>x;
    if(toupper(x) == 'N'){
        return 0;
    }
    else{
        goto access;
    }
     
    return 0;
}