#include <bits/stdc++.h>
using namespace std;

void out_c(int n){
    int a=0,sum=0;
    while(n--){
        cout << a;
        if (n!=0) cout << "+";
        sum+=a;
        a+=2;
    }
    cout << " = " << sum;
}

int main(){
    cout << "Enter n=";
    int n; cin >> n;
    out_c(n);
}