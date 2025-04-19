//https://www.codechef.com/practice/course/strings/STRINGS/problems/WORDLE?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s;
        cin>>t;
        for(int i=0;i<5;i++){
            if(s[i]==t[i]){
                cout<<"G";
            }
            else{
                cout<<"B";
            }
        }
        cout<<endl;
    }
	// your code goes here

}
