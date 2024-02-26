#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 7;
int sb[N];
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll sum = 0;
    sb[0] = 0; // first index insert the value 0
    for (int i = 1; i <= n; i++)
    {
        sb[i] = a[i] + sb[i - 1]; // use prefix sum
    }
    int ct = 0;
    int r = n, l = r - 1;
    while (l >= 0 && r >= 0)
    {
        if (l == 0)
            r--, l = r - 1;
        if (sb[r] == x)
        {
            ct++;
            // cout<<sb[r]<<" ";
        }
        if ((sb[r] - sb[l]) == x)
        {
            ct++;
            // cout<<(sb[r]-sb[l])<<" ";
        }
        l--;
    }
    //  cout<<endl;
    cout << ct << endl;
}
