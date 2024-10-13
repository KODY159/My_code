#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;cin >> n >> k;
    int arr[n]={0};
    
    for (int i=0; i<k; i++){
        int v; cin >> v;
        arr[v-1]+=1;
    }

    int mx = INT_MIN, arr_pos;
    for (int i=0; i<n; i++) {
        if (arr[i] > mx){
            mx = arr[i];
            arr_pos= i;
        }
    }
    cout << arr_pos+1 << endl;
    cout << mx;
}