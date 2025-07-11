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
        int a, b;
        cin >> a >> b;
        if ((a + b) % 3 != 0)
        {
            cout << "NO" << '\n';
            continue;
        }
        if (max(a, b) > 2 * min(a, b))
        {
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';
    }
}