#include<bits/stdc++.h>
using namespace std;

void  complimentNum(int n){
    int ans=0;
    int mask=0;
    int m=n;
    while(m>0){
        mask = (mask<<1)|1;
        m=m>>1;
    }

    ans = ~n & mask;
    cout<<ans;
}

int main(){
    complimentNum(5);
}