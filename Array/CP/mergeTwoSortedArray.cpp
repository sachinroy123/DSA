#include<bits/stdc++.h>
using namespace std;

vector<int> mergeTwoArray(int a[],int n, int b[],int m){
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }else{
            ans.push_back(b[j]);
            j++;
        }
    }
    while(i<n){
        ans.push_back(a[i]);
        i++;
    }
    while(j<m){
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}

int main()
{
    int a[]={1,3,5};
    int b[] = {2,4,6,8,10};
    int n = sizeof(a)/sizeof(int);
    int m = sizeof(b)/sizeof(int);
    vector<int>ans;
    ans = mergeTwoArray(a,n,b,m);
    for(int i : ans){
        cout<<i<<" ";
    }

}