//https://www.codechef.com/problems/P2169?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cout<<'1';
            }
            else{
                cout<<'0';
            }
        }
        cout<<endl;
    }
	// your code goes here

}
