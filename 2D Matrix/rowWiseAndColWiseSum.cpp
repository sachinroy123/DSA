#include<bits/stdc++.h>
using namespace std;

void rowWiseSum(int a[][4])
{

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum +=  a[i][j];
        }
        cout<<sum<<" ";
    }
}
void colWiseSum(int a[][4])
{
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<3;j++){
             sum +=  a[j][i];
        }
        cout<<sum <<" ";    
    }
}   

int main(){
            int a[][4] ={
                {1,2,3,4},
                {5,6,7,8},
                {1,2,3,4}
                };
    
    rowWiseSum(a);
    cout<<endl;
    colWiseSum(a);

}