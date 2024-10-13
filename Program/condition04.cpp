#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if (a > b){
        cout << a << " is bigger than " << b;
    }else if (a < b){
        cout << a << " is smaller than " << b;
    }else{
        cout << a << " is equal to " << b;
    }

    return 0;
}

// double a, b;
//     cin >> a >> b;
//     if (b > 0){
//         cout << a + b;
//     }else {
//         cout  << a * b;
//     }