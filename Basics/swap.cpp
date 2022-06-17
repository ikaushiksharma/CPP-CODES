#include <iostream>
#include <math.h>
using namespace std;
void swap(int a, int b)
{
    int dummy;
    dummy=a;
    a=b;
    b=dummy;
    cout<<a<<"  "<<b;
    return;
}
int main()
{
    int x,y;
    cin>>x>>y;
    swap(x,y);
    return 0;
}