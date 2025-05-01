//https://www.codechef.com/practice/course/two-pointers/SLIDINGWINDO/problems/SLDW0105?tab=statement
#include <bits/stdc++.h>
using namespace std;

long long findMinSumSubarray(int n, int k, vector<int>& arr) {
    int i=0;
    int j=0;
    long long sum=0;
    long long minimumsum=LLONG_MAX;
    while(j<n){
        sum+=arr[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            minimumsum=min(minimumsum,sum);
            sum-=arr[i];
            i++;
            j++;
        }
    }
    return minimumsum;
    // Write your code here
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << findMinSumSubarray(n, k, arr) << endl;
    return 0;
}