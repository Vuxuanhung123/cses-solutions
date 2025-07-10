#include<bits/stdc++.h>
using namespace std;
int n;
int MOD = 1e9 + 7;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);
   cin>>n;
   long long s=1;
   for(int i=1;i<=n;++i)
   {
       s = s * 2;
       s %= MOD;
   }
   cout << s;
}