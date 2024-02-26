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
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(x - a[i]) != mp.end())
        {
            cout << mp[x - a[i]] << ' ' << i << '\n';
            return 0;
        }
        mp[a[i]] = i;
        // cout << mp[i] << ' ';
    }
    cout << "IMPOSSIBLE" << '\n';
}