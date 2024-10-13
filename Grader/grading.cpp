#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int a;
    cin >> a;
    
    if (a >= 80 && a <= 100){
        cout << "4";
    }
    else if (a >= 75 && a <= 79){
        cout << "3.5";
    }
    else if (a >= 70 && a <= 74){
        cout << "3";
    }
    else if (a >= 65 && a <= 69){
        cout << "2.5";
    }
    else if (a >= 60 && a <= 64){
        cout << "2";
    }
    else if (a >= 55 && a <= 59){
        cout << "1.5";
    }
    else if (a >= 50 && a <= 54){
        cout << "1";
    }
    else {
        cout << "0";
    }

    return 0;
}