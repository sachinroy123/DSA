#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row=3;
    int col=4;
    int a[][4] = {
                {1,2,3,4},
                {5,6,7,8},
                {1,2,3,4}
                };
    
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cin>>a[i][j];
    //     }
    // }

    cout<<"Matrix :"<<endl;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}