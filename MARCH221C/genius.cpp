#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a,b;
        a=(x+2)/3;
        b=(3*a)-x;
        if(a+b>n)
        {
            puts("NO");
        }
        else
        {
            puts("YES");
            printf("%d %d %d\n",a,b,n-a-b);
        }
    }
    return 0;
}