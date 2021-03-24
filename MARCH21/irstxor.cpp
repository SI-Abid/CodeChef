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

ll bin_to_int(string s)
{
    ll d=0;
    int n=s.size()-1;
    for(int i=0; i<=n; i++)
    {
        d+=(s[i]-48)<<(n-i);
    }
    return d;
}
string int_to_bin(int n)
{
    string s="";
    while(n)
    {
        s+= (char)(n%2)+48;
        n/=2;
    }
    reverse(all(s));
    return s;
}
void solve()
{
    int c, bit;
    cin>>c;
    string a="", b="";
    bool cek=true;
    for(auto bit:int_to_bin(c))
    {
        // bit=c%2;
        // cout<<bit;
        if(bit=='1')
        {
            cek?a+="1",b+="0":a+="0",b+="1";
            cek=false;
        }
        else
        {
            a+="1", b+="1";
        }
    }
    b.pop_back();
    // cout<<endl;
    // puts(a.c_str());
    // puts(b.c_str());
    ll ans = bin_to_int(a)*bin_to_int(b);
    cout<<ans<<endl;
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
