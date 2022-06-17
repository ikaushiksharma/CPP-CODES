#include <bits/stdc++.h>
using namespace std;
void primeSieve(int n)
{
    bool prime[n + 1] = {0};
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (!prime[i])
        {
            for (int j = 2*i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (!prime[i])
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    primeSieve(n);
    return 0;
}