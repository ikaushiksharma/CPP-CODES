#include <bits/stdc++.h>
using namespace std;
int largest(int arr[], int n)
{
    int pre[n] = {0};
    int ans = INT_MIN;
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            ans = max((pre[j] - pre[i - 1]), ans);
        }
    }
    return ans;
}
int main()
{
    // your code goes here
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);
    cout << largest(arr, n) << endl;
    return 0;
}
