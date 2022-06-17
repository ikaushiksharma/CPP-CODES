#include <iostream>
using namespace std;

int main (){
    int a,b,c;
    cin>>a>>b>>c;

    if (a==b&&b==c){
        cout<<"Triangle is equilateral";
    }
    else{
        if (a == b || b == c || a == c){
        cout<<"Triangle is isoceles";
        }
        else cout<<"Triangle is scalene";

    }
    return 0;
}