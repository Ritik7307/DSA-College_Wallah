// Given an array of integers 'a', move all the even integers at the beginning of the array followed by all he odd integers does not matter.Return any array that satisfies the condition.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l_ptr = 0;
    int r_ptr = n-1;
    while(l_ptr<r_ptr){
        if(v[l_ptr]%2==0){
            l_ptr++;
        }
        else if(v[r_ptr]%2!=0){
            r_ptr--;
        }
        else{
            swap(v[l_ptr],v[r_ptr]);
            l_ptr++;
            r_ptr--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}