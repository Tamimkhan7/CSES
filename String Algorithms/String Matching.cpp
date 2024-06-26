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
    for (int i = 0; i < n; i++)
    {
        int p = 0;
        for (int j = 0; j < m; j++)
        {
            if (s[i] == ss[j])
            {
                p++;
                // cout << s[i] << ' ' << ss[j] << '\n';
                if (j < m - 1)
                    i++;
            }
            else if (s[i] != ss[j])
                break;
            // cout << p << '\n';
            if (p == m)
                cnt++;

            // else
            //     break;
        }
    }
    cout << cnt << '\n';
    return 0;
}