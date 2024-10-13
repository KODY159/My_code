#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10], m, ind;
    for (int i=0; i<10; i++) cin >> arr[i];
    cin >> m >> ind;

    for (int i=9; i>ind; i--){
        arr[i] = arr[i-1];
    }
    arr[ind] = m;

    for (int i=0; i<10; i++) cout << arr[i] << " ";
}   