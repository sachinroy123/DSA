#include<bits/stdc++.h>
using namespace std;

string replaceWith(string str,string s){
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp = temp+s;
        }else{
            temp= temp+str[i];
        }
    }
    return temp;
}

int main(){
    cout<<replaceWith("this is sachin","@%@");
}