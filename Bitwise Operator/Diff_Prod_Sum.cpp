#include<iostream>
using namespace std;

int subtractProductAndSum(int n) 
{
    int prod=1;
    int sum=0;
    
    while(n!=0)
    {
        int a=n%10;
        prod=prod*a;
        sum=sum+a;
        n=n/10;
    }
    int ans=prod-sum;
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number " <<endl;
    cin >> n ;

    cout << "Difference of the Product and Sum of Digits of a number is " << subtractProductAndSum(n) << endl;
}