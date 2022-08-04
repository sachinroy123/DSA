#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n, int k){
    int s=0;
    int e = n-1;
    while(s<=e){
        int mid =   s + (e-s)/2;
        if(a[mid]==k){
            return mid;
        }
        else if(a[mid]>k){
            e = mid-1;
        }else{
            s= mid+1;
        }
    }
    return -1;
}


int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int n= sizeof(a)/sizeof(int);
    cout<<n<<endl;
    cout<<binarySearch(a,n,15);
}