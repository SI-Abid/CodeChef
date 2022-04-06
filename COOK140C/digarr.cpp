#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool ok=false;
        for (size_t i = 0; i < n; i++)
        {
            if(s[i]=='0' or s[i]=='5')
            {
                ok=true;
                break;
            }
        }
        puts(ok?"YES":"NO");
    }
    return 0;
}