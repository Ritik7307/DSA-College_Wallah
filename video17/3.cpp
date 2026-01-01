// Array Manipulation

// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]= {2,3,1,2,4,4,1};
    int n = 7;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<7;i++){
        if(arr[i]>0){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}
