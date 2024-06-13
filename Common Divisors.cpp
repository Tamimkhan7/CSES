#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 2e5 + 9;
int n, a[N];
int answer;

int32_t main()
{
    MTK;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    map<int, int> pre;
    for (int i = 1; i <= n; i++)
    {
        int x = a[i];
        for (int j = 1; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                pre[j]++;
                if (j != x / j)
                    pre[x / j]++;
            }
        }
    }
    // reverse(all(pre));
    int ans = 0;
    for (auto [x, y] : pre)
    {
        if (y > 1)
            ans = max(ans, x);
    }
    cout << ans << '\n';
    return 0;
}