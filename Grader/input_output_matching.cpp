#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int cnt = 0;
    for (int i=0; i<s.length(); i++){ 
        if (toupper(s[i]) == 'A' || toupper(s[i]) == 'E' || toupper(s[i]) == 'I' || toupper(s[i]) == 'O' || toupper(s[i]) == 'U'){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}