#include<iostream>
using namespace std;

int main(){
    char character='a';

    do{
        cout << character << " ";
        character+=4;
    }
    while(character<='z');

    cout<<endl;

    return 0;
}