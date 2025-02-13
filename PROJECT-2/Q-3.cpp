#include<iostream>
using namespace std;

int main(){
    int num,i,sum=0,firstDigit,lastDigit;
    cout<<"Enter a number: ";
    cin>>num;
    lastDigit=num%10;
    firstDigit=num;
    while(firstDigit>=10)
    {
        firstDigit=firstDigit/10;    
    } 
    sum=firstDigit+lastDigit;
    cout<<"The Sum of firstDigit and lastDigit: "<<sum;
    cout<<endl;
    return 0;
}