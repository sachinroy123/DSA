#include<bits/stdc++.h>
using namespace std;

bool isValid(char ch){
    if( ( (ch>='a') && (ch<='z') ) || ((ch>='A') && (ch<='Z')) || ((ch>='0') && (ch<='9')) ){
        return true;
    }else{
        return false;
    }
}

char tolower(char ch){
    if(ch>='A' && ch<='Z'){
        return (ch-'A'+'a');
    }else{
        return ch;
    }
}

bool isPalindrome(string str){
    string temp;
    for(int i=0;i<str.length();i++){
        if(isValid(str[i])){
            temp.push_back(str[i]);
        }
    }
    cout<<temp<<endl;
    
    for(int i=0;i<temp.length();i++){
        temp[i]= tolower(temp[i]);
    }
    cout<<temp<<endl;

    int start =0;
    int end = temp.length()-1;
    while(start<end){
        if(temp[start] != temp[end]){
            return false;
        }
        start++;
        end--;
    }
  return true;
}
int main(){
  cout<<isPalindrome("Sachin@!@$@#%#$^%$&^12321@#$@#$nihcaS");
}