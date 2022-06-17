#include <bits/stdc++.h>
using namespace std;

void permutations(string s,int index)
{
    if(index>=s.size())
    {
        cout<<s<<endl;
        return ;
    }
    for (int i = index ; i<s.size(); i++)
    {
        swap(s[index],s[i]);
        permutations(s,index+1);
        swap(s[index],s[i]);
    }
}
int main(){
permutations("abcb",0);
return 0;
}