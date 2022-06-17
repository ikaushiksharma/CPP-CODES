#include <iostream>
#include <math.h>
using namespace std;
bool check(int n){
    if(n>=65 && n<=90 || n<=122 && n>=97){
        return true;
    }return false;
}
int main()
{   char a;
    cin>>a;
    if(check(a)){
        cout<<"Character is an alphabet.";
    }else{
        cout<<"Character is not an alphabet.";
    }
    return 0;
}