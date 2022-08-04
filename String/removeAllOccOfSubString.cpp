#include<bits/stdc++.h>
using namespace std;


// NOTE : if find (part) not get any string part in 
//        main string it return max value like 4569871235

string removeSubstring(string str, string part){

    while(str.find(part) <str.length() )
    {
        cout<<str.find(part)<<" "<<str.length()<<endl;
        str.erase(str.find(part),part.length());
    }

    return str;
}

int main(){
cout<<removeSubstring("daabcbaaabcbc","abc");

}