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
        if (a > b)
            swap(a, b);
        if (b - a > 2 or a == b)
            puts("0");
        else if (b - a == 2 or a == 1 or b == n)
            puts("1");
        else
            puts("2");
    }

    return 0;
}