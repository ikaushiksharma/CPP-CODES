#include <bits/stdc++.h>
using namespace std;
string moveX(string s)
{
    if (s.size()==0)
    return "";
    char ch=s[0];
    string ans=moveX(s.substr(1));
    if (ch=='x')
    return (ans+ch);
    else return (ch+ans);
    
}
int main(){
cout<<moveX("kaushikx shaxrma xisx axx coxder. ");
return 0;
}