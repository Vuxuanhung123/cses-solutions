#include<bits/stdc++.h>
using namespace std;
string s;
int ans = 0;
int cnt = 1;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> s;
    for(int i=1;i<s.size();++i)
    {
        if(s[i]==s[i-1])
            cnt++;
        else {
            ans=max(ans,cnt);
            cnt = 1;
        }
    }
    ans = max(ans, cnt);
    cout << ans;
}