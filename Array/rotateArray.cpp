#include<bits/stdc++.h>
using namespace std;

void rotateArray(int a[],int n,int k)
{
    for(int i=0;i<k;i++)
    {
        swap(a[i],a[i+k%n]);
    }
}

int main()
{
    int a[] ={1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(int);
    int k=3;
    rotateArray(a,n,k);
    for(int i : a)
        cout<<i<<" ";
}