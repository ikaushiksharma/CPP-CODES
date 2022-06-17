#include <iostream>
#include <math.h>
using namespace std;
int linearSearch(int n, int arr[], int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key==arr[i])
        {
        return i;
        }
    }
    return -1;  
}
int binarySearch(int n, int arr[], int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (key<arr[mid])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
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
    int key;
    cin>>key;
    cout<<binarySearch(n,arr,key);
    return 0;
}