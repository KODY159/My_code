#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter number to find factorial : ";
    int n; cin >> n;
    int fac = 1;

    int i=1;
    while(i<=n){
        fac*=i;
        i++;
    }

    cout << "Factorial of " << n << " is " << fac;
}