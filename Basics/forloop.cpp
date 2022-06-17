#include <iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cin>>n;
    if (n>0){
        for (int a=1; n>=a ; a++){
            sum =sum+a; 
        }           
    }
    else{
            cout<<"Invalid";
    }
    if (sum !=0)
        cout<<sum;
    return 0;
}