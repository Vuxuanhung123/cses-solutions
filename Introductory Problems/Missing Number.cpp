#include<bits/stdc++.h>
using namespace std;
int n;
int mark[1000005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n - 1;++i)
    {
        int x;
        cin >> x;
        mark[x] = 1;
    }
    for (int i = 1;i <= n;++i)
    {
        if (mark[i] == 0)
        {
            cout << i;
            break;
        }
    }
}