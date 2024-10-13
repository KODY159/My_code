#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(2) << "x = " << ((-b)+sqrt((b*b)-(4*a*c)))/(2*a) <<endl;
    cout << fixed << setprecision(2) << "x = " << ((-b)-sqrt((b*b)-(4*a*c)))/(2*a);
}