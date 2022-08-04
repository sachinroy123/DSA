#include<bits/stdc++.h>
using namespace std;

void printPrime(int n){
    bool primes[n+1];
    memset(primes,true,sizeof(primes));
    for(int i=2;i*i<=n;i++){
        if(primes[i]==true){
            for(int j=i*i; j<=n;j=j+i){
                primes[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(primes[i]){
            cout<<i<<" ";
        }
    }

}


int main()
{
printPrime(50);
}