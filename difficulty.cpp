//https://www.codechef.com/problems/RATINGINPRAC?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d[n];
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        for(int i=1;i<n;i++){
            if(d[i]<d[i-1]){
                cout<<"NO"<<endl;
                flag=true;
                break;
            }
        }
         if(flag==false){
             cout<<"YES"<<endl;
         }
         
        // your code goes here
    }

}
