////////////////////////////////////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define be begin()
#define en end()
#define rb rbegin()
#define re rend()
#define all(x) (x).begin(),(x).end()
#define out cout<<setprecision(20)
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cout << #x << " is " << x << endl;
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define pcase(x) cout << "Case " << x << ": ";
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) { cerr << *it << " = " << a << endl; err(++it, args...); }

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
const int fx[]={0,1,1,1,0,-1,-1,-1};
const int fy[]={1,1,0,-1,-1,-1,0,1};

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vll v(n);
        vll v1(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            v1[i]=v[i];
        }
        string s;
        cin>>s;
        sort(all(v1));
        if(is_sorted(all(v)))
        {
            cout<<"0\n";
            continue;
        }
        int i,j;
        for(i=0; i<n; i++)
        {
            if(v[i]!=v1[i])
            {
                break;
            }
        }
        for(j=n-1; j>=0; j--)
        {
            if(v[j]!=v1[j])
            {
                break;
            }
        }
        int ans;
        if(s[i]==s[j])
        {
            ans=2;
        }
        else
        {
            ans=1;
        }
        sort(all(s));
        if(s[0]==s.back())
        {
            ans=-1;
        }
        cout<<ans<<endl;
    }

    return 0;
}
