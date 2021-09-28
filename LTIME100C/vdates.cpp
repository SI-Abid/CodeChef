#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,l,r;
        cin>>d>>l>>r;
        if(d<l)
        {
            puts("Too Early");
        }
        else if(d>r)
        {
            puts("Too Late");
        }
        else
        {
            puts("Take second dose now");
        }
    }
    
    return 0;
}