#include<iostream>
using namespace std;

int main(){
    int a;
    int count=0;
    cout<<"Enter any number: ";
    cin>>a;

   while(a>0)
   {
    a=a/10;
    count=count+1;
   }
   cout<<"Total number of digit:"<<count;
    return 0;
}