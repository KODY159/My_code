#include <bits/stdc++.h>
using namespace std;

int main(){
    int num1, num2, max, min;
    cin >> num1 >> num2;
    max = (num1 > num2)? num1 : num2;
    min = (num1 < num2)? num1 : num2;

    cout << "Max = " << max <<endl;
    cout << "Min = " << min <<endl;

}