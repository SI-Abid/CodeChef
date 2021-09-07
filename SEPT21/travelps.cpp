// #include<stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
//         int n,a,b;
//         scanf("%d%d%d",&n,&a,&b);
//         char *s;
//         scanf("%s",s);
//         int ans=0;
//         for (int i = 0; i < n; i++)
//         {
//             if(s[i]=='0')
//                 ans+=a;
//             else
//                 ans+=b;
//         }
//         printf("%d\n",ans);
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        char c;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>c;
            
            if(c=='0')
                ans+=a;
            else
                ans+=b;
        }
        cout << ans << endl;
    }

    return 0;
}