#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> a,int k){
    int n = a.size();
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        ans[(i+k)%n] =a[i];
    }
    return ans;
}

int main(){
    vector<int> a = {1,2,3,4,5,6,7,8,9};
    a=rotateArray(a,4);
    for(int i : a){
        cout<<i<<" ";
    }
}