#include <bits/stdc++.h>
using namespace std;
int powertillp(int n, int p){
    if (p==0)
    {
        return 1;
    }
    int prevpower=powertillp(n, p-1);
    return n*prevpower;
}
int main(){
int n, p;
cin>>n>>p;
cout<<powertillp(n,p);
return 0;
}