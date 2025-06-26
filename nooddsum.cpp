//https://www.codechef.com/problems/NODDSM?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 1) cnt1++;
            else cnt2++;
        }
        if(cnt1%2!=0){
            cout<<cnt2<<endl;
        }
        else{
            cout<<min(cnt2,cnt1/2)<<endl;
        }

    }
    return 0;
}


