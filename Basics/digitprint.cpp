#include <iostream>
using namespace std;
int main ()
{
    int n,dig;
    cout<<"Enter the number";
    cin>>n;
    while(n>0){
        dig=n%10;
        cout<<dig<<"    ";
        n=n/10;
        
    }         
    return 0;
}