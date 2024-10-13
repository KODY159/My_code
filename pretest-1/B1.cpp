#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        if (n%2 != 0){
            for (int i=0; i<n; i++){
                for (int j=0; j<n+((n/2)-1); j++){
                    cout << "( " << i <<  ", " << j << " )";
                    if (i+j == n/2 || abs(i-j) == n/2 || i+j == n+(((n/2)-1)) || i+j == n+(((n/2)))) cout << "#";
                    else cout << ".";
                }
                cout << "\n";
            }
        }
    }
}