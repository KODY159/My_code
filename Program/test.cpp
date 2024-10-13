#include <bits/stdc++.h>
using namespace std;
#define C_Year 2024

int main(){
    int year;
    cout << "What year were you born";
    cin >> year;
    if(year > C_Year){
        cout << "Please insert year" <<endl;
        cout << " Insert in C.E. year" <<endl;
    }else{
        year = C_Year-year;
        cout << "You are " << year << " year old" <<endl;
    }
    cout << "finish";

}