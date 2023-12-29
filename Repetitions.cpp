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
    string s;
    cin >> s;
    int len = s.size();
    int c = 0, k = -1;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
        else
        {
            c += 1;
            if (c > k)
            {
                k = c;
            }
            c = 0;
        }
    }
    if (c != 0)
        cout << c + 1 << endl;
    else
        cout << k << endl;
}
