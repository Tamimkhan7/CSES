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

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int x = n * (n + 1) / 2;
    if (x % 2)
        cout << "NO" << '\n';
    else
    {
        cout << "YES" << '\n';
        set<ll> a, b;
        ll sum = 0, sum2 = 0;
        for (int i = n; i > 0; i--)
        {
            if (sum <= sum2)
            {
                sum += i;
                a.insert(i);
            }
            else
            {
                sum2 += i;
                b.insert(i);
            }
        }
        cout << b.size() << '\n';
        for (auto x : b)
            cout << x << ' ';
        cout << '\n';
        cout << a.size() << '\n';
        for (auto x : a)
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}