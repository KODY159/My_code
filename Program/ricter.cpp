#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter richter level : ";
    double x; cin >> x;
    if(x < 5.0) cout << "Little or no damage";
    else if(x >= 5.0 && x < 5.5) cout << "Some damage";
    else if(x >= 5.5 && x < 6.5) cout << "Serious damage";
    else if (x >= 6.5 && x < 7.5) cout << "Disaster";
    else cout << "Catastrophe";

    return 0;
}