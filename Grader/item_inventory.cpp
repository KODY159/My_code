#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    int chk = 0;
    for (int i=0; i<5; i++) cin >> arr[i];
    
    int f; cin >> f;
    for (int i=0; i<5; i++) 
        if (arr[i] == f) {chk++; break;}
        
    if (chk == 0) cout << "Item not found in the bag";
    else {
        for (int i=0; i<5; i++){
            if (arr[i] == f && chk<2) {chk++; continue;}
            else cout << arr[i] << ' ';
        }
        cout << 0;
    }
    // if (chk == 1) cout << 0;
    // else cout << "Item not found in the bag";
}