#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for (int i=-(n/2); i<=n/2; i++){
        for (int j=-(n/2); j<=n/2; j++){
            if (i == -(n/2) || i == (n/2) || i == 0 || j == -(n/2) || j ==0 || j==n/2) cout << "*";
            else cout << "_";
        }
        cout << "\n";
    }
}