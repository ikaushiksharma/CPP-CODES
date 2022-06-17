#include <bits/stdc++.h>
using namespace std;
int josephusproblem(int n,int k)
{
    if (n==1)
    {
        return 0;
    }
    return (josephusproblem(n-1,k)+k)%n;
}
int main(){
cout<<josephusproblem(5,3);
return 0;
}