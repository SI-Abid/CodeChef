#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        map<string,char> m;
        m["00"]='A';
        m["01"]='T';
        m["10"]='C';
        m["11"]='G';
        for(int i=0;i<n;i+=2)
        {
            cout<<m[s.substr(i,2)];
        }
        cout<<'\n';
    }
    return 0;
}