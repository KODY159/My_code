#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    int b, h;
    cin >> b;
    cin >> h;

    if (x == 'R' || x == 'r'){
        cout << "Area of Rectangle = " << fixed << setprecision(2) <<  b*h;
    }else{
        cout << "Area of Triangle = " << fixed << setprecision(2) << 0.5*b*h;
    }
}