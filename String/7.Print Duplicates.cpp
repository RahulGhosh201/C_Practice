#include <bits/stdc++.h>
using namespace std;

void soln(string str)
{
    unordered_map<char, int> m;
    for (int i = 0; i < str.size(); i++)
    {
        m[str[i]]++;
    }
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (m[str[i]] > 1)
    //     {
    //         cout << str[i] << ": " << m[str[i]] << endl;
    //     }
    // }

    for (auto it : m)
    {
        if (it.second > 1)
        {
            cout << it.first << ": " << it.second << endl;
        }
    }
}

int main()
{
    string str = "geeksforgeeks";
    soln(str);
}