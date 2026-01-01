//  To take input in Array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter ele: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    for(int idx:arr){
        cout<<idx<<" ";
    }
    return 0;
}