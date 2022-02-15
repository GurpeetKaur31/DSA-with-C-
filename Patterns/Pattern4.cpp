/*
     1234
     1234
     1234
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
        int j=3;
        while(j>0)
        {
            cout<< j ;
            j--;
        }
        cout<<endl;
        i++;
    }
}