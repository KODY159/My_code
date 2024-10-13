#include <bits/stdc++.h>
using namespace std;

void out_c(int n, double r, int y){
    double sum = n;
    for (int i=1; i<=y; i++){
        sum+=sum*(r/100);
        cout << fixed << setprecision(2) << "Year " << i << "-->" << sum << endl;
    }
}  

int main(){
    int num, year;
    double rate;
    cout << "Number of people : ";cin >> num;
    cout << "Increase rate : "; cin >> rate;
    cout << "Number of year : "; cin >> year;
    out_c(num, rate, year);
}