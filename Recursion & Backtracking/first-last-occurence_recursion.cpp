#include <bits/stdc++.h>
using namespace std;
int firstoccurence(int n, int arr[],int i,int key)
{
    if (i==n)
    {
        return -1;
    }
    
    if (arr[i]==key)
    {
        return i;
    }
    return firstoccurence(n,arr,i+1,key);
    
}
int lastoccurence(int n, int arr[],int i,int key)
{
    if (i==-1)
    {
        return -1;
    }
    if (arr[i]==key)
    {
        return i;
    }
    return lastoccurence(n,arr,i-1,key);
    
    
}
int main(){
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
int key;
cin>>key;
cout<<firstoccurence(n, a,0,key)<<endl;
cout<<lastoccurence(n, a,n,key);
return 0;
}