#include<iostream>
using namespace std;
bool isAlphanumeric(char ch){
    if(ch>='0'&&ch<='9'||(tolower(ch)>='a'&& tolower(ch)<='z')){
        return true;
    }
    return false;
}
bool isPlaindrome(string s){
    int st=0,end=s.length()-1;
    while(st<end){
         if(isAlphanumeric(s[st])){
        st++;continue;
        }
        if(isAlphanumeric(s[end])){
            end--;continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }

    
    }
    return true;
}
int main(){
    string d="madam";
  
    cout<<  isPlaindrome(d)<<endl;
}