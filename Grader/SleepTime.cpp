#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--){
        int h1,m1,h2,m2;
        cin >> h1;cin.ignore();cin >> m1;
        cin >> h2;cin.ignore();cin >> m2;

        cout<< abs(((h1*60)+m1)-((h2*60)+m2)-1440)/60 << ':' << (abs(((h1*60)+m1)-((h2*60)+m2)-1440)%60)*6 << endl;
    }
}