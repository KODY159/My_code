#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            // cout << "( "<<i << ", " << j << " )";
            if (i+j == n-1 || abs(i-j) == 0) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    // for (int i=n; i>=-n; i--){
    //     for (int j = -n; j<=n; j++){
    //         if (abs(i) == abs(j)) cout << "*";
    //         else cout << " ";
    //     }
    //     cout << endl;
    // }

}