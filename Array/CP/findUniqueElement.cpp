#include<bits/stdc++.h>
using namespace std;

int uniqueEle(int a[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res = res^a[i];
    }
    return res;
}

int main()
{
    int a[] = {2,3,4,5,2,3,5,4,11 };
    int n = sizeof(a)/sizeof(int);
    cout<<uniqueEle(a,n);
}