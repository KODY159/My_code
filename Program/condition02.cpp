#include <bits/stdc++.h>
using namespace std;

int main(){
    double n; cin >> n;
    if(n>=0.0 && n<=0.99) cout << "Fail semester - registration suspended";
    if (n>=1 && n<=1.99) cout << "On probation for next semester";
    if (n>=2.0 && n<=2.99) cout << "No comment";
    if (n>=3.0 && n<=3.49) cout << "Dean's list for semester";
    if (n>=3.5  && n<=4.00) cout << "Highest honors for semester";

    return 0;
}