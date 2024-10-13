#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter year (Buddhist Era) : ";
    int n; cin >> n;
    cout << "Enter year (Buddhist Era) : " << n << endl;
    if (n%4 == 0 && n%100 != 0) cout << "This is leap year";
    else cout << "This is not leap year";
}