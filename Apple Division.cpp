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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    reverse(all(v));
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
    ll sum = 0, sum2 = 0;
    for (auto x : v)
    {
        if (sum <= sum2)
            sum += x;
        else
            sum2 += x;
    }
    cout << abs(sum - sum2) << '\n';
    return 0;
}