#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n == 1) return false;
    int i = 2;
    while (i*i <= n) {
        if (n % i == 0) return false;
        i += 1;
    }
    return true;
}

int main(){
    int n, k; cin >> n >> k;

    int a;
    long sum =0;
    for (int i=0; i<n; i++){
        cin >> a;
        if (isPrime(a) == true) sum+=a;
    }

    long long int s =1;
    for (int i=0; i<sum; i++){
        s = (s%1000000007*k%1000000007)% 1000000007;
    }

    cout << s%1000000007;
}