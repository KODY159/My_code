#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt = 1;cin >> n;
    while (n != 1){
        if (n % 2 != 0){n--;cnt++;}
        n = n/2;
    }
    cout << cnt;
}