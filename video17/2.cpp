// Pattern : Target Sum

// Find the total number of triplets in the Arraywhose sum is equal to the given value x

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
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(v[i]+v[j]+v[k]==target){
                cnt++;
            }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;

}