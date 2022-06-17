#include <iostream>
using namespace std;
int main()
{
    int n;
    int a=0, b=1;
    cin>>n;
    cout<<a<<"  "<<b<<" ";
    for(int i=3; i<=n;i++)
    {
        int c=a+b;
        cout<<c<<"  ";
        a=b; b=c;
    }
    return 0;
}