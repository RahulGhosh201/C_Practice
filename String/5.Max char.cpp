#include <bits/stdc++.h>
using namespace std;

char soln(string str)
{
    unordered_map<char, int> m;
    for (int i = 0; i < str.size(); i++)
    {
        m[str[i]]++;
    }
    int maxi = INT_MIN;
    char ans;
    for (auto it : m)
    {
        if (it.second > maxi)
        {
            ans = it.first;
        }
    }
    return ans;
}

int main()
{
    string str = "geeksforgeeks", str2 = "test";
    cout << "Maximum occured character is: " << soln(str) << endl;
    cout << "Maximum occured character is: " << soln(str2) << endl;
}