#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    int thousand = n/1000;
    int remain = n%1000;
    int hundred = remain/100;
    remain = remain%100;
    int ten = remain/10;
    int one = remain%10;

    cout << one << " is in the ones place" <<endl;
    cout << ten << " is in the tens place" <<endl;
    cout << hundred << " is in the hundreds place" <<endl;
    cout << thousand << " is in the thousands place";
}