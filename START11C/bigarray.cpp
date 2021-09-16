#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t; cin>>t;
    while (t--)
    {
        ll n, s;
        cin>>n>>s;
        ll sum=n*(n+1)/2;
        if(sum-s<=0 || sum-s>n)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<sum-s<<endl;
        }
    }   
    
    return 0;
}