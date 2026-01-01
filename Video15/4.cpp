// Find the maximum value out of all the eleents in the array

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,4,5,6,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maxi = arr[0];
    for(int i=0;i<size;i++){
        maxi = max(maxi,arr[i]);
    }
    cout<<maxi<<endl;

    return 0;
}