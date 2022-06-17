#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int minsofar=arr[0];
    int maxprofit=0;
    for (int i = 0; i <n; i++)
    {
        minsofar=min(arr[i],minsofar);
        int profit= arr[i]-minsofar;
        maxprofit=max(maxprofit, profit);
    }
    cout<<maxprofit<<endl;

    return 0;
}