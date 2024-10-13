#include <bits/stdc++.h>
using namespace std;

int main(){
    int d1, m1, y1; cin >> d1 >> m1 >> y1;
    int d2, m2, y2; cin >> d2 >> m2 >> y2;

    if (d1 == d2 && m1 == m2 && y1 == y2) {cout << 0; return 0;}

    if (y1%4 == 0 && y1%100 != 0) {

    }else if (y1%4 == 0 && y1%400 == 0){

    }
    else{
        
    }
}