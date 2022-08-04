#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int ans=0;
    int x=1;

    while(n>0)
    {
        int last_digit = n%10;
        ans = ans + last_digit*x;
        x= x*2;
        n = n/10;
    }
    return ans;
}


int main()
{
    cout<<binaryToDecimal(1111);
}