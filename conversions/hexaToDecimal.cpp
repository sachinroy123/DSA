#include<bits/stdc++.h>
using namespace std;

int HexaToDecimal(string str)
{
    int ans=0;
    int x=1;
    int n = str.size();
    for(int i=n-1;i>=0;i--){
        if(str[i]>='0' && str[i]<='9'){
            ans = ans + x*(str[i]-'0');
        }
        else if(str[i]>='A' && str[i]<='F'){
            ans = ans + x*(str[i]-'A'+10);
        }
        x= x*16;
    }
return ans;
}

int main(){
    cout<<HexaToDecimal("3A5");
}