#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int mid, int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i]=arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while (i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
            i++;
        }
        else
        {
            arr[k]=b[j];
            j++;  
        }  
        k++;     
    }
    while (i<n1)
    {
        arr[k]=a[i];
        
        i++;
        k++;
    }
    while (j<n2)
    {
        arr[k]=b[j];
        
        j++;
        k++;
    }
}
void mergesort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r-l) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
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
    mergesort(a, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}