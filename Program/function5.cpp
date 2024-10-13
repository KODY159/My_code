#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter Character : ";
    char a; cin >> a;
    cout << "Number of line : ";
    int n; cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout << "M";
        }
        cout << endl;
    } 

}