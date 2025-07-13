#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>f[1000005];
bool visited[1000005];
int dist[1000005];
int dist_u[1000005];
int dist_v[1000005];
void dfs(int u, int d)
{
    visited[u] = 1;
    dist[u] = d;
    for (auto v : f[u])
    {
        if (!visited[v])
            dfs(v, d + 1);
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
    dfs(1, 0);
    int u = 0;
    for (int i = 1;i <= n;++i)
    {
        if (dist[i] > dist[u])
            u = i;
    }
    fill(dist, dist + n + 1, 0);
    fill(visited, visited + n + 1, 0);
    dfs(u, 0);
    int v = 0;
    for (int i = 1;i <= n;++i)
    {
        dist_u[i] = dist[i];
        if (dist[i] > dist[v])
            v = i;
    }
    fill(dist, dist + n + 1, 0);
    fill(visited, visited + n + 1, 0);
    dfs(v, 0);
    for (int i = 1;i <= n;++i)
    {
        dist_v[i] = dist[i];
    }
    for (int i = 1;i <= n;++i)
    {
        cout << max(dist_u[i], dist_v[i]) << ' ';
    }
}