#include <iostream>
#include <math.h>
using namespace std;
int max(int n1,int n2,int n3){
    int max;
    if(n1>=n2 && n1>=n3)
    {
        max=n1;
    }   
    else if(n2>=n1 && n2>=n3){
        max=n2;
    }else {max=n3;}
    return max;
}
int min(int n1,int n2,int n3){
    int min;
    if(n1<=n2 && n1<=n3)
    {
        min=n1;
    }   
    else if(n2<=n1 && n2<=n3){
        min=n2;
    }else {min=n3;}
    return min;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"Maximum of the three numbers is "<<max(a,b,c)<<endl;
    cout<<"Minimum of the three numbers is "<<min(a,b,c);
    return 0;
}