#include<bits/stdc++.h>
using namespace std;

// simple  T(n) = O(nlogn)
// int kthSmallest(int a[],int n,int k)
// {
//     sort(a,a+n);
//     return a[k-1];
// }

// using set 
int  kthSmallest1(int a[],int n,int k)
{
    set<int>s(a,a+n);
    set<int>::iterator itr = s.begin();
    advance(itr,k-1);
    for(int i : s)
        cout<<i<<" ";
        return *itr;
      
}
int kthSmallest2(map<int,int> m, int k)
{
    int freq=0;
    for(auto i=m.begin(); i != m.end(); i++)
    {
        freq += i->second;
        if(freq>=k)
        return i->first;
    }
    return -1;

}

int main()
{
  int a[] = {1,1111,1,1,1,1,1,22,3,5,42,5,10,2,33,6,58,};
  int n= sizeof(a)/sizeof(int);
//   cout<<kthSmallest(a,n,3)<<endl;
int k=3;
cout<<kthSmallest1(a,n,k)<<endl;

map<int,int>m;
for(int i : a)
    m[i] += 1;

cout<<kthSmallest2(m, k)<<endl;

}