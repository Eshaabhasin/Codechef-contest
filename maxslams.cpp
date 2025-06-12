//https://www.codechef.com/problems/MAXSLAM?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    int z;
    z=(25-x);
    if(z%4==0){
        cout<<z/4<<endl;
    }
    else{
        cout<<(z/4)+1<<endl;
    }
	// your code goes here

}
