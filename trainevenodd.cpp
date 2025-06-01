//https://www.codechef.com/problems/TRAINEVOD?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int maxevensum=0;
        int maxoddsum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i+=2){
            maxevensum+=a[i];
        }
        for(int i=1;i<n;i+=2){
            maxoddsum+=a[i];
        }
        cout<<max(maxoddsum,maxevensum)<<endl;
    }
	// your code goes here

}
