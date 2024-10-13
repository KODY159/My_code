#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int mx = INT_MIN;
    for (int i=0; i<10; i++){
        cin >> n;
        mx = max(mx, n);
    }   
    cout << mx;
}