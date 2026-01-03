// Pattern : Prefix Sum

// Given an integers array 'a' ,return the prefix sum/running sum in the same array witthout creating a new array. 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}