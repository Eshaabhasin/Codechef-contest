//https://www.codechef.com/problems/RECENTCONT?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++){
             string s;
              cin>>s;
            if(s=="START38"){
                sum1+=1;
            }
            else{
                sum2+=1;
            }
        }
        cout<<sum1<<" "<<sum2<<endl;
    }
	// your code goes here

}