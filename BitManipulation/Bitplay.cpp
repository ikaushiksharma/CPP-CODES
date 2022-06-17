#include<iostream>
using namespace std;
int getBit(int n, int pos)
{
    return ((n&(1<<pos))!=0);
}
int setBit(int n, int pos)
{
    return (n | (1<<pos));
}
int clearBit(int n, int pos)
{
    return (n & (~(1<<pos)));
}
int toggleBit(int n, int pos)
{
    return (n ^ (1<<pos));
}
int main()
{
    int n, pos;
    cin>>n>>pos;
  //  cout<<clearBit(n,pos);
    cout<<toggleBit(n,pos);
    return 0;
}