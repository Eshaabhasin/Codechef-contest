#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        string s;
        cin>>s;
        int countc=0;
        int countd=0;
        int countn=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='C'){
                countc++;
            }
            else if(s[i]=='N'){
                countn++;
            }
            else{
                countd++;
            }
        }
        int scorec=countc*2+countd*1;
        int scorechef=countn*2+countd*1;
        if(scorec>scorechef){
            cout<<60*x<<endl;
        }
        else if(scorec<scorechef){
            cout<<40*x<<endl;
        }
        else{
            cout<<55*x<<endl;
        }
    }
    
	// your code goes here

}