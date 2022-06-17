#include<bits/stdc++.h>
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
    
    int ans=1;
    int curr=0;
    if (a[0]>a[1])
        {
            ans++;
            curr=a[0];
        }
    for (int i = 1; i < n-1; i++)
    {
        if (a[i]>a[i+1] && a[i]> curr)
        {
            ans++;
            curr=a[i];
        }
        
    }
    cout<<ans<<endl;
    return 0;
}