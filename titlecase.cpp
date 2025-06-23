//https://www.codechef.com/practice/course/strings/STRINGS/problems/TITLECASE?tab=statement
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        for(int i=0;i<s.length();i++){
            if(i==0 || s[i-1] == ' '){
                s[i]=toupper(s[i]);
            }
            else if(isupper(s[i]) && (islower(s[i-1]) || islower(s[i+1]))){
                s[i]=tolower(s[i]);
            }
        }
        cout<<s<<endl;
    }
	// your code goes here

}
