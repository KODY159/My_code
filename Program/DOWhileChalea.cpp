#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double sum=0, i=0;

    do{
        cin >> n;
        sum+=n;
        i++;
        cout << sum <<endl;
    }while(n!=0);

    cout <<fixed << setprecision(2) << sum/ (i-1.0);

}