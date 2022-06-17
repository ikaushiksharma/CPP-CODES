#include <bits/stdc++.h>
using namespace std;
void printsubsequences(string inp, string out)
{
    if (inp.size() == 0)
    {
        cout << "/" << out << "/" << endl;
        return;
    }

    char ch = inp[0];
    string ros = inp.substr(1);
    printsubsequences(ros, out);
    printsubsequences(ros, out + ch);
}
int main()
{
    printsubsequences("abcb", "");
    return 0;
}