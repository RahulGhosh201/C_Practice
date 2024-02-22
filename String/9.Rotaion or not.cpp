#include <bits/stdc++.h>
using namespace std;

bool isRotation(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    }
    string concat = str1 + str1;
    if (concat.find(str2) != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str1 = "ABCD", str2 = "CDAB";
    if (isRotation(str1, str2))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}