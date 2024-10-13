#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n>> m >> k;
    int arr[m][n];

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    for (int i=0; i<n; i++){
        int sum = 0;
        for (int j=0; j<m; j++){
            sum+=arr[j][i];
        }
        if (sum>=k) cnt++;
    }

    cout << cnt;
}