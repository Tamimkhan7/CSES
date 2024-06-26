#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 9;
int a[N];

int32_t main()
{
    MTK;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    multiset<int> se;
    int r = 1, p;
    if (k % 2)
        p = k / 2;
    else
        p = k / 2 - 1;
    for (int l = 1; l <= n - k + 1; l++)
    {
        while ((se.size() < k) && (r <= n))
            se.insert(a[r++]);
        o_set<int> os;
        for (auto x : se)
            os.insert(x);

        // auto it = se.begin();
        // advance(it, x);
        // cout << *it << ' ';
        cout << *os.find_by_order(p) << ' ';
        se.erase(se.find(a[l]));
    }
    cout << '\n';
    return 0;
}
