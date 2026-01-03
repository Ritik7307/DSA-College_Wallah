//  Check if we can partition the array into two subarrays with equal sum . More formally , check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.

#include<bits/stdc++.h>
using namespace std;
bool checkPrefixSuffixSum(vector<int> &v){
    int total= 0;
    for(int i=0;i<v.size();i++){
        total+=v[i];
    }
    int prefix_sum = 0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        int suffix_sum = total-prefix_sum;

        if(suffix_sum==prefix_sum){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<checkPrefixSuffixSum(v)<<endl;
}