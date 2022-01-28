#include <bits/stdc++.h>
using namespace std;

string sortSentence(string s)
{
    map<int, string> m;
    string st = "";
    for (auto &i : s)
    {
        if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
            st += i;
        else if (i >= '1' && i <= '9')
        {
            m[i] = st;
            st = "";
        }
    }
    s.clear();
    for (auto &pr : m)
        s += pr.second + ' ';
    s.erase(s.size() - 1);
    return s;
}

int main()
{
    string s = "is2 sentence4 This1 a3";
    cout << sortSentence(s);
}