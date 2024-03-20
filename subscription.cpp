//PROBLEM LINK:https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n%6==0){
            cout<<n*x/6<<endl;
        }
        else{
            cout<<(n/6+1)*x<<endl;
        }
    }
	// your code goes here

}
