#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,f; cin >> n;
    bool find = false;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    cin >> f;
    for (int i=0; i<n; i++){
        if (arr[i] == f) {cout << i+1 << ' '; find =true;}
    }
    if (find == false) cout << 0;
}