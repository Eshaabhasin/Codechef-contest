//https://www.codechef.com/practice/course/arrays/ARRAYS/problems/DISCOUNTT
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        int sum=0;
        int discountsum=0;
        int discount;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]>y){
                discount=a[i]-y;
            }
            else{
                discount=0;
            }
            discountsum+=discount;
        }
       
        if(sum>discountsum+x){
            cout<<"COUPON"<<endl;
        }
        else{
            cout<<"NO COUPON"<<endl;
        }
        // your code goes here
    }

}