//https://www.codechef.com/problems/BESTMOVIE?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cost=INT_MAX;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a>=7){
                if(b<cost){
                    cost=b;
                }
            }
        }
        if(cost==INT_MAX){
            cout<<"-1"<<endl;
        }
        else{
            cout<<cost<<endl;
        }
    }
	// your code goes here

}
