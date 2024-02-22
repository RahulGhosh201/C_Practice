#include <bits/stdc++.h>
using namespace std;

// using recursion
void reverse(string str)
{
    if (str.size() == 0)
    {
        return;
    }
    reverse(str.substr(1)); // reverse the substring from the second character
    cout << str[0];
}

int main()
{
    string str = "Geeks for Geeks";
    cout << "Before reversing str: " << str << endl;
    // reverse(str.begin(), str.end());
    // cout << "After reversing str: " << endl;
    reverse(str);
    return 0;
}