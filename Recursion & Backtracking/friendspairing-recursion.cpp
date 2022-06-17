#include <bits/stdc++.h>
using namespace std;
int noofways(int n)
{
    if (n==0||n==1||n==2)
    {
        return n;
    }
    return noofways(n-1)+noofways(n-2)*(n-1);
    
}
int main(){
cout<<noofways(7);
return 0;
}