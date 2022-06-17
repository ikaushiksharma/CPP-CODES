#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    int rst=0;
    int ren=n-1;
    int cst=0;
    int cen=m-1;
    while(rst<=ren && cst<=cen)
    {
            for (int i = cst; i <= cen; i++)
            {
                cout<<a[rst][i]<<" ";
            }
            rst++;
            

            for (int i = rst; i <= ren; i++)
            {
                cout<<a[i][cen]<<" ";
            }
            cen--;
            

            for (int i = cen; i >= cst; i--)
            {
                cout<<a[ren][i]<<" ";
            }
            ren--;
            
            
            for (int i = ren; i >= rst; i--)
            {
                cout<<a[i][cst]<<" ";
            }
            cst++;
            
    }
    return 0;
}
