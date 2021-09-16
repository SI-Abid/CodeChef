#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(n==2)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout<<"-1 ";
                }
                cout<<endl;
            }
        }
        else
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<(i==j?"-1 ":"1 ");
            }
            cout<<endl;
        }
        
    }   
    
    return 0;
}