#include<bits/stdc++.h>
using namespace std;

string toLower(string str){
    int start=0;
    int end = str.length()-1;
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i]-'A' +'a';
        }
        start++;
        end--;
    }
    return str;
}

int main(){
    string str="SaCHiN";
    cout<<toLower(str)<<endl;
}