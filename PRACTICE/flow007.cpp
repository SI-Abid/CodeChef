#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        reverse(s.begin(), s.end());
        cout<<s<<endl;
    }
 
    return 0;
}