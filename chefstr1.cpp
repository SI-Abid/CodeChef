#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef vector<string> vs;
typedef vector<int> vi;
typedef set<char> sc;
typedef pair<int, int> pii;

#define mp 			make_pair
#define pb 			push_back
#define pi 			3.1415926535897932384626433832795
#define MOD 		1000000007
#define For(n) 	    for(int i=0; i<n; i++)
#define Revl(n) 	for(int i=n; i>=0; i--)
#define FOR(i,p,k)	for(int i=p; i<k; i++)
#define Sort(x)		sort(x.begin(), x.end())
#define Revs(x)		reverse(s.begin(), x.end())
#define mem(a,b)	memset(a, b, sizeof(a))
#define two(i)		((ll)1<<i)
void solve();
void solve2();
int main()
{
    solve2();
    return 0;
}
void solve2()
{
    int t, n;
    ll aa;
    cin>>t;
    while(t--)
    {
        ll res=0;
        cin>>n;
        ll v[n];
        cin>>v[0];
        for(int i=1; i<n; i++)
        {
            cin>>v[i];
            aa = v[i-1] - v[i];
            if(aa<0)
                aa = -aa;
            res+=(aa-1);
        }
        cout<<res<<endl;
    }
}
void solve()
{
    int t, n;
    ll aa;
    cin>>t;
    while(t--)
    {
        ll res=0;
        cin>>n;
        ll v[n];
        For(n)
        {
            cin>>v[i];
        }
        for(int i=0; i<n-1; i++)
        {
            aa = v[i]-v[i+1];
            
            if(aa<0)
                aa=-aa;
            
            res+=aa;
            res--;
        }
        cout<<res<<endl;
    }
}