#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define mod 1000000007
ll memo[100000001];
ll fibo(ll n)
{
    if (n == 1 || n == 0)
        return n;
    // cout << memo[n] << " ";
    if (memo[n] != -1)
        return memo[n] % mod;
    memo[n] = (fibo(n - 1) + fibo(n - 2)) % mod;
    return memo[n] % mod;
}
int main()
{
    MTK;
    ll n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        memo[i] = -1;
    cout << fibo(n) % mod << '\n';
}
// martix expontation diye kora jabe, pore korte parbo, amar kace martix exponentation kora ace, number theory part a
