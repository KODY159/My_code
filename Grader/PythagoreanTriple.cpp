#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--){
        int a1, b1, c1;cin >> a1 >> b1 >> c1;
        int A, B, C;
        if(a1 > b1 && a1 > c1){
            C = a1;
            A = b1;
            B = c1;
        }else if (b1 > a1 && b1 > c1){
            C = b1;
            A = a1;
            B = c1;
        }else{
            C = c1;
            A = a1;
            B = b1;
        }
        if (((A*A) + (B*B)) == (C*C)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}