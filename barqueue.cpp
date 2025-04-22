//https://www.codechef.com/problems/QBGI?tab=statement
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int girl=0;
        int boy=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                boy++;
            }
            else{
                girl++;
            }
            ans++;
            if(boy>2*girl){
                break;
            }
        }
        cout<<ans<<endl;
    }
	// your code goes here

}
