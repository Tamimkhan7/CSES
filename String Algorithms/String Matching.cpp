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
    string s, ss;
    cin >> s >> ss;
    int n = s.size();
    int m = ss.size();
    int cnt = 0;
    for (int i = 0; i < n - m + 1; i++)
    {
        string ans = s.substr(i, m);
        if (ans == ss)
            cnt++;
    }
    cout << cnt << '\n';
    return 0;
}