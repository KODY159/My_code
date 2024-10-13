#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    int n;
    do {
        cin >> n;
        if (n!=-1) vec.push_back(n);
    }while(n!=-1);
    int A=0, B=0;
    while (!vec.empty()){
        int j=vec.size();
        if (j%2 != 0) A+=vec.back();
        else B+= vec.back();
        vec.pop_back();
    }

    if (A > B) cout << "A\n" << A-B;
    else if (A < B) cout << "B\n" << B-A;
    else cout << "Draw";
}