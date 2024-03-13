//PROBLEM LINK:https://www.codechef.com/START125D/problems/NGRS
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        int y;
        cin>>x>>y;
        if(y<50 && x>=50){
            cout<<'F'<<endl;
        }
        else if(x<50){
            cout<<'Z'<<endl;
        }
        else{
            cout<<'A'<<endl;
        }
    }
}
