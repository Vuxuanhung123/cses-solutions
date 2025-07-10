#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>set1, set2;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    long long s = 1LL * n * (n + 1) / 2;
    if (s % 2 != 0)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES" << '\n';
    s /= 2;
    for (int i = n;i >= 1;i--)
    {
        if (i <= s)
        {
            set1.push_back(i);
            s -= i;
        }
        else
            set2.push_back(i);
    }
    cout << set1.size() << '\n';
    for (auto i : set1) cout << i << ' ';
    cout << '\n';
    cout << set2.size() << '\n';
    for (auto i : set2) cout << i << ' ';
}