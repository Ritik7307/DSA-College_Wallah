// Find the second largest element in the array

// 2,3,5,7,6,1
#include<bits/stdc++.h>
using namespace std;
int largestElementIndex(int arr[],int size){
    int max = INT_MIN;
    int maxIndex = -1;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            maxIndex= i;
        }
    }
    return maxIndex;
}
int main(){
    int arr[]={2,3,5,7,7,1};
    int n=6;
    int indexOfLargest = largestElementIndex(arr,6);

    // arr[indexOfLargest] = -1;
    int largestelement = arr[indexOfLargest];
    for(int i=0;i<n;i++){
        if(arr[i]==largestelement){
            arr[i]=-1;
        }
    }

    int indexOfSecondLargest = largestElementIndex(arr,6);
    cout<<arr[indexOfSecondLargest]<<endl;

}

// 2,3,5,7,6,1,7
// indexOflargest = 3;
// 2,3,5,-1,6,1,-1
// indexofSecondLargest = 4;

// 2,3,5,7,6,1,7
// max
// second_max = 
// if(arr[i]>max) max = arr[i]

// if(a[i]>second_max && a[i]!=max ) second_max=a[i]
