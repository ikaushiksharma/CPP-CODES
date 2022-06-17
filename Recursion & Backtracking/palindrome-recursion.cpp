#include <bits/stdc++.h>
using namespace std;
bool isPalin(string s,int st)
{
    int en=s.size()-1-st;
    if (st>=en)
    {
        return true;
    }
    if (s[st]==s[en])
    {
        return isPalin(s,st+1);
    }
    else return false;
}
int main(){
cout<<isPalin("nitin",0);
return 0;
}