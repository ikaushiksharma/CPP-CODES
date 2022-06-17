#include <bits/stdc++.h>
using namespace std;
bool sorted(int a[], int n)
{
    if (n==1)
    {return true;}

    bool restArray = sorted(a+1, n-1);

    return (a[0]<a[1] && restArray);
}
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0;i < n; i++)
    cin>>arr[i];

cout<<sorted(arr, n)<<endl;
}