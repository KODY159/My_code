#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter month number (1-12) : ";
    int month; cin >> month;
    switch (month)
    {
    case 1: cout << "No.1 January : 31 days";break;
    case 2: cout << "No.2 Febuary : 28 days";break;
    case 3: cout << "No.3 March : 31 days";break;
    case 4: cout << "No.4 April : 30 days";break;
    case 5: cout << "No.5 May : 31 days";break;
    case 6: cout << "No.6 June : 30 days";break;
    case 7: cout << "No.7 July : 31 days";break;
    case 8: cout << "No.8 August : 31 days";break;
    case 9: cout << "No.9 September : 30 days";break;
    case 10: cout << "No.10 October : 31 days";break;
    case 11: cout << "No.11 November : 30 days";break;
    case 12: cout << "No.12 December : 31 days";break;
    }

}