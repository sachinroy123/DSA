#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int a[],int n)
{
    int x1=1;
    int x2=0;
    for(int i=2;i<n;i++){
        x1 = x1^i;
    }
    for(int i=0;i<n;i++){
        x2= x2^a[i];
    }
    return x1^x2;
}

int main()
{
    int a[] = {1,2,3,4,4,5,6};
    int n = sizeof(a)/sizeof(int);
    cout<<findDuplicate(a,n);


}