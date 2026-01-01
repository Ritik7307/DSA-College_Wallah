// Search if a given element is present in an array or not. If it is not present then return -1 else return the index

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,7,3,4,98,76};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Element in array :";
    cin>>k;
    int ans =-1;
    for(int i=0;i<size;i++){
        if(k==arr[i]){
            ans=i;
           
        }
    }
    cout<<ans<<endl;
   
    return 0;
}