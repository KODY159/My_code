#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >>n;
    long long mx = INT_MIN, cnt = 1;
    while (n!=1){
        mx = max(mx, n);
        if (n%2 != 0){
            n = (sqrt(pow(n, 3)));
            ++cnt;
        }else {
            n = (sqrt(n));
            ++cnt;
        }
    }

    cout << mx << " " << cnt;

    return 0;
}