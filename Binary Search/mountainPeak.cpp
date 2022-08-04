#include<bits/stdc++.h>
using namespace std;

int mountainPeak(int a[],int n){
    int start=0;
    int end = n-1;
    while(start<end){
        int mid = start+(end-start)/2;
        if(a[mid]<a[mid+1]){
            start= mid+1;
        }else{
            end = mid;
        }
    }
    return start;
}


int main(){
int a[] ={6,7,8,9,3,2,1};
int n= sizeof(a)/sizeof(int);
cout<<mountainPeak(a,n);
}