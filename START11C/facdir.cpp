#include<bits/stdc++.h>
using namespace std;

int main()
{
    string dir[]={"North","East","South","West"};
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<dir[n%4]<<endl;
    }   
    
    return 0;
}