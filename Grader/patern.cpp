// #include <bits/stdc++.h>
// using namespace std;
// int main( )
// {
//     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 2*n-1; j++)
//         {
//             if (i+j >= n-1 && abs(i-j) <= n-1)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << "-";
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main( )
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i+1; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= 2*i; j++)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}