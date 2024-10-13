#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter type of empoloyee ( Daily : D, Monthly : M, Temp : T) : ";
    char c; cin >> c;

    switch (c)
    {
    case 'D': cout << "Salary = 4000+(4000*0.2) = 4800";break;
    case 'M': cout << "Salary = 8000+(8000*0.5) = 12000";break;
    case 'T': cout << "Salary = 6000+(6000*0.2) = 7200";break;
    }
}