#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int a[N], pre_sum[N];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)cin>>a[i];
    pre_sum[0]=0;
    for(int i=1; i<=n; i++)
    {
        pre_sum[i] = a[i]+pre_sum[i-1];
    }
    for(int i=1; i<=n; i++)cout<<pre_sum[i]<<" ";
    int r=n, l=1;
    while(true)
    {
        int res = pre_sum[r]-pre_sum[l];
        if(res%7==0)
        {
            find_value++;
            break;
        }
        if(r>l)
            r--;
        else if(r==l)r=n;
        l++;
    }
}
