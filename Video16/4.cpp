// Count the no. of occurene of a particular ele x

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
    int occurence =0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence++;
        }
    }
    cout<<occurence<<endl;
    return 0;
}