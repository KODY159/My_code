#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    int cnt = 0;
    for (int i=0; i<n; i++) cin >> arr[i];

    if (arr[1] < arr[0]) {cnt++;}
    if (arr[n-2] < arr[n-1]) {cnt++;}

    for (int i=1; i<=n-1; i++){
        if (arr[i-1] < arr[i] && arr[i] > arr[i+1]) {cnt++;}
    }
    if (cnt == 0) cout << 0;
    else {
        cout << cnt << endl;
        for (int i=0; i<=n-1; i++){
            if (i == 0){
                if (arr[1] < arr[0]) cout << i+1 << ' ';
            }
            else if (i == n-1) {
                if (arr[n-2] < arr[n-1]) cout << i+1 << ' ';
            }else {
                if (arr[i-1] < arr[i] && arr[i] > arr[i+1]) cout << i+1 << ' ';
            }
        }
    }

}