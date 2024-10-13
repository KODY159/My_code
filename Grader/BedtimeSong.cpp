#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int time = a*60+b, m = 1245-time;
    int r;
    if (time >= 1245){
        cout << 0 << ' ' << 0;
        return 0;
    }else {
        r = ceil(m/2.0);
    }

    cout << m << ' ' << r;

    return 0;
}