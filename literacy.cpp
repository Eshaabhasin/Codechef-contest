//PROBLEM LINK:https://www.codechef.com/problems/LITRATE
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int l,p;
        cin>>p>>l;
        int z;
        z=(l*100)/p;
        if(z>=75){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
	// your code goes here

}
