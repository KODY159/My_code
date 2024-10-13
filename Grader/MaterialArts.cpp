#include<bits/stdc++.h>
using namespace std;


int main(){
    int N; cin >> N;
    int Arr[N];
    int cnt = 1, sum_of_Yib = 1;

    for (int i = 0; i < N; i++) cin >> Arr[i];
    for (int i = 1; i < N; i++) {
        if (Arr[i] > Arr[i - 1]) cnt++;
        else {
            if (cnt > sum_of_Yib) sum_of_Yib = cnt;
            cnt = 1;
        }
    }
    if (cnt > sum_of_Yib) sum_of_Yib = cnt;

    cout << sum_of_Yib << "\n";
}