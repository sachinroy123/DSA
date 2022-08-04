#include<bits/stdc++.h>
using namespace std;

int searchKey(int a[][4],int key){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]==key){
                return 1;
            }
        }
    }
    return -1;
}

int main()
{
        int a[][4] = {
                {1,2,3,4},
                {5,6,7,8},
                {1,2,3,4}
                };
    int key=77;
    cout<<searchKey(a,key);
}