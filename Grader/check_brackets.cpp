// #include <bits/stdc++.h>
// using namespace std;

// bool check_brackets(string a){
//     stack<char> st;
//     for (int i=0; i<a.length(); i++){
//         char x = a[i];
//         if (x == '('){
//             st.push(x);
//         }
//         if (x == ')'){
//            if (st.empty()) return 0;
//            else st.pop();
//         }
//     }

//     if (!st.empty()) return 0;
//     else return 1;
// }

// int main(){
//     int n; cin >> n;
//     cin.ignore();
//     while (n--){
//         string a;
//         getline(cin, a);
//         bool chk = check_brackets(a);
//         if (chk == true) cout << "Safe" << endl;
//         else cout << "Danger" << endl;
//     }
 
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool sol(string s){
    int b =0;
    for (auto i:s){
        if(i=='(') b++;
        else if(i==')')b--;
        if(b<0) return 0;
    }

    return b==0;
}

int main(){
    int t; cin >> t;
    string s;
    cin.ignore();
    while (t--){
        getline(cin, s);
        bool f=sol(s);
        cout << (f?"Safe\n" : "Danger\n");
    }
}