#include <bits/stdc++.h>
using namespace std;
bool arr[480];

int main(){
    int n; cin >> n;
    // cout << arr[400];
    
    for (int i=0; i<n; i++){
        int a, b;cin >> a >> b;
        for (int j=a; j<=b; j++){
            arr[j] = 1;
        }
    }
    int sum =0;
    for (int i=0; i<480; i++){
        if (arr[i] == 0) sum++;
    }
    cout << sum;
}