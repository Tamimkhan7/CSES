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
    int r = 1, x;
    if (k % 2)
        x = k / 2;
    else
        x = k / 2 - 1;
    for (int l = 1; l <= n - k + 1; l++)
    {
        while ((se.size() < k) && (r <= n))
            se.insert(a[r++]);

        auto it = se.begin();
        advance(it, x);
        vector<int> v(all(se));
        ll ans = 0;
        for (int i = 0; i < k; i++)
            ans += abs(*it - v[i]);

        cout << ans << ' ';

        se.erase(se.find(a[l]));
    }
    cout << '\n';
    return 0;
}
