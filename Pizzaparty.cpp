//https://www.codechef.com/problems/PIZZAPARTY
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int z=(a+1)*4+b*3;
    int k=z/8;
    if(z%8==0){
        cout<<k<<endl;
    }
    else{
        cout<<k+1<<endl;
    }
   
	// your code goes here

}
