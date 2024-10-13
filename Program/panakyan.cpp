#include <bits/stdc++.h>
using namespace std;

int main(){
    double id, sa, ot;
    string name;
    cout << "Input ID : ";cin >> id;
    cout << "Input name : ";cin >> name;
    cout << "Input Salary : ";cin >> sa;
    cout << "Input OT : "; cin >> ot;

    cout << "ID : " << id <<endl;
    cout << "Name : " << name << endl;
    cout << fixed << setprecision(2) << "Salary : " << sa << endl;
    cout << fixed << setprecision(2) << "OT : " << ot <<endl;
    cout << fixed << setprecision(2) << "Total income : " << sa+ot <<endl;

    if (sa+ot >= 100000) cout << fixed << setprecision(2) << "Tax : " << (sa+ot)*0.1;
    else if (sa+ot >= 70000) cout << fixed << setprecision(2) << "Tax : " << (sa+ot)*0.07;
    else if (sa+ot >= 50000) cout << fixed << setprecision(2) << "Tax : " << (sa+ot)*0.05;
    else if (sa+ot >= 30000) cout << fixed << setprecision(2) << "Tax : " << (sa+ot)*0.03;
    else cout << fixed << setprecision(2) << "Tax : " << (sa+ot)*0.01;
}