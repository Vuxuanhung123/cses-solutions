#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    if (n <= 3 && n >= 2)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    if (n % 2 == 1)
    {
        for (int i = 2;i < n;i += 2)
            cout << i << ' ';
        for (int i = 1;i <= n;i += 2)
            cout << i << ' ';
        
    }
    else
    {
        for (int i = 2;i <= n;i += 2)
            cout << i << ' ';
        for (int i = 1;i < n;i += 2)
            cout << i << ' ';
    }
}