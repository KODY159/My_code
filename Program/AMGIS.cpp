#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;

    cout << x - 1 + (x&x|y);
}