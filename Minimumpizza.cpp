//https://www.codechef.com/problems/MINPIZZA?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int z=n*x;
        if(z%4==0){
            cout<<z/4<<endl;
        }
        else{
            cout<<(z/4)+1<<endl;
        }
    }
	// your code goes here

}
