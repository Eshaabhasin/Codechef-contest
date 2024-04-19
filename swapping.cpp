//https://www.codechef.com/problems/SWMA
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int a=(x%10)*10+(x/10);
        int b=(y%10)*10+(y/10);
        if(x>y || a>b || a>y || x>b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
	// your code goes here

}
