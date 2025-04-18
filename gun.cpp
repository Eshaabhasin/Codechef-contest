//https://www.codechef.com/problems/GMGM?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int a[n];
        int count=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            
            if(a[i]<=d && flag){
                count++;
                flag=false;
            }
            if(a[i]>d && !flag){
                count++;
                flag=true;
            }
            
        }
      cout<<count<<endl; 
        
    }
	// your code goes here
    
}
