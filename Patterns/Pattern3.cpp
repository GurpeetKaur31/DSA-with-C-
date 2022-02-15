/*
     1111111
     2222222
     3333333
               */
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >>n ;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<< j ;
            j++;
        }
        cout<<endl;
        i++;
    }
}