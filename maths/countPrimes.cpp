#include<bits/stdc++.h>
using namespace std;

int countPrime(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    int cnt=0;
    for(int i=2;i*i<n;i++){
            if(prime[i]==true){
                for(int j=i*i;j<=n;j=j+i){
                    prime[j]=false;
                }
            }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==true){
            cnt++;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return cnt;
}


int main(){
    cout<<countPrime(100)<<endl;
}