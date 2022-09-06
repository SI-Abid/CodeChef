#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        // vector<set<int>> vsi;
        vector<vector<int>> vvi;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            vvi.push_back(vector<int>());
            for(int j=0;j<k;j++)
            {
                int x;
                cin>>x;
                vvi[i].push_back(x);
                // vsi.push_back(set<int>());
            }
        }
        bool flag=false;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                set<int> s;
                for(auto x:vvi[i])
                {
                    s.insert(x);
                }
                for(auto x:vvi[j])
                {
                    s.insert(x);
                }
                if(s.size()==5)
                {
                    flag=true;
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}