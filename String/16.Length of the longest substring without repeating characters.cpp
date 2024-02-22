#include <bits/stdc++.h>
using namespace std;

int soln(string str)
{
    int maxi = INT_MIN, ans = 0;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                ans = j - i;
            }
        }
        if (ans > maxi)
        {
            maxi = ans;
        }
    }
    return maxi;
}

int main()
{
    string str = "ABCDEFGABEF";
    cout << "Ans: " << soln(str) << endl;
}