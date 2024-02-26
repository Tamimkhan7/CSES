#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int a[n + 1], pref[n + 1];
    pref[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
        pref[i] %= n;
        pref[i] = (pref[i] + n) % n; // when find a negative value then use this
        // cout << pref[i] << ' ';
    }
    // for (int i = 1; i <= n; i++)
    ll ans = 0;
    map<int, int> mp;
    mp[pref[0]]++;
    for (int i = 1; i <= n; i++)
    {
        ans += mp[pref[i]]; // counting pref[i] frequency
        mp[pref[i]]++;
        // cout << mp[i] << ' ';
    }
    // for (auto [x, y] : mp)
    //     cout << x << ' ' << y << '\n';
    // cout << '\n';
    cout << ans << '\n';
}
