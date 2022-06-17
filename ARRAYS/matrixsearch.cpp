#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int key;
    cin>>key;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            {cin>>a[i][j];}
    }
    bool found = false;
    int r=0, c=n-1;
    while(r<m && c>=0)
    { 
        if(a[r][c] == key)
           { 
           found = true;
           break;
           }

        (a[r][c]>key?c--:r++);        
    }
    if (found)    
    cout<<"Element found at ("<<r<<", "<<c<<")";
    else
    cout<<"Element not found.";
    return 0;
}