#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    if (n<40) cout << "F";
    else if (n >= 40 && n < 80) cout << "P";
    else cout << "A";
}