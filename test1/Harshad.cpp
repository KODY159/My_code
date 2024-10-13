#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    int arr[t];
    for (int i=0; i<t; i++) cin >> arr[i];

    for (int i=0; i<t; i++){
        string a = to_string(arr[i]);
        int sum = 0;
        for (int i=0; i<a.length(); i++){
            sum += (a[i]-'0');
        }
        if (arr[i]%sum == 0) cout << "YES:" << sum <<"\n";
        else cout << "NO:" << sum <<"\n";
    }
        // int n; cin >> n;
        // string a = to_string(n);
        // int sum = 0;
        // for (int i=0; i<a.length(); i++){
        //     sum += (a[i]-'0');
        // }
        // if (n%sum == 0) cout << "Yes:" << sum <<"\n";
        // else cout << "No:" << sum <<"\n";
}