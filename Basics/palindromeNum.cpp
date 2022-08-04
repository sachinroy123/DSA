#include<bits/stdc++.h>
using namespace std;

void palindrome(int n)
{
    int m =n;
    int temp=0;
    while(m>0)
    {
        int l = m%10;
        temp = temp*10+l;
        m=m/10;
    }
    if(temp==n)
    cout<<"Palindrome"<<endl;
    else{
        cout<<"Not palindrome"<<endl;
    }
}

int main()
{
palindrome(128321);
}