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
    multiset<int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        auto it = m.upper_bound(x); // find of x upper bound continer then remove the upper bound value and set of x value that the continer
        if (it != m.end())
        {
            m.erase(it);
            m.insert(x);
        }
        else
            m.insert(x);
    }
    cout << m.size() << '\n';
}