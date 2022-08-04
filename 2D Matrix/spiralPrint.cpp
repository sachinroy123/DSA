#include<bits/stdc++.h>
using namespace std;

void spiralPrint(int a[][4]){
    int row =4;
    int col=4;

    int total=row*col;
    int count=0;

    int row_start=0;
    int row_end =row-1;
    
    int col_start=0;
    int col_end=col-1;

    while(count<total){
        for(int i=col_start;i<=col_end;i++){
            cout<<a[row_start][i]<<" ";
        }
        row_start++;
        count++;
        for(int j=row_start;j<=row_end;j++){
            cout<<a[j][col_end]<<" ";
        }
        col_end--;
        count++;
        for(int j=col_end;j>=col_start;j--){
            cout<<a[row_end][j]<<" ";
        }
        row_end--;
        count++;
        for(int j=row_end;j>=row_start;j--){
            cout<<a[j][col_start]<<" ";
        }
        col_start++;
        count++;

    }

}


int main(){
              int a[][4] ={
                {1, 2, 3, 4},
                {5, 6, 7, 8},
                {11,12,13,14},
                {15,16,17,18}
              };
            
    spiralPrint(a);
}