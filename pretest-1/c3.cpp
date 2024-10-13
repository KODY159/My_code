#include<bits/stdc++.h>

using namespace std;

int a;
int sour1[20],bitter1[20];

int kid(int sour,int bitter,int check)
{
    if(check==a && bitter==0 && sour==1)
    {
        return INT_MAX;
    }
    else if(check==a )
    {
        return abs(bitter-sour);
    }
    return min(kid(sour1[check]*sour,bitter+bitter1[check],check+1),kid(sour,bitter,check+1));
}

int main()
{
    cin >> a;
    for(int i=0;i<a;i++)
    {
        cin >> sour1[i] >> bitter1[i];
    }
    cout << kid(1,0,0);
}
