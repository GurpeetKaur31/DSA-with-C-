/*
     A A A A A
     B B B B B
     C C C C C
     D D D D D
     E E E E E
                */

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >>n ;
    int i=1;
     char ch=65;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<< ch << " " ;
            j++;
        }
        ch++;
        cout<<endl;
        i++;
    }
}