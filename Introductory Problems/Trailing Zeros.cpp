#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    long long dem = 0;
    long long x = 5;
    while (n / x != 0)
    {
        dem += n / x;
        x *= 5;
    }
    cout << dem;
}