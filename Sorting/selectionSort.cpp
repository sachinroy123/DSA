#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[],int n){
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
    }
   }
}

int main(){
    int a[] ={1,48,5,7,2,0,3,6,4,5,8,45,2,4};
    int n= sizeof(a)/sizeof(int);
    selectionSort(a,n);
    for(int i : a){
        cout<<i<<" ";
    }
}