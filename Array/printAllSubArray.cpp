#include<bits/stdc++.h>
using namespace std;

void subArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
}


int main()
{   
    int a[]= {1,2,3,4};
    int n = sizeof(a)/sizeof(int);
    subArray(a,n);


}