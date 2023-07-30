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
    int a = 0, g = 0, t = 0, c = 0, l;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'A')
            a++;
        if (a >= l)
        {
            a -= l;
            continue;
        }
        l = a;
        else if (s[i] == 'T')
            t++;
        else if (s[i] == 'G')
            g++;
        else c++;
    }
    if (a > t && a > g && a > c)
        cout << a << endl;
    else if (t > a && t > g && t > c)
        cout << t << endl;
    else if (g > t && g > a && g > c)
        cout << g << endl;
    else
        cout << c << endl;
}
// pore korbo
