#include<iostream>
using namespace std;
int main(){
//    Negative Elements in 1D Array's
  int size;

  cout << "enter the array's size: " ;
  cin >> size;

  int arr[size];

  cout << "Enter array's element : "<< endl;
  for(int i=0; i< size; i++){
    cout << "a [" << i << "] = ";
    cin >> arr[i];
  }

  cout << "Negactive elements from an array : ";
  for(int i=0; i< size; i++){
    if (arr[i] < 0){
    cout << arr[i] << " ";  
    }
    
  }

    return 0;
}