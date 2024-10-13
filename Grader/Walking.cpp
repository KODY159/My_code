#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int time[n];
    for (int i=0; i<n; i++){
        int x, y;cin >> x >> y;
        int t = (x*60+y)- 1020;
        time[i] = t;
    }
    sort(time, time+n);
    int a = time[n-2] % 60;
    int b = time[n-2] /60;
    cout << b << " " << a;
}