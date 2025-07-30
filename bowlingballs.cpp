//https://www.codechef.com/START197D/problems/BOWLBALL
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=x && a[i]<=y){
                count++;
            }
        }
        cout<<count<<endl;
    }
	// your code goes here

}
