#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)   
    {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        if(b<n || a+c<n)
        {
            puts("NO");
        }
        else
        {
            puts("YES");
        }
        
    }
    return 0;
}