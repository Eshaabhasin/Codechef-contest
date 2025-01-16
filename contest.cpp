//LINK https://www.codechef.com/problems/BIG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max=-1;
        for(int i=0;i<n;i++){
            if(a[i]>max){
                cout<<1<<" ";
                max=a[i];
            }
            else{
                cout<<0<<" ";
            }
        }
    }
	// your code goes here

}
