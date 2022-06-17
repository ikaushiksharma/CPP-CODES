#include <bits/stdc++.h>
using namespace std;
int tiles(int n)
{
    if (n==0 || n==1)
    return n;
    return (tiles(n-1)+tiles(n-2));
    
}
int main(){
cout<<tiles(4);
return 0;
}