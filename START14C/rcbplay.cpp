#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        puts(z*2<(y-x)?"NO":"YES");
    }

    return 0;
}