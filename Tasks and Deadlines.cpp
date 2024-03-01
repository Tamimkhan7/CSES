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
    vector<int> v;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int d, f;
        cin >> d >> f;
        v.push_back(d);
        ans += f;
    }
    sort(all(v));
    ll sum = 0;
    for (auto x : v)
    {
        sum += x;
        // cout << sum << ' ';
        ans -= sum;
        // cout << ans << '\n';
    }
    cout << ans << '\n';
}