#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int low = 0, high = n-1;

    while(low<high) {
        if(v[low] == 0) {
            low++;
        }
        else if(v[high] == 1) {
            high--;
        }
        else {
            swap(v[low], v[high]);
            low++;
            high--;
        }
    }

    for(int x : v) {
        cout << x << " ";
    }
}
