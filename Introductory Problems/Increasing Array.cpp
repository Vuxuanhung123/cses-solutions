#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000005];
long long ans = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i)
    {
        cin >> a[i];
    }
    for (int i = 2;i <= n;++i)
    {
        if (a[i] < a[i - 1])
        {
            ans += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << ans;
}