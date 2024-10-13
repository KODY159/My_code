#include<bits/stdc++.h>
using namespace std;

int main(){
int n,x1,y1,x2,y2;
cin>>n>>x1>>y1>>x2>>y2;
double d = floor(sqrt(pow(x1-x2,2)+pow(y1-y2,2)));

long long k = floor((pow(n+1,d))+(floor(log(n+1)))+5);

cout<<k;


return 0;
}