#include <bits/stdc++.h>
using namespace std;
main()
{
    int mX ,mY ,mx = INT_MIN ,nX ,nY ,mn = INT_MAX;
    int a, b; cin >> a >> b;
    for (int i = 0; i < b; i++){
        int x, y , size; cin >> x >> y >> size;
        if (size > mx){
            mX = x;
            mY = y;
            mx = size;
        }
        if (size < mn){
            nX = x;
            nY = y;
            mn = size;
        }
    }
    cout << fixed << setprecision(6) << sqrt(pow(mX - nX,2) + pow(mY - nY,2));
}