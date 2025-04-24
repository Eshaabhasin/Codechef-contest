#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b=n-1;
        int c=n-2;
        int z=n+b+c;
        int maximum=max({n,b,c});
        if(2*maximum <z){
            cout<<z<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
	// your code goes here

}
