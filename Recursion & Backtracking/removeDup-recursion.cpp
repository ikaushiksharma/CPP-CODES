#include <bits/stdc++.h>
using namespace std;
string removeDups(string s)
{
    if(s.size()==0)
    return "";
    char ch=s[0];
    string ans=removeDups(s.substr(1));
    if (ch==ans[0])
    {
        return ans;
    }
    else return (ch+ans);


}
int main(){
cout<<removeDups("aabbcceeeedddddfffffqqqq");
return 0;
}