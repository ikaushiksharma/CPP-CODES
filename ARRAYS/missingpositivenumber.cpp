#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int m=0;
    int ans=-1;
    for (int i = 0; i < n; i++)
    {
        m=max(m, a[i]);
    }
    bool check[m];
    for (int i = 0; i < m; i++)
    {
        check[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>=0)
        {
            check[a[i]]=1;
        }
    }
    for (int i = 1; i < m; i++)
    {
        if (check[i] == 0)
        {
            ans=i;
            break;
        }
    }
    cout<<ans;    
    return 0;    
}
