#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
void result(int x,int y, int z)
{   int a=max(x,max(y,z));
    int b,c;
    if (a==x){
        b=y;
        c=z;
    }else if (a==y)
    {
        b=x;
        c=z;
    }else{
        c=x; b=y;
    }
    if (a*a == b*b + c*c)
    {
        cout<<"Pythagorean Triplet";
    }else {
        cout<<"Not a Pythagorean triplet";
    }
    return;
       
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    result(x,y,z);
    return 0;
}