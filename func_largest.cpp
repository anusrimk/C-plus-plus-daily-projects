#include <iostream>
using namespace std;

inline void largest(int i, int n, int a, int arr[10]){
  // Store number entered by the user
  for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }

  // Loop to store largest number to arr[0]
  for(i = 1;i < n; ++i) {
    //a=arr[0] = arr[0]+arr[i];
    if(arr[0] < arr[i])
      arr[0] = arr[i];
     
    
  }
   
}

   


int main() {

  int i, n,a;
  int arr[10];

  cout << "Enter total number of elements(1 to 10): ";
  cin >> n;

  // Store number entered by the user
  for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }

  // Loop to store largest number to arr[0]
  for(i = 1;i < n; ++i) {
    //a=arr[0] = arr[0]+arr[i];
    if(arr[0] < arr[i])
      arr[0] = arr[i];
     
    
  }
   for (i=1; i<n; ++i)
  cout << endl << "Largest element = " << arr[0];
  //cout << endl << "Sum = " << a;
  /*for (i=1; i<n; ++i)
  cout << endl << "Largest element = " << arr[0];*/
  

  return 0;
}