#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) { 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (int i=5; i*i<=n; i+=2) 
        if (n%i == 0) return false; 
    return true; 
}
 
int main(){
    int N; cin >> N;
    if (N <= 1) return 2;
    bool found = false;
    while (!found) {
        N++;
        if (isPrime(N)) found = true;
    }
    cout << N;
 
    return 0;
}