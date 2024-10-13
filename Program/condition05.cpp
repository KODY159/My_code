#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter student grade : ";
    char a; cin >> a;
    if (a == 'A' || a == 'a') cout << "Excellent";
    else if (a == 'B' || a == 'b') cout << "Good";
    else if (a == 'C' ||   a == 'c') cout << "O.K.";
    else if (a == 'D' || a == 'd' || a == 'F' || a == 'f') cout << "Poor, student is on probation";
    else cout << "Invalid letter grade";
}