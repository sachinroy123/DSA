#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(int a[],int n,int s){
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==s){
                vector<int>temp;
                temp.push_back(min(a[i],a[j]));
                temp.push_back(max(a[i],a[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    int a[]= {11,12,3,4,5,6,7,8,9,10,1,2};
    int n= sizeof(a)/sizeof(int);
    vector<vector<int>> ans= pairSum(a,n,12);

    for(auto i : ans){
        for(auto e : i){
            cout<<e<<" ";
        }
        cout<<endl;
    }

}