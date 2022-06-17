#include<iostream>
using namespace std;
int numofones(int n)
{
    int count = 0;
    while(n>0)
    {
        n = n & (n-1);
        count++;      

    }
    return count;
}
int checkifpoweroftwo(int n)
{
      if (n & (n-1))
    {cout<<"Number is not a power of 2";}
    else
    {cout<<"Number is a power of 2";}
}
void subsets(int arr[], int n)
{
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n ; j++)
        {
           // if (i & (1<<j))
         //   {
                cout<<arr[j]<<" ";    
         //   }
            
            
        }
        cout<<endl;
        
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
    
   // checkifpoweroftwo(n);
   // cout<<numofones(n);
   subsets(arr,n);
    return 0;
}