#include <bits/stdc++.h>

using namespace std;

int MVA(int n, int arr[])
{
    int majindex = 0;
    int counter = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[majindex])
        {
            counter++;
        }
        else
        {
            counter--;
        }
        if (counter == 0)
        {
            majindex = i;
            counter = 1;
        }
    }
    return arr[majindex];
}

void printMajority(int n, int arr[])
{
    int cand = MVA(n, arr);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == cand)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        cout << cand << " is the majority element.";
    }
    else
        cout << "No Majority element.";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printMajority(n, arr);

    return 0;
}