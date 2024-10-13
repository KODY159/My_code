#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    // for (int i = n; i>= 1; i--){
    //     string stuff(n, i+48);
    //     cout << stuff;
    //     cout << endl;
    // }
    // for (int i=1; i<=n; i++){
    //     for (int j=1; j<=i; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // for (int i=n; i>=1; i--){
    //     for (int j=1; j<=i-1; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    for (int i=1-n; i<=n-1; i++){
        for (int j=1-n; j<=n-1; j++){
            if (abs(i) <= abs(j) && j<=0) cout << n-abs(j);
        }
        cout << endl;
    }

    n-=1;
    for (int i=-n; i<=n; i++){
        for (int j=1; j<=n+1; j++){
            // if(abs(i)+abs(j) <=n+1) cout << j;
            cout << "("<<j<<", "<<i<<") ";
        }
        cout << endl;
    }
}