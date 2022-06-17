#include<bits/stdc++.h>
using namespace std;
int partition(int a[], int l, int r)
{
    int pivot=a[r];
    int pindex=l;
    for (int i = l; i < r; i++)
    {
        if (a[i]<=pivot)
        {
            swap(a[i],a[pindex]);
            pindex++;
        }
    }
    swap(a[pindex],a[r]);
    return pindex;
}
void quicksort(int a[], int l, int r)
{
    if (l<r)
    {
        int p=partition(a,l,r);
        quicksort(a,l,p-1);
        quicksort(a,p+1,r);
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}