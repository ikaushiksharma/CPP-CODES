#include<bits/stdc++.h>
#include<iostream>
#include <math.h>
using namespace std;
int binarytodecimal(int n)
{
    int x=1;
    int num=0;
    int dig;
    while(n>0)
    {
        dig=n%2;
        dig*=x;
        x*=2;
        num+=dig;
        n/=10;
    }
    return num;
}
int octaltodecimal(int n)
{
    int x=1;
    int num=0;
    int dig;
    while(n>0)
    {
        dig=n%10;
        dig*=x;
        x*=8;
        num+=dig;
        n/=10;
    }
    return num;
}
int hexadecimaltodecimal(string n)
{
    int x=1;
    int num=0;
    int s=n.size();
    for(int i=s-1; i>=0; i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            num+=x*(n[i]-'0');
        }else if (n[i]>='A' && n[i]<='F')
        {
            num+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return num;
}
int decimaltobinary(int n)
{
    int x=1;
    int num=0;
    while(x<=n)
    {
        x*=2;
    }x/=2;
    while(x>0)
    {
        int dig=n/x;
        n-=dig*x;
        x/=2;
        num=num*10+dig;
    }
    return num;
}    
int main()
{
int n;
cin>>n;
cout<<decimaltobinary(n);    
return 0;
}