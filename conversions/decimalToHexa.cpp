#include<bits/stdc++.h>
using namespace std;

string  decimalToHexa(int n){
    int x=1;
    string ans="";
    while(n>=x){
        x=x*16;
    }
    x=x/16;
    while(x>0){
        int y = n/x;
        n = n-y*x;
        if(y>=10 && y<=15){
            char ch = y-10+'A';
            ans.push_back(ch);
        }else{
            ans = ans+to_string(y);
        }
            x=x/16;
    }
 return ans;
}

int main(){
cout<<decimalToHexa(1000);
}