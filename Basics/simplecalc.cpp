#include <iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"Enter the numbers ";
    cin>>a>>b;
    char op;
    cout<<endl<<"Enter the operation ";
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<endl<<a+b;
        break;
        case '-':
        cout<<endl<<a-b;
        break;
        case '*':
        cout<<endl<<a*b;
        break;
        case '/':
        cout<<endl<<a/b;
        break;
        default:
        cout<<"Enter a valid operator.";
    }  
    return 0;  
}