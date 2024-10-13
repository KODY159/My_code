#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter Figure (R : Rectangle, T : Triangle) : ";
    char x; cin >> x;
    double b, h;
    cout << "Enter base : ";
    cin >> b;
    cout << "Enter height : ";
    cin >> h;

    if (x == 'R' || x == 'r'){
        cout << "Area of Rectangle = " << fixed << setprecision(2) <<  b*h;
    }else{
        cout << "Area of Triangle = " << fixed << setprecision(2) << 0.5*b*h;
    }
}