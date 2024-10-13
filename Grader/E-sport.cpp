#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int sa = 0, sb = 0;
    int a[n], b[n];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];
    for (int i=0; i<n; i++){
        if (a[i] > b[i]) sa+=2;
        else if (a[i] < b[i]) sb+=2;
        else {sa+=1; sb+=1;}
    }


    if (sa > sb) cout << "Senior High wins" << " \n" << sa << " " << sb;
    else if (sa < sb) cout << "Junior High wins" << "\n" << sb << ' ' << sa;
    else cout << "Draw" << "\n" << sa << ' ' << sb;
}