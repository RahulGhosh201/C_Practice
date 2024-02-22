#include <bits/stdc++.h>
using namespace std;

string soln(string str, string str2)
{
    string ans = "";
    unordered_map<char, int> m;
    for (int i = 0; i < str2.size(); i++)
    {
        m[str2[i]]++;
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (m[str[i]] <= 0)
        {
            ans.push_back(str[i]);
        }
    }
    return ans;
}

int main()
{
    string str = "computer", str2 = "cat";
    cout << "Ans: " << soln(str, str2) << endl;
}