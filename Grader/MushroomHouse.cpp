#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt = 0;
    for (int i=0; i<10; i++){
        int n; cin >> n;
        if (n>=10 && n <=20) cnt++;
    }

    cout << cnt;
}