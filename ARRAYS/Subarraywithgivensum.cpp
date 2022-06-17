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
    int S;
    cin>>S;
    int st=0;
    int en=0;
    int sum=a[st];
    while(sum!=S && en<n && st<n)
    {
        if (sum<S)
        {
            sum+=a[en];
            en++;
        }
        else if (sum>S)
        {
            sum=a[st+1];
            en=st+2;
            st++;
        } 
        else {break;} 
    }
    cout<<st<<" "<<en;
    return 0;
}