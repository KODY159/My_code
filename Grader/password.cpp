#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string p; cin >> p;
    if (s.length() != p.length()){
        cout << "Wrong";
        return 0;
    }
    for (int i=0; i<s.length(); i++){
        if(s[i] != p[i]){
            cout << "Wrong";
            return 0;
        }
    }
    cout << "True";
}