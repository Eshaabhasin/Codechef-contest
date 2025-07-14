//https://www.codechef.com/problems/BAKECAKE1
#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    if(m>n){
        cout<<-(m*30-n*50)<<endl;
    }
    else if(m==n){
        cout<<20*n<<endl;
    }
    else{
        cout<<(m*30-n*50)<<endl;
    }
	// your code goes here

}
