#include <bits/stdc++.h>
using namespace std;
string keypadArr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s,string ans)
{
    if (s.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=keypadArr[ch-'0'];
    string ros=s.substr(1);
    for (int i = 0; i < code.size(); i++)
    {
        keypad(ros, ans+code[i]);
    }
    
    
}
int main(){
string n;
getline(cin,n);
keypad(n,"");
return 0;
}