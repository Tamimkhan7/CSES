#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
const int N = 2e5 + 9;
int a[N], t, n;
#define mod 1000000007
void solve()
{
    sort(a, a + n);
    // reverse(a,a+n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (t / a[i]);
        if (ans >= t)
            break;
    }
    if (ans < t)
    {
        for (auto x : a)
        {
            ans += x;
            if (ans >= t)
                break;
        }
    }
    cout << ans << '\n';
}
int32_t main()
{
    MTK;
    cin >> n >> t;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    solve();
}