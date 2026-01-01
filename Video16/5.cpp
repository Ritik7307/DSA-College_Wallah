// Count the no. of ele strictly greater than value x

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    cout<<"Enter x: ";
    int x;
    cin>>x;
    int ans = 0;
    for(int i=0;i<6;i++){
        if(v[i]>x){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}