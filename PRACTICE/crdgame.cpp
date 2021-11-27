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

ll sumofdig(ll n)
{
    ll x=0;
    while(n>0)
    {
        x+=(n%10);
        n/=10;
    }
    return x;
}

int main()
{
    int t, n; 
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll chef=0, morty=0;
        for(int i=0;i<n;i++)
        {
            ll a, b;
            cin>>a>>b;
            ll aa = sumofdig(a);
            ll bb = sumofdig(b);
            if(aa>bb)
            {
                chef++;
            }
            else if(bb>aa)
            {
                morty++;
            }
            else
            {
                chef++;
                morty++;
            }
            
        }
        if(chef>morty)
        {
            cout<<"0 "<<chef<<endl;
        }
        else if(morty>chef)
        {
            cout<<"1 "<<morty<<endl;
        }
        else
        {
            cout<<"2 "<<chef<<endl;
        }
    }
    return 0;
}