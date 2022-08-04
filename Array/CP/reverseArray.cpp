#include<bits/stdc++.h>
using namespace std;

int reverseArray(int a[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}

int main(){
    int a[] = {1,2,3,4,5,6};
    int n= sizeof(a)/sizeof(int);
    reverseArray(a,n);
    for(int i : a){
        cout<<i<<" ";
    }
}