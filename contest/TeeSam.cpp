#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for (int i=-(n-2); i<= n-2; i++){
        for (int j=-n; j<=n; j++){
            // cout << "( " << i << ", " << j << " )";
            if (i+abs(j)==n-2 || (abs(i)+abs(j) == n+2 && i<0) || abs(j)+i == -(n/2-1)) cout << "O";
            else if (i-j<=1) cout << "^";
            else cout << ".";
        }
        cout << endl;
    }
}