#include <bits/stdc++.h>
using namespace std;

int i=0;

int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    i++;
    return 1;
}

int main(){
    int a;
    cin>>a;
    for(int i=0;i<=a;i++){
        if(isPrime(i))cout<<i<<" ";
    }
    cout << endl << i;
    
    return 0;
}