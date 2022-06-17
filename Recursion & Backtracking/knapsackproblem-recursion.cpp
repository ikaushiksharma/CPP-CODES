#include <bits/stdc++.h>
using namespace std;
int knapsack(int val[],int w[],int n, int W)
{
    if (W<=0 || n==0)
    return 0;

    if(w[n-1]>W)
    return knapsack(val,w,n-1,W);
    return max(knapsack(val,w,n-1,W-w[n-1])+val[n-1], knapsack(val,w,n-1,W));
    
}
int main(){
    int w[]={10,20,30};
    int val[]={100,50,150};
    cout<<knapsack(val,w,3,50);
return 0;
}