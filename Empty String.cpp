#include<bits/stdc++.h>
using namespace std;
#define MTK ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mem(a, b) memset(a, b ,sizeof(a))
#define trace(x) cout<<#x<<' '<< x <<endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main() {
    MTK;
string s;cin>>s;
map<char,int>mp;
for(auto x: s)mp[x]++;
int ans = 0;
for (auto [x, y] : mp)
{
    ans+= y/2%mod;
    ans%=mod;
}
cout<<ans<<'\n';
    return 0;
}