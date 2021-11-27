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

int zeros(int n)
{
    int ans=0;
    while(n)
    {
        ans+=n/5;
        n/=5;
    }
    return ans;
}

int main()
{
    vi v;
    v.pb(0);    
    for(int i=1; i<=1000000000; i++)
    {
        if(i%5==0)                  //update every 5th value
            v.pb(zeros(i));
        else
            v.pb(v[i-1]);
        // cout<<v[i]<<endl;
    }
    // cout<<"Ready...\n";
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<v[n]<<endl;
    }
    return 0;
}