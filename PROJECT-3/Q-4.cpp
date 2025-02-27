#include<iostream>
using namespace std;

int main()
{
    int num = 5;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            cout<< "  ";
        }
        
        //increasing number
        for (int j = num - i; j <= num; j++ )
        {
            cout<<j<< " ";
        }
        
        //decreasing number
        for (int j = num - 1; j >= num - i; j--)
        {
            cout<<j<< "  ";
        }
        cout<<endl;
    }
    return 0;
}