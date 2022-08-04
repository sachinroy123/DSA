#include<bits/stdc++.h>
using namespace std;

int findPivot(int a[],int n){
    int start=0;
    int end = n-1;
    
    while(start<end){
        int mid = start+(end-start)/2;
        if(a[0]<= a[mid]){
            start = mid +1;
        }else{
            end = mid;
        }
    }
    return start;
}

int main(){
    int a[] ={5,6,7,8,9,1,3,4};
    int n= sizeof(a)/sizeof(int);
    cout<<findPivot(a,n);
}