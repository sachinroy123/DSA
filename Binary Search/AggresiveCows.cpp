#include<bits/stdc++.h>
using namespace std;

bool isPossible(int a[],int n, int mid, int c){
    int cowCount=1;
    int lastpos = a[0];

    for(int i=0;i<n;i++){
        
        if(a[i]-lastpos >= mid){
            cout<<a[i]<<" "<<lastpos<<endl;
            cowCount++;
            if(cowCount==c){
                return true;
            }
            lastpos = a[i];
        }
    }
    return false;
}

int aggressiveCows(int a[],int n,int c){
    sort(a,a+n);
    int start=0;
    int end=0;
    for(int i=0;i<n;i++){
        end = max(end,a[i]);
    }
    int ans=-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(isPossible(a,n,mid,c)){
            ans =mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return ans;
}

int main(){
        int a[] ={4,2,1,3,6};
    int n=sizeof(a)/sizeof(int);
    cout<<aggressiveCows(a,n,2);
}