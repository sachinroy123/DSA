#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n){
    int start =0;
    int end = n;
    int ans=0;
    while(start<=end){
        int mid = start+(end-start)/2;
        int square = mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            ans=mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return ans;
}
double morePrecision(int tempSol , int n, int precision){
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<precision;i++){
        factor= factor/10;
        for(double f = ans; f*f<n; f = f+factor){
            ans =f;
        }
    }
    return ans;
}

int main(){
    int n=37;
    int tempSol = squareRoot(n);
    cout<<morePrecision(tempSol,n,3);

}