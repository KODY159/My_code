#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n; cin >> n;
//     for (int i=2; i<n; i++){
//         if(n%i == 0) {cout << "is not prime"; return 0;}
//         else continue;
//     }
//     cout << "is prime";
// }

int main(){
    int n; cin >> n;
    int di = 0;
    int i = 1;
    while (i<=n){
        if (n%i == 0) di++;
        i++;
    }

    if (di == 2) cout << "is prime";
    else cout << "is not prime";
}