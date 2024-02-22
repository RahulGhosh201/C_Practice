#include <bits/stdc++.h>
using namespace std;

int soln(string str)
{
    int n = str.size(), ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    string str = "I am rahul ghosh";
    cout << "Ans: " << soln(str) << endl;
    return 0;
}