#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int b1000 = n/1000;
    int remain = n%1000;

    int b500 = remain/500;
    remain = remain%500;

    int b100 = remain/100;
    remain = remain%100;

    cout << "B1000 = " << b1000 <<endl;
    cout << "B500 = " << b500 <<endl;
    cout << "B100 = " << b100 <<endl;
}

    // cout << "50 baht : " << b50 <<endl;
    // cout << "20 baht : " << b20 <<endl;
    // cout << "10 baht : " << b10 <<endl;
    // cout << "5 baht : " << b5 <<endl;
    // cout << "2 baht : " << b2 <<endl;
    // cout << "1 baht : " << b1 <<endl;
// int b50 = remain/50;
//     remain = remain%50;

//     int b20 = remain/20;
//     remain = remain%20;

//     int b10 = remain/10;
//     remain = remain%10;

//     int b5 = remain/5;
//     remain = remain%5;

//     int b2 = remain/2;
//     remain = remain%2;

//     int b1 = remain/1;