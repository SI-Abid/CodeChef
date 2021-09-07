#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, od, ev;
        cin >> n;
        od=ev=0;
        for (int i = 0; i < n; i++)
        {
            ll d;
            cin >> d;
            if(d&1) od++;
            else    ev++;
        }
        
        int ans = min(od,n/2)+min(ev,(n+1)/2);

        cout<<ans<<endl;

    }   
    
    return 0;
}