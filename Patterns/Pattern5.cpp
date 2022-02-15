/*
     123
     456
     789
          */

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >>n ;
    int i=1;
    int a=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<< a <<" " ;
            a++;
            j++;
        }
        cout<<endl;
        i++;
    }
}