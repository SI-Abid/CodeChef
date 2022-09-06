#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int> f(n),r(n);
        for(int i=0;i<n;i++)
        {
            m[v[i]]++;
            if(m[v[i]]==1)
            {
                i==0?f[i]=1:f[i]=f[i-1]+1;
            }
            else
            {
                f[i]=f[i-1];
            }
        }
        m.clear();
        for(int i=n-1;i>=0;i--)
        {
            m[v[i]]++;
            if(m[v[i]]==1)
            {
                i==n-1?r[i]=1:r[i]=r[i+1]+1;
            }
            else
            {
                r[i]=r[i+1];
            }
        }
        bool flag=false;
        for(int i=0;i<n-1;i++)
        {
            if(f[i]==r[i+1])
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}