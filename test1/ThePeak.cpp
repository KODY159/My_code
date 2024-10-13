// #include<iostream>
// #include<vector>
// using namespace std;
// #define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// typedef long long ll;

// int main(){windows;
//     int n,c=0;cin>>n;
//     string b="";
//     vector<int> a;
//     a.push_back(0);
//     for(int i=0;i<n;i++){
//         int x;cin>>x;
//         a.push_back(x);
//     }
//     a.push_back(0);
//     for(int i=1;i<a.size()-1;i++){
//         if(a[i]>a[i-1]&&a[i]>a[i+1]){
//             c++;
//             b+=to_string(i)+" ";
//         }
//     }
//     cout<<c<<endl<<b;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    int cnt = 0;
    for (int i=0; i<n; i++) cin >> arr[i];
    if (arr[0] > arr[1]) cnt++;
    if (arr[n-1] > arr[n-2]) cnt++;

    // for (int i=0; i<=n-1; i++){
    //     if (i == 0){
    //         if (arr[1] < arr[0]) {cnt++;}
    //     }
    //     else if (i == n-1) {
    //         if (arr[n-2] < arr[n-1]) {cnt++;}
    //     }else {
    //         if (arr[i-1] < arr[i] && arr[i] > arr[i+1]) {cnt++;}
    //     }
    // }
    // if (cnt == 0) cout << 0;
    // else {
    //     cout << cnt << endl;
    //     for (int i=0; i<=n-1; i++){
    //         if (i == 0){
    //             if (arr[1] < arr[0]) cout << i+1 << ' ';
    //         }
    //         else if (i == n-1) {
    //             if (arr[n-2] < arr[n-1]) cout << i+1 << ' ';
    //         }else {
    //             if (arr[i-1] < arr[i] && arr[i] > arr[i+1]) cout << i+1 << ' ';
    //         }
    //     }
    // }
}