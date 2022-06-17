#include <bits/stdc++.h>
using namespace std;
void reverse(string s)
{
    if (s.size()==0)    
    {
        return;
    }
    string rest=s.substr(1, s.size());
    reverse (rest);
    cout<<s[0];
    
}
int main(){
string s;
getline(cin,s);
reverse(s);
return 0;
}