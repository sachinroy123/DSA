#include<bits/stdc++.h>
using namespace std;

char maxCharacter(string str){

    int count[26] = {0};
    for(int i=0;i<str.length();i++){
        int digit = str[i]-'a';
        count[digit]++;
    }

    int maxi=0;
    int j=0;
    for(int i=0;i<26;i++){
        if(count[i]>maxi){
            j=i;
            maxi=count[i];
        }
    }
    cout<<maxi<<endl;
    cout<<j<<endl;
    return (j+'a');
}


int main(){
    cout<<maxCharacter("sachinwwwwwwshakkkkya");
}