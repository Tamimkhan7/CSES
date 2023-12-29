#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+7;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n+1];
    vector<int>sb(n);
    for(int i=1; i<=n; i++)cin>>a[i];
    a[0]=0;
    for(int i=1; i<=n; i++)
    {
        sb[a[i]]++;
    }
    for(int i=0; i<sb.size(); i++)
        cout<<sb[i]<<" ";

        cout<<endl;
        while(q--)
    {
        int a,b;
        cin>>a>>b;
    }

}
