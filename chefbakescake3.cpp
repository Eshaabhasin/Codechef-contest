//https://www.codechef.com/problems/BAKECAKE3?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int maxa=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>maxa){
                maxa=a[i];
            }
        }
        int maxprofit=0;
        for(int x=0;x<=maxa;x++){
            int profit=0;
            for(int i=0;i<n;i++){
                int sold=min(x,a[i]);
                profit+=50*sold-30*x;
            }
            if(profit>maxprofit){
            maxprofit=profit;
        }
        }
        
        cout<<maxprofit<<endl;
    }
    
	// your code goes here

}
