#include <bits/stdc++.h>
using namespace std;

void soln(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0 || str[i-1] == ' ')
        {
            str[i] = toupper(str[i]);
        }
    }
    cout << str << endl;
}
int main()
{
    string s = "cpp string exercises";
    soln(s);
    return 0;
}