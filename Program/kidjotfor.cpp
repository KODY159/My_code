#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter number to find factorial : ";
    int n; cin >> n;
    long fac = 1;
    for (int i=1; i<=n; i++){
        fac*=i;
    }

    cout << fac;
}