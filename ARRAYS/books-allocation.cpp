#include <bits/stdc++.h>
using namespace std;
int maxpages(int n, int a[])
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, a[i]);
    }
    return ans;
}
int sumofarr(int n, int a[])
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
    }
    return ans;
}
bool isFeasible(int n, int a[], int k, int res)
{
    int student = 1;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (currsum + a[i] > res)
        {
            currsum = a[i];
            student++;
        }
        else
        {
            currsum += a[i];
        }
    }
    return student <= k;
}
int minPages(int n, int a[], int k)
{
    int st = maxpages(n, a);
    int en = sumofarr(n, a);
    int res = -1;
    while (st <= en)
    {
        int mid = (st + en) / 2;
        if (isFeasible(n, a, k, mid))
        {
            en = mid - 1;
            res = mid;
        }
        else
            st = mid + 1;
    }
    return res;
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
    int k;
    cin >> k;
    cout << minPages(n, a, k);
    return 0;
}