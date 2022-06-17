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
    
    int low=0, mid=0, high=n-1;
    for (int i = 0; mid<high;i++)
    {
        if (a[mid]==0)
        {
            swap(a[mid],a[low]);
            low++;
            mid++;
        }
        if (a[mid]==2)
        {
            swap(a[high], a[mid]);
            high--;
        }
        if(a[mid]==1)
        mid++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}