#include<bits/stdc++.h>
using namespace std;

void moveZeroes(int a[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            swap(a[i],a[j]);
            j++;
        }
    }
}

int main(){
    int a[] = {0,0,1,2,-9,0,0,0,3,4,5,0,0,6};
    int n= sizeof(a)/sizeof(int);
    moveZeroes(a,n);
    for(int i : a){
        cout<<i<<" ";
    }
}