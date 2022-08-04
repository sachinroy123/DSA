#include<bits/stdc++.h>
using namespace std;

void wave(int a[][4]){
    for(int i=0;i<4;i++){
        if(i&1){
            for(int j=2;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }else{
            for(int j=0;j<3;j++){
                cout<<a[j][i]<<" ";
            }
        }
    }
}

int main(){
              int a[][4] ={
                {1,2,3,4},
                {5,6,7,8},
                {11,12,13,14}
                };
                wave(a);
}