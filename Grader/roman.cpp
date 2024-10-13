#include <bits/stdc++.h>
using namespace std;

int main(){
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int n; cin >> n;
    int i=12;
    while(n>0){
        int s = n/num[i];
        n = n%num[i];
        while (s--) cout << sym[i];
        i--;
    }

}