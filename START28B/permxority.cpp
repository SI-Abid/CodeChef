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

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==1)
        {
            rep(i,1,n+1)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }
        int p=log2(n);
        if(n==2)
        {
            cout<<"-1"<<endl;
            continue;
        }
        vi v;
        int cnt=0;
        int i=1;
        n/=2;
        while(n--)
        {
            if(cnt%2==0)
            {
                v.pb(i);
                v.pb(i+1);
            }
            else
            {
                v.pb(i+1);
                v.pb(i);
            }
            i+=2;
            cnt++;
        }
        // swaping last two pairs
        n=v.size();
        if(1<<p==n)
        {
            // swap(v[0],v[2]);
            // swap(v[1],v[3]);
            cout<<"2 3 1 4 ";
            rep(i,5,n+1)
            {
                cout<<i<<" ";
            }
        }
        else
        {
            swap(v[n-3],v[n-1]);
            swap(v[n-2],v[n-4]);
            for(auto x:v)
            {
                cout<<x<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
