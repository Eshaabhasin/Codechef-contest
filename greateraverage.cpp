//https://www.codechef.com/problems/AVGPROBLEM?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        float a,b,c;
        cin>>a>>b>>c;
        if((a+b)/2>c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here

}
