//  Given an array of integers of size n. answer q queries where you need to print the sum of values in a given range of indices from left to right (both included).

// Note:  The values of left and right in queries follow 1-based indexing

// l = 2
// r=6
// return a[2]+a[3]+a[4]+a[6]+a[5]

#include<bits/stdc++.h>
using namespace std;

// index -> 0 1 2 3 4 5 6 
// vector ->0 x1 x2 x3 x4 x5 x6

// 0 based indexing -> 0 ....... n-1
// 1 based indexing -> 1 ....... n


// 0 5 1 2 3 4
// 0 5 6 8 11 15 -> prefix sum array
// l = 1, r = 3
// ans = v[r] - v[l-1]
int main(){
    int n;
    cin>>n;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    // calc prefix sum array
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }

    int q;
    cout<<"Enter q queries: ";
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int ans = 0;
        // ans =  prefixSumArray[r] - predixSumArray[l-1]
        ans = v[r]-v[l-1];
        cout<<ans<<endl;
    }

}