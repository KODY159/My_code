#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a = 1;
    for (int i=n; i>=1; i--){
        for (int j=1; j<=i; j++){
            if (i-j == 0){
                cout << a;
                a++;
            }
            else cout << 'a';
        }
        cout << endl;
    }
}