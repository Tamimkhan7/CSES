#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+9;
int a[N], pre[N];
int main()
{
    int n,q;
    cin>>n>>q;
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<=n; i++)pre[i]= pre[i-1]^a[i];
    while(q--)
    {
       int l,r;
        cin>>l>>r;
        cout<<(pre[r]^pre[l-1])<<endl;
    }
}
