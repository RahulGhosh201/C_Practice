#include <bits/stdc++.h>
using namespace std;

char soln(string str)
{
    unordered_map<char, int> m;
    for (char ch : str)
    {
        m[ch]++;
    }
    for (char ch : str)
    {
        if (m[ch] == 1)
        {
            return ch;
        }
    }
}

int main()
{
    string str = "algorithm";
    cout << "Ans: " << soln(str);
    return 0;
}