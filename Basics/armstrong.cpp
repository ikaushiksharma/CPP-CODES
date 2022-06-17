#include <iostream>
using namespace std;
int main(){
    int n,dig;
    int sum=0;
    cin>>n;
    int dummy=n;
    while(n>0){
        dig=n%10;
        sum+=dig*dig*dig;
        n=n/10;
    }
    if (sum==dummy)
    {
        cout<<"Armstrong number";
    }else{
        cout<<"Not an Armstrong number";
    }
    return 0;
}