#include <bits/stdc++.h>
using namespace std;

void soln(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = str[i] + 1;
    }
    cout << "Ans: " << str << endl;
}

int main()
{
    string str = "w3resource";
    soln(str);
}