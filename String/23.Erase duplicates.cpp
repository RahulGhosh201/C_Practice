#include <bits/stdc++.h>
using namespace std;

string soln(string s)
{
    int i = 0;
    while (i < s.length() - 1)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i, 1);
        }
    }
    return s;
}

int main()
{
    string s = "aabccdeef";
    cout << "Ans: " << soln(s) << endl;
}