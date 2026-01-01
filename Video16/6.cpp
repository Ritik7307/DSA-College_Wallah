// Check if the given array is sorted or not

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    bool sorted = true;
    for(int i=1;i<6;i++){
        if(v[i]<=v[i-1]){
           sorted = false;

        }  
    }
    cout<<sorted;
    return 0;
}