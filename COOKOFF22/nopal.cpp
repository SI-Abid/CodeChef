#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char c='a';
        for(int i=0;i<n;i++)
        {
            cout<<(char)(c+(i%26));
        }
        cout<<endl;
    }
    return 0;
}