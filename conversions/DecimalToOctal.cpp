#include<bits/stdc++.h>
using namespace std;

int decimalToOctal(int n){
    int x=1;
    int ans=0;

    while(n>=x){
        x=x*8;
    }
    x=x/8;

    while(x>0){
        int y = n/x;
        n = n-y*x;
        ans = ans *10+y;
        x=x/8;
    }
    return ans;
}


int main()
{
    cout<<decimalToOctal(100)<<endl;
}