#include <bits/stdc++.h>
using namespace std;

int main(){
    double num1, num2;
    char o;
    cin >> num1 >> o >> num2;
    if (o == '+') cout <<fixed <<setprecision(2) << num1+num2;
    else if (o == '-') cout<<fixed <<setprecision(2) << num1-num2;
    else if (o == '*') cout<<fixed <<setprecision(2) << num1*num2;
    else if (o == '/') cout<<fixed <<setprecision(2) << num1/num2;


    // string ch; cin >> ch;
    // int hold;
    // for (int i=0; i<ch.length(); i++){
    //     if (ch[i] == '+' || ch[i] == '-' || ch[i] == '*' || ch[i] == '/') hold = i;
    // }

    // int arr1[hold-1], arr2[ch.length()-hold-1], a=0;
    // for (int i=0; i<hold; i++) arr1[i] = ch[i];
    // for (int i=hold; i<ch.length(); i++){
    //     arr2[a] = ch[i];
    //     a++;
    // }

    // for (int i=0; i<hold; i++) cout << arr1[i]-'0' << endl;
    // for (int i=0; i<ch.length()-hold-1; i++) cout << arr1[i]-'0' <<endl;

    // cout << ch[hold];

}