#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    int a[] ={1,48,5,7,2,0,3,6,4,5,8,45,2,4};
    int n= sizeof(a)/sizeof(int);
    bubbleSort(a,n);
    for(int i : a){
        cout<<i<<" ";
    }
}