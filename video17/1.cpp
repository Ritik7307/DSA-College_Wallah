// Pattern : Target Sum

// Find the total number of pairs in the Arraywhose sum is equal to the given value x

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter ele: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cout<<"Enter target:";
    cin>>target;
    int cnt = 0;
    // int lptr =0;
    // int rptr = n-1;
    // for(int i=0;i<n;i++){
    //     if(v[lptr]+v[rptr] == target){
    //         lptr++;
    //         rptr--;
    //         cnt++;
    //     }
    // }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==target){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;

}