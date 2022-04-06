#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(sum(n)%2 ^ sum(n+1)%2)
        {
            cout<<n+1<<endl;
        }
        else
        {
            cout<<n+2<<endl;
        }
    }
    return 0;
}