#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int temp = a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]= a[j];
            j--;
        }
        a[j+1]= temp;
    }
}

int main(){
    int a[] ={1,48,5,7,2,0,3,6,4,5,8,45,2,4};
    int n= sizeof(a)/sizeof(int);
    insertionSort(a,n);
    for(int i : a){
        cout<<i<<" ";
    }
}