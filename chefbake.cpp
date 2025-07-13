//https://www.codechef.com/START194D/problems/BAKECAKE2
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int cost=0;
        for(int i=0;i<n;i++){
            if(b[i]<a[i]){
                cost+=a[i]-b[i];
            }
         
        }
        cout<<cost<<endl;
        
    }
	// your code goes here

}