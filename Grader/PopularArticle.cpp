#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    struct s{
        int a;
        int b;
    }s[n];

    for (int i=0; i<n; i++){
        int x, y, c;
        cin >> x >> y >> c;
        int z = (y*2)+c;
        s[i].a = x;
        s[i].b = z;
    }
    sort(s, s+n, cmp);
    // for (int i=0; i<n; i++){
    //     cout << s[i].a << " " << s[i].b << endl;
    // }
}