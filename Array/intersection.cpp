#include<bits/stdc++.h>
using namespace std;

void intersectionArray(int a[],int n,int b[], int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j]){
            i++;
        }else if(a[i]>b[j]){
            j++;
        }else{
            cout<<a[i++]<<" ";
            j++;
        }
    }
}

int main()
{
        int a[] = {1,2,3,4};
    int b[] = {3,4,5,6,7,8,9};
    int n = sizeof(a)/sizeof(int);
    int m = sizeof(b)/sizeof(int);
    intersectionArray(a,n,b,m);
}