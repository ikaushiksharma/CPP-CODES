#include <bits/stdc++.h>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
void countSort(int a[], int n)
{
    int m = a[0];
    for (int i = 0; i < n; i++)
        m = max(a[i], m);

    int count[m + 1] = {0};
    for (int i = 0; i < n; i++)
        count[a[i]]++;
    int j = 0;
    for (int i = 0; i <= m; i++)
    {
        while (count[i] > 0 && j < n)
        {
            a[j] = i;
            count[i]--;
            j++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    countSort(a, n);
    display(a, n);
    return 0;
}