#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){
    int ans=1;
    for(int i=1;i<=30;i++){
        if(ans==n){
            return true;
        }
        if(ans <INT_MAX/2)
        ans = ans*2;
    }
}

int main(){
 cout<<isPowerOfTwo(120);
}