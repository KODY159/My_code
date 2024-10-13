#include <bits/stdc++.h>
using namespace std;
int main(){
    char c[10];
    int sum=0,num=10;
    for (int i=0;i<9;i++){
        cin >> c[i];
        sum += (c[i]-48) * num;
        num--;
    }
    for (int i=1;i<=10;i++){
        if ((sum+i)%11 == 0) c[9] = i+48;
    }
    for (auto x:c) cout << x;
    return 0;
}