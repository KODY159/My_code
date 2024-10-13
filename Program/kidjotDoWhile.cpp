#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    int sum = 0;
    do{
        sum+=n;

        cout << "Enter number that grater than 0 : ";
        cin >> n;
    }while(n>0);
    cout << sum;

    return 0;
}