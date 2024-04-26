#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n, a, b;
    cin >> n >> a >> b;
    int ar[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    deque<int> dq;

    ll currsum = 0, maxsum = LLONG_MIN;
    for (int i = 1, j = 1; i <= n; i++)
    {
        currsum += ar[i];
        if (i - j + 1 > b)
        {
            currsum -= ar[j];
            j++;
        }
        while (!dq.empty() and dq.front() < j)
            dq.pop_front();
        if (i - j + 1 >= a)
            maxsum = max(maxsum, currsum);
        // cout << maxsum << '\n';
        while (!dq.empty() and currsum <= currsum - ar[dq.back()])
            dq.pop_back();
        dq.push_back(i);
        // for (auto x : dq)
        // cout << x << ' ';
        // cout << '\n';
    }
    cout << maxsum << '\n';
    return 0;
}
