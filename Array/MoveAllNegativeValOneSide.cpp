#include<bits/stdc++.h>
using namespace std;

void moveNegativeVal(int a[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0){
            swap(a[i],a[j]);
            j++;
        }
    }
}

int main()
{
    int a[] ={-1,2,5,4,-5,-8,-7,5,4,2,-7};
    int n = sizeof(a)/sizeof(int);
    moveNegativeVal(a,n);
    for(int i : a)
        cout<<i<<" ";
}