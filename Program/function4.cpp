#include <bits/stdc++.h>
using namespace std;

int cal(int w){
    int sum = 0;
    if (w<=300) sum+= w*9;
    else if (w<=600) sum += 300*9 + (w-300)*8;
    else if (w<=1000) sum+= 300*9 + 300*8 + (w-600)*6;
    else sum+= w*5;
    
    return sum;
}

int main(){
    int cus, watt;
    cout << "Customer number : ";cin >> cus;
    cout << "Watt used : "; cin >> watt;
    int value = cal(watt);
    cout << value;

    return 0;
}