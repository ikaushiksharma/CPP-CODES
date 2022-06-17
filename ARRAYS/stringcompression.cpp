#include <bits/stdc++.h>
#include <string>
using namespace std;
string compressString(string s)
{
    int n = s.length();
    string ans;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (s[i + 1] == s[i] && i < n - 1)
        {
            count++;
            i++;
        }
        ans += s[i];
        ans += to_string(count);
    }
    if (ans.length() < s.length())
        return ans;
    else
        return s;
}
int main()
{
    string s1 = "aabbbcccdddee";
    string s2 = "abcde";
    cout << compressString(s1) << endl;
    cout << compressString(s2) << endl;
    return 0;
}