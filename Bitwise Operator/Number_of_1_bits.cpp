#include<iostream>
using namespace std;

int hammingWeight(uint32_t n) 
{
    int count=0;
    while(n!=0)
    {
        int a=n%10;
        if(a&1)
        {
            count++;
        }
        n=n/10;;
    }
    return count;
}

int main()
{
    uint32_t n;

    cout << "Enter a number " << endl;
    cin >> n;
    
    cout << "Number of 1 bits are " << hammingWeight(n) <<endl;
}