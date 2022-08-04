#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0)
    return b;

    return gcd(b%a,a);
}

int main()
{
    cout<<gcd(48,24)<<endl;;
    cout<<__gcd(48,24);
}