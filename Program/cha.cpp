#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    const int width = 70;
    const int flipsPerline = 5;

    int i=0, x=0;
    srand(time(NULL));
    bool switcches[width] = {0};
    const string ch = "1234567890qwertyuiopasdfghjklzxcvbnm,./';][!@#$%^&*()-=_+]";
    const int l = ch.size();
    system("Color 0A");
    while(true){
        for (i=0; i<width; i+=2){
            if (switcches[i]) cout << (char)003/*ch[rand() %1]*/ << " ";
            else cout << " ";
        }
        for (i = 0; i!= flipsPerline; ++i){
            x = rand()%width;
            switcches[x] = !switcches[x];
        }
        cout << endl;
    }

    return 0;
}