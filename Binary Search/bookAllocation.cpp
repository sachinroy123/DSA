#include<bits/stdc++.h>
using namespace std;

bool isPossible(int a[],int n,int mid, int k){
    int page=0;
    int studentCount=1;
    for(int i=0;i<n;i++){
        if(page+a[i]<=mid){
            page = page + a[i];
        }else{
            page = a[i];
            studentCount++;
            if(studentCount>k || a[i]>mid){
                return false;
            }
        }
    }
    return true;
}

int bookAllocation(int a[],int n, int k){
    int start = 0;
    int end=0;
    for(int i=0;i<n;i++){
        end += a[i];
    }
    int ans=0;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(isPossible(a,n,mid,k)){
            ans =mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int a[] ={10,20,30,40};
    int n=sizeof(a)/sizeof(int);
    cout<<bookAllocation(a,n,2);
}