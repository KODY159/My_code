#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    struct gpa{
        double git;
        double grade;
    }gpa;

    double sum=0;
    for (int i=0; i<n; i++){
        cin >> gpa.git >> gpa.grade;
        sum += gpa.git*gpa.grade;
    }

    if (sum/n >= 4.00) cout << "4.00";
    else cout << fixed << setprecision(2) << sum/n;
}