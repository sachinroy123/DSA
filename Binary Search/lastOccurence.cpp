#include<bits/stdc++.h>
using namespace std;

int lastOccurence(int a[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=0;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(a[mid]==key){
            ans=mid;
            start=mid+1;
        }else if(a[mid]<key){
            start=mid+1;
        }else{
            end = mid-1;
        }
    }
    return ans;
}


int main(){
    int a[]= {1,1,2,2,2,2,2,3,4,5,6,7,7,7,7,7,8,9};
    int n = sizeof(a)/sizeof(int);

    cout<<lastOccurence(a,n,2);
}