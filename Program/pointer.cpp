#include <iostream>
using namespace std;

int main(){
    string s; 
    getline(cin, s);
    char* a = &s[0];
    int n;
    for (n=0; *a!='\0'; a++){
        n++;
    }

    cout << n;
}