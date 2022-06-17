#include <bits/stdc++.h>
using namespace std;
int kadane(int n, int a[])
{
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += a[i];
        if (currsum < 0)
            currsum = 0;
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += a[i];
        a[i]*=-1;
    }
    int ans = totalsum + kadane(n, a);
    cout << ans;
    return 0;
}