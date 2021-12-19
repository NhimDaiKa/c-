#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    int pos;
    int len = s1.length();
    do
    {
        pos = s.find(s1);
        if (pos == -1)
            break;
        s.erase(pos, len + 1);
    } while (true);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
}

