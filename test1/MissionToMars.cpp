#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    for (int i=0; i<n; i++){
        if (arr[i]%4 == 0 && arr[i]%100 !=0) cout << "True" << endl;
        else if (arr[i]%4 == 0 && arr[i]%400 == 0) cout << "True" << endl;
        else cout << "False"<< endl;
        // if (arr[i]%4 == 0){
        //     if (arr[i]%100 == 0){
        //         if (arr[i]%400 == 0) cout << "True" << endl;
        //         else cout << "False"<< endl;
        //     }
        // }else {
        //     if (arr[i]%100 != 0){
        //         if (arr[i]%400 == 0) cout << "True" << endl;
        //         else cout << "False"<< endl;
        //     }
        // }
    }
    // cout << "False"<< endl;
    // cout << "True" << endl;
    
}