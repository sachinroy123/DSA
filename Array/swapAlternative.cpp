#include<bits/stdc++.h>
using namespace std;

void swapAlternative(int a[],int n)
{
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            swap(a[i],a[i+1]);
        }
    }
}


int main()
{
    int a[] = {1,2,3,4,5};
    swapAlternative(a,5);
    for(int i : a){
        cout<<i<<" ";
    }
}