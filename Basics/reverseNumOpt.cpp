#include<bits/stdc++.h>
using namespace std;

int reverseNum(int n){
    int ans=0;
    while(n>0){
        int temp = n%10;
        if(ans<INT_MAX/10 || ans>INT_MIN/10)
        {
            ans = ans*10+temp;
        }
        n=n/10;

    }
    return ans;
}

int main(){
    cout<<reverseNum(456789)<<endl;
}