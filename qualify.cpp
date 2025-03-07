//https://www.codechef.com/problems/QUALIFY
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,a,y;
        cin>>x>>a>>y;
        int z=a*1+y*2;
        if(z>=x){
            cout<<"Qualify"<<endl;
        }
        else{
            cout<<"NotQualify"<<endl;
        }
    }
	// your code goes here

}