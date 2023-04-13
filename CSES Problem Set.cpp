#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    faster;
    ll n, x, i;
    cin >> n >> x;
    ll arr[n];
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += arr[i];
        if (sum > x)
        {
            sum -= arr[i];
        }
        else if (sum == x)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    if (sum != x)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
