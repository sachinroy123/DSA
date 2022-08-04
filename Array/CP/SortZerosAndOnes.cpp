#include<bits/stdc++.h>
using namespace std;

void sortArray(int a[],int n){
    int left=0;
    int right=n-1;
    while(left<right){

    while(a[left]==0 && left<right){
        left++;
    }
      while(a[right]==1 && left<right){
        right--;
    }
        if(left<right){
        swap(a[left],a[right]);
        left++;
        right--;
    }
    }
}

int main(){
    int a[] ={0,0,1,1,0,0,1,0,0,1,1,0,1,0,1,1,1};
    int n= sizeof(a)/sizeof(int);
    sortArray(a,n);
    for(int i : a){
        cout<<i<<" ";
    }
}