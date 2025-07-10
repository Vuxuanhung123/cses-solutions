#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for (int k = 1;k <= n;++k)
    {
        cout << 1LL * k * k * (1LL * k * k - 1) / 2 - 4ll * (k - 1) * (k - 2) << '\n';
    }
}