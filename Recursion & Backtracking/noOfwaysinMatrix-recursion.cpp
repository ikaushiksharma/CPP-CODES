#include <bits/stdc++.h>
using namespace std;
int noOfways(int n,int m)
{
    if (n==1 || m==1)
        return 1;
    return noOfways(n-1,m)+noOfways(n,m-1); 
    
}
int main(){
cout<<noOfways(4,3);
return 0;
}