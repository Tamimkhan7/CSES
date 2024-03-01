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
    int x, n;
    cin >> x >> n;
    priority_queue<int, vector<int>, greater<int>> p; // as value of ascending order
    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        p.push(k);
    }
    ll ans = 0;
    while (p.size() > 1)
    {
        int a = p.top();
        p.pop();
        int b = p.top();
        p.pop();
        ans += (a + b);
        p.push(a + b);
    }
    cout << ans << '\n';
}