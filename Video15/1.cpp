// Size of an Array

#include<bits/stdc++.h>
using namespace std;
int main(){

    int array[]={1,2,3,4,13};
    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<endl;
    int n =sizeof(array)/sizeof(array[0]);


    // Traversing of Array
    
    // 1. for loop
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }cout<<endl;

    // 2. for-each loop
    for(int idx : array){
        cout<<idx<<" ";
    }
    cout<<endl;

    // 3. while loop
    int j=0;
    while(j<n){
        cout<<array[j]<<" ";
        j++;
    }

    return 0;
}