#include <iostream>
#include <math.h>
using namespace std;

bool prime(int n1){
    for(int i=2;i<=sqrt(n1); i++)
    {
        if (n1%i==0)
        {
        return false;
        }
    }
    return true;
          
}

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(prime(i)){
            cout<<i<<"  ";
        }
    }
    return 0;
}