#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>f[1000005];
bool visited[1000005];
int dist[1000005];
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
    int node = 1;
    for (int i = 1;i <= n;++i)
    {
        if (dist[i] > dist[node])
            node = i;
    }
    fill(visited, visited + n + 1, 0);
    fill(dist, dist + n + 1, 0);
    dfs(node, 0);
    cout << *max_element(dist + 1, dist + n + 1);
}