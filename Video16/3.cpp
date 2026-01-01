// Find out the last occurence of an ele x in a given array

// can start traversing from reverse

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
    int occurence =-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence = i;
        }
    }
    cout<<occurence<<endl;
    return 0;
}