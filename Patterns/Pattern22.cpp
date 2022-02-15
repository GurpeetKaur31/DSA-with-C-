/*
          *
         **
        ***
       ****
      *****  
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
        int k=n-i;
        while(k)
        {
        cout<< " ";
        k--;
        }
        int j=1;
        while(j<=i)
        {
            cout<<  j ;
            j++;
        }
        j=i-1;
        while(j>0)
        {
            cout<<  j ;
            j--;
        }
        cout<<endl;
        i++;
    }
}