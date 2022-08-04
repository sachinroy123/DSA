#include<bits/stdc++.h>
using namespace std;
// largest sum continuous subarray

int largestSumArr(int a[],int n)
{
    int maxSum=0;
    int curSum=0;
    for(int i=0;i<n;i++)
    {
        curSum += a[i];
        if(curSum>maxSum){
            maxSum= curSum;
        }
        if(curSum<0){
            curSum=0;
        }

    }
    return maxSum;
}


int main()
{
    int a[] = {1,2,-33,-8,78,42,4,-99,10,90,10};
    int n =sizeof(a)/sizeof(int);
    cout<<largestSumArr(a,n);
}