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
        int ans=n/7;
        if(n%7==6)ans++;
        cout<<ans<<endl;
    }
    return 0;
}