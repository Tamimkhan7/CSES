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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(all(v), cmp);
    // for (auto [x, y] : v)
    // {
    //     cout << x << ' ' << y << '\n';
    // }
    int start_point = -1, ans = 0;
    for (auto [x, y] : v)
    {
        if (x >= start_point)
        {
            start_point = y;
            ans++;
        }
    }
    cout << ans << '\n';
}