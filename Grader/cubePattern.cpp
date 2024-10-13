#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    for (int i=1-n; i<=n-1; i++){
        for (int j=1-n; j<=n-1; j++){
            if (j==n) cout << '*';
            else cout << "-";
        }
        cout << endl;
    }
}