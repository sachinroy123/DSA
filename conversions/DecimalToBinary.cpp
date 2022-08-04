#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){
    int x=1;
    int ans=0;
    while(x<=n){
        x= x*2;
    }
    x=x/2;

    while(x>0){
        int y = n/x;
        n = n-y*x;
        ans = ans*10+y;
        x = x/2;
    }
return ans;
}

int main(){
     cout<<decimalToBinary(16)<<endl;
}