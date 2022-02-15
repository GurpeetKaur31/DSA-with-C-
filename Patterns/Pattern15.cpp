/*
     A 
     B C
     D E F
     G H I J
     K L M N O
                */

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >>n ;
    int i=1;
    char ch=64+n;
    char ch1=ch;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<< ch << " " ;
            j++;
            ch++;
        }
        ch=ch-(i+1);
        cout<<endl;
        i++;
    }
}