#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int S;
    int st = 0;
    int en = n - 1;
    cin >> S;
    while ((a[st] + a[en]) != S && st < en)
    {
        if ((a[st] + a[en]) < S)
        {
            st++;
        }
        else
            en--;
    }
    cout << a[st] << " " << a[en];
    return 0;
}
