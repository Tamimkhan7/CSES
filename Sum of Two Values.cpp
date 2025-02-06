#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
int32_t main()
{
    MTK;
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    int res, index = -1;
    for (int i = 0; i < n; i++)
    {
        int val = x - v[i];
        if (mp.find(val) != mp.end())
        {
            // show(val), show(v[i]);
            if (val == v[i] and mp[val] > 1)
            {
                res = val;
                index = i;
                // show(index);
                // show(val), show(v[i]);
                break;
            }
            else if (val != v[i])
            {
                res = val;
                index = i;
                // show(index);
                // show(val), show(v[i]);
                break;
            }
        }
        //  mp[val]++;
    }
    if (index != -1)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] == res and (index != i))
            {
                cout << index + 1 << ' ' << i + 1 << '\n';
                return 0;
            }
        }
    }
    else
        cout << "IMPOSSIBLE" << '\n';
}