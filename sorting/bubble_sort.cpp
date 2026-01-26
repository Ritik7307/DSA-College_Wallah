// repeatedly swap two adjacent elements if in wrong order.

#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
           if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
           } 
        }
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// T.C.  O(n^2)
// S.C. O(1)

/*
Stable & Unstable Sort:
Stable Sort: doesnot disturb the order of elements with same value
// 40 30 10 20 30*
// 10 20 30 30* 40 // stable
// 10 20 30* 30 40 //unstable(order may or maynot change)
*/