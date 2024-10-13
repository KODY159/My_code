#include <bits/stdc++.h>
using namespace std;

int main(){
    double w; cin >> w;
    if (w<=55) cout << "Depression";
    else if (w<=103) cout << "Tropical Storm";
    else if (w<=134) cout << "Category 1 hurricane";
    else if (w<=155) cout << "Category 2 hurricane";
    else if (w<=182) cout << "Category 3 hurricane";
    else if (w<=219) cout << "Category 4 hurricane";
    else cout << "Category 5 hurricane";

    return 0;
}