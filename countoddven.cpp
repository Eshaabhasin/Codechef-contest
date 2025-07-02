//https://www.codechef.com/START193D/problems/CNTODDEVEN
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int counteven=0;
        int countodd=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                if(i%2==0){
                    counteven++;
                }
                else{
                    countodd++;
                }
            }
        }

        cout<<countodd<<" "<<counteven<<endl;
    }
	// your code goes here

}
