#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter number : ";
    int n; cin >>n;
    if (n%2 == 0){
        cout << "Output = " << pow(n, 2);
    }else {
        cout << "Output = " << pow(n, 3);
    }
}