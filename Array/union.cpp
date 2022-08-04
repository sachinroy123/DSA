#include<bits/stdc++.h>
using namespace std;

void printUnion(int a[],int n,int b[],int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j]){
            cout<<a[i++]<<" ";
        }else if(a[i]>b[j]){
            cout<<b[j++];
        }else{
            cout<<a[i++]<<" ";
            j++;
        }
    }
    while(i<n){
        cout<<a[i++]<<" ";
    }
    while(j<m){
        cout<<b[j++]<<" ";
    }
}

int main()
{
    int a[] = {1,2,3,4};
    int b[] = {3,4,5,6,7,8,9};
    int n = sizeof(a)/sizeof(int);
    int m = sizeof(b)/sizeof(int);
    printUnion(a,n,b,m);
}