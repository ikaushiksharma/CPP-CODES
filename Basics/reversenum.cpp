#include <iostream>
using namespace std;
int main()
{
    int n;
    int rev=0;
    cin>>n;
    while(n>0)
    {
        int dig=n%10;
        rev=rev*10 + dig;
        n=n/10;
    }cout<<"Reverse Number is "<<rev;
    return 0;
}