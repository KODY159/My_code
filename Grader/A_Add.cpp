// #include <bits/stdc++.h>
// using namespace std;

// void add_num(string n1, string n2){
//     string ans;
//     int n1_l = n1.length(), n2_l = n2.length();
//     int len_diff = n1_l-n2_l;

//     reverse(n1.begin(), n1.end());
//     reverse(n2.begin(), n2.end());

//     int ses = 0;
//     for (int i=0; i<n2_l; i++){
//         int tmp = (n1[i] - '0') + (n2[i] - '0') + ses;
//         char id = (tmp%10) + '0';
//         ans.push_back(id);
//         ses = tmp/10;
//     }

//     for (int i=n2_l; i<n1_l; i++){
//         int tmp = (n1[i] - '0') + (n2[i] - '0') + ses;
//         char id = (tmp%10) + '0';
//         ans.push_back(id);
//         ses = tmp/10;
//     }

//     while (ses){
//         char tmp = (ses%10) + '0';
//         ans.push_back(tmp);
//         ses/=10;
//     }

//     reverse(ans.begin(), ans.end());
//     cout << ans;
// }


// int main(){
//     string a, b; cin >> a >> b;
//     if (a.length() >= b.length()) add_num(a, b);
//     else add_num(b, a);

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string a,b;
    cin >> a >> b;
    int mx = max(a.length(),b.length());
    int A[mx],B[mx],result[mx];

    for (int i = 0; i < mx; i++) result[i] = 0;

    int j = 0;
    for (int i = a.length() - 1; i >= 0; i--){
        A[j] = a[i] - '0';
        j++;
    }
    //fill A
    for (int i = j; i < mx; i++) A[i] = 0;

    j = 0;
    for (int i = b.length() - 1; i >= 0; i--){
        B[j] = b[i] - '0';
        j++;
    }
    //fill B
    for (int i = j; i < mx; i++) B[i] = 0;

    int hold,ses = 0;
    for (int i = 0; i < mx; i++){
        hold = A[i] + B[i] + ses;
        if (hold < 10){
            result[i] = hold;
            ses = 0;
        }
        else{
            result[i] = hold % 10;
            ses = 1;
        }
    }

    if (ses == 1) cout << ses;
    for (int i = mx - 1; i >= 0; i--) cout << result[i];

    return 0;
}