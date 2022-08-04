#include<bits/stdc++.h>
using namespace std;

int octalToDecimal(int n){
    int x=1;
    int ans=0;
    while(n>0){
        int last_digit=n%10;
        ans = ans + x*last_digit;
        x = x*8;
        n = n/10;
    }
    return ans;
}

int main(){
cout<<octalToDecimal(1645);
}