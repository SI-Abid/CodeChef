#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define be begin()
#define en end()
#define all(x) (x).begin(),(x).end()
#define out cout<<setprecision(20)

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

int sod(string s)
{
    int n=0;
    for(int i=0; i<s.size(); i++)
    {
        n+=(s[i]-48);
    }
    return n;
}
void solve()
{
    ll l, r;
    cin>>l>>r;
    ll sum=0;
    while(l<=r)
    {
        string s = to_string(l);
        
        

        if(sum>MOD)
            sum%=MOD;
    }
    cout<<endl<<sum<<endl;
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    for(cin>>t;t;t--)
        solve();
    
    return 0;
}
