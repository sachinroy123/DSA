#include<bits/stdc++.h>
using namespace std;

void sortArray(int a[],int n)
{
    int i,cnt0=0,cnt1=0,cnt2=0;
    for(i=0;i<n;i++)
    {
        switch (a[i])
        {
        case 0:
            cnt0++;
            break;
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        
        default:
            cout<<"nothing";
            break;
        }
    }
    // cout<<cnt0<<" "<<cnt1<<" "<<cnt2<<endl;
     i=0;
    while(cnt0>0)
    {
        a[i++]=0;
        cnt0--;
    }
    while(cnt1>0)
    {
        a[i++]=1;
        cnt1--;
    }
    while (cnt2>0)
    {
        a[i++]=2;
        cnt2--;
    }
    
}


int main()
{
  int a[] ={1,2,1,0,2,0,1,0,2,1,0,2,1};
  int n = sizeof(a)/sizeof(int);
  for(int i : a)
    cout<<i<<" ";

cout<<endl;
  sortArray(a,n);

    for(int i : a)
    cout<<i<<" ";

cout<<endl;

}