//https://www.codechef.com/START178D/problems/FOODBAL
#include <bits/stdc++.h>
using namespace std;

int main() {
    int f1,p1,f2,p2;
    cin>>f1>>p1>>f2>>p2;
    int z=abs(f1-p1);
    int k=abs(f2-p2);
    if(z<k){
        cout<<"First"<<endl;
    }
    else if(k<z){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"Both"<<endl;
    }
	// your code goes here

}
