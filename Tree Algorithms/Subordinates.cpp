#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000005];
vector<int>tree[1000005];
int subordinates[1000005];
int dfs(int u)
{
    int cnt = 0;
    for (auto v : tree[u])
    {
        cnt += dfs(v) + 1;
    }
    subordinates[u] = cnt;
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 2;i <= n;++i)
    {
        int boss;
        cin >> boss;
        tree[boss].push_back(i);
    }
    dfs(1);
    for (int i = 1;i <= n;++i)
        cout << subordinates[i] << ' ';
}