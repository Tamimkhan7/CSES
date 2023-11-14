#include <bits/stdc++.h>
using namespace std;
#define ll long long
int N=1e7+7;
int sb[N];
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>>a[i];
    ll sum=0;
    a[0]=0;//first index insert the value 0
    for(int i=1; i<=n; i++)
    {
        sb[i]= a[i]+a[i-1];//use prefix sum
    }
    int ct=0;
   for(int i=1; i<=n; i++)cout<<a[i]<<" ";
    cout<<endl;


    for(int i=1; i<=n; i++)
    {
        int res = a[i]-a[i-1];
        if(res==x)
        {
            ct++;
        }else if(a[i]==x)ct++;
    }
    cout<<ct<<endl;
}
