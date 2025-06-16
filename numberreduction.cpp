//https://www.codechef.com/problems/RED23?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        while(true){
            if(x%2==0){
                x=x/2;
            }
            else if(x>3){
                x=x-3;
            }
            else{
                break;
            }
            
        }
        cout<<x<<endl;
    }
	// your code goes here
}
