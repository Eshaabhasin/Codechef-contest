//https://www.codechef.com/practice/course/arrays/ARRAYS/problems/OPMIN?tab=statement
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[0]!=a[i]){
                count+=1;
            }
        }
        cout<<count<<endl;
    }
}