#include<iostream>
using namespace std;
int main(){
 int i,j;
 for(i=1;i<=6;i++){
    for(j=1;j<=5;j++){
        if(i==1 || i ==3 ||j==1 || (i==2 && j==5))
        {
            cout<<" * ";
        }
        else{
            cout<<"   ";
        }
    }
    cout<<endl;
 }
}