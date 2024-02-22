#include <bits/stdc++.h>
using namespace std;

bool isomorphic(string a, string b)
{
    if (a.size() != b.size())
        return 0;
    int cnt1[26] = {0}, cnt2[26] = {0};
    for (int i = 0; i < a.size(); i++)
    {
        int t = a[i] = 'a', tt = b[i] - 'a';
        if (cnt1[t] == 0)
            cnt1[t] = tt;
        else if (cnt1[t] != tt)
            return 0;
        if (cnt2[tt] == 0)
            cnt2[tt] = t;
        else if (cnt2[tt] != t)
            return 0;
    }
    return 1;
}

int main()
{
    string a = "xxy", b = "aab";
    if (isomorphic(a, b))
    {
        cout << "They are isomorphic" << endl;
    }
    else
    {
        cout << "They are not isomorphic" << endl;
    }
}