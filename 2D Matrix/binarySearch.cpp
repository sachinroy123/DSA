#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int a[][4] , int target){
    int row=4;
    int col=4;

    int total=row*col;
    int start=0;
    int end=total-1;

    while(start<=end){
        int mid = start+(end-start)/2;
        int ele = a[mid/col][mid%col];
        if(ele==target){
            return true;
        }
        else if(ele<target){
            start= mid+1;
        }else{
            end = mid-1;
        }
    }

return false;
}

int main(){
          int a[][4] ={
                {1, 2, 3, 4},
                {5, 6, 7, 8},
                {11,12,13,14},
                {15,16,17,18}
              };
            
    cout<<binarySearch(a,111);

}