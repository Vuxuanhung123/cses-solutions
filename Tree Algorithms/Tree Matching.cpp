#include<bits/stdc++.h>
using namespace std;
vector<int>f[1000005];
int n;
int ans;
bool used[1000005];
bool visited[1000005];
void dfs(int u)
{
    visited[u] = 1;
    for (int v : f[u])
    {
        if (!visited[v])
        {
            dfs(v);
            if (!used[u] && !used[v])
            {
                used[u] = used[v] = true;
                ans++;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1;i < n;++i)
    {
        int u, v;
        cin >> u >> v;
        f[u].push_back(v);
        f[v].push_back(u);
    }
    dfs(1);
    cout << ans;
}