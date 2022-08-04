#include<bits/stdc++.h>
using namespace std;

bool isPossible(int a[],int n, int mid , int k){
    int painterCount=1;
    int work=0;
    for(int i=0;i<n;i++){
        if(work+a[i]<=mid){
            work+=a[i];
        }else{
            painterCount++;
            if(painterCount>k || a[i]>mid){
                return false;
            }
            work = a[i];
        }
    }
return true;
}

int painterAllocation(int a[],int n,int k){
    int start=0;
    int end=0;
    int ans=0;
    for(int i=0;i<n;i++){
        end += a[i];
    }
    while(start<=end){
        int mid = start + (end-start)/2;
        if(isPossible(a,n,mid,k)){
            ans=mid;
            end = mid-1;
        }else{
            start = mid +1;
        }
    }
    return ans;
}

int main(){
    int a[] ={5,5,5,5,5,5,15};
    int n=sizeof(a)/sizeof(int);
    cout<<painterAllocation(a,n,2);
}