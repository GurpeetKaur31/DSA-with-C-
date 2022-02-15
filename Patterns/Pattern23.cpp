/*
        1
       121
      12321
     1234321 
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
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        int k=n-i;
        while(k)
        {
            cout<< "*";
            k--;
        }
        k=n-i;
        while(k)
        {
            cout<< "*";
            k--;
        }
        j=i;
        while(j>=1)
        {
            cout<< j;
            j--;
        }
        cout<< endl;
        i--;
    }
    
}