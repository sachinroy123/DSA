#include<bits/stdc++.h>
using namespace std;

char toLower(char ch){
    if(ch>='A' && ch<='Z'){
        return (ch-'A'+'a');
    }else{
        return ch;
    }

}

bool palindrome(string str){
    int start=0;
    int end =str.length()-1;

    while(start<end){
        if(toLower(str[start]) != toLower(str[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}


using namespace std;

int main(){
    string str = "Sachhcas";
    cout<<palindrome(str)<<endl;
}