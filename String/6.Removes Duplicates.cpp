#include <bits/stdc++.h>
using namespace std;

string soln(string str)
{
    unordered_map<char, int> m;
    string ans = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (m.find(str[i]) == m.end())
        {
            ans.push_back(str[i]);
            m[str[i]]++;
        }
    }
    return ans;
}

int main()
{
    string str = "geeksforgeeks";
    cout << "Ans: " << soln(str) << endl;
}