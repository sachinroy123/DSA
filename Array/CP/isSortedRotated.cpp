#include<bits/stdc++.h>
using namespace std;

bool isSortedRotated(int a[],int n){
    int cnt=0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    if(a[n-1]<a[0]){
        cnt++;
    }
    cout<<cnt<<endl;
    return (cnt<=2);
}

int main(){
    int a[] ={5,6,1,2,3,4};
    int n= sizeof(a)/sizeof(int);
    cout<<isSortedRotated(a,n);
}