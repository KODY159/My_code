#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i=5; i*i<=n; i+=2){
        if (n%i == 0) return false;
    }
    return true;
}

int main(){
    int n, c=0;
    int mx = INT_MIN;
    do {
        cin >> n;
        if (isPrime(n) == true) {mx = max(n, mx); c++;}
    }while(n!=0);

    if (c == 0) cout << 0;
    else cout << mx;
}