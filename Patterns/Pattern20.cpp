/*
        * * * * * 
        * * * *
        * * *
        * *
        *
                    */

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >>n ;
    int i=n;
    while(i>=1)
    {
        int k=n-i;
        while(k)
        {
            cout << " ";
            k--;
        }
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }
}