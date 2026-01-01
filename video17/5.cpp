// Rotate the given array by k steps, where k is positive

// NOTE: k can be greater than n as well where n is the size of array

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int array[]={1,2,3,4,5,6,7,8};
//     int n =8;
//     int k;
//     cout<<"Enter k:";
//     cin>>k;
//     k=k%n;
//     int ans[8];
//     int j=0;
//     //insertng last k elements in ans array
//     for(int i= n-k;i<n;i++){
//        ans[j] = array[i];
//        j++;
//     }

//     // insert first n-k elements in ans array

//     for(int i=0;i<k;i++){
//         ans[j]=array[i];
//         j++;
//     }

//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v={1,2,3,4,5};
    int k=5;
    k=k%v.size();

    reverse(v.begin(),v.end());

    // 5 4 3 2 1

    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
