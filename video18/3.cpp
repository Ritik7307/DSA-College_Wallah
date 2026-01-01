// Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

#include<bits/stdc++.h>
using namespace std;

void sortedSquaredArray(vector<int>&v){
    vector<int>ans;
    int l_ptr=0;
    int r_ptr = v.size()-1;
    while(l_ptr<=r_ptr){
        if(abs(v[l_ptr])<abs(v[r_ptr])){
            ans.push_back(v[r_ptr]*v[r_ptr]);
            r_ptr--;
        }else{
             ans.push_back(v[l_ptr]*v[l_ptr]);
             l_ptr++;
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sortedSquaredArray(v);

}