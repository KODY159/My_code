#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int n = a+b;
    if (n >= 100000) cout << fixed << setprecision(2) << n*0.1;
    else if (n >= 70000) cout << fixed << setprecision(2) << n*0.07;
    else if (n >= 50000) cout << fixed << setprecision(2) << n*0.05;
    else if (n >= 30000) cout << fixed << setprecision(2) << n*0.03;
    else cout << fixed << setprecision(2) << n*0.01;
}