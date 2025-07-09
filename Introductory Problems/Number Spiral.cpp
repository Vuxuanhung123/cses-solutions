#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while (t--)
    {
        long long y, x;
        cin >> y >> x;
        long long ans;
        if (y > x)
        {
            if (y % 2 == 0)
                ans = y * y - x + 1;
            else ans = (y - 1) * (y - 1) + x;
        }
        else
        {
            if (x % 2 == 1)
                ans = x * x - y + 1;
            else ans = (x - 1) * (x - 1) + y;
        }
        cout << ans << '\n';
    }
}