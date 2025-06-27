//https://www.codechef.com/practice/course/strings/STRINGS/problems/HAPPYSTR?tab=statement
#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
void solution(){
    string s;
    cin>>s;
    bool happy=false;
    for(int i=0;i<s.length()-2;i++){
        if(isVowel(s[i]) && isVowel(s[i-1]) && isVowel(s[i+1])){
            happy=true;
            break;
        }
    }
    if(happy){
        cout<<"Happy"<<endl;
    }
    else{
        cout<<"Sad"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}