#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    if (n > 50) cout << "Higher than 50";
    else if (n < 50) cout << "Lower than 50";
    else cout << "Equal to 50";
}