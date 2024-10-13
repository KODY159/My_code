#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int i=2, x=1;
    while (i <= n){
        cout << i << " ";
        i+=2;
        x++;
        if(x==11){
            cout << endl;
            x=1;
        }
    }
}