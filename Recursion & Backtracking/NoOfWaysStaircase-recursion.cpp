#include <bits/stdc++.h>
using namespace std;
int staircase(int s,int e)
{
        if (s==e)
        return 1;
        if(s>e)
        return 0;
    int count=0;
    for (int i = 0; i < 6; i++)
    {
        count+=staircase(s+i+1,e);
    }
    
    return count; 
}
int main(){
cout<<staircase(0,3);
return 0;
}