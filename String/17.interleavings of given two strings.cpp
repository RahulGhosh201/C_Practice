#include <bits/stdc++.h>
using namespace std;

void soln(string str, string str2)
{
    string temp = str + str2;
    // sort(str.begin(), str.end());
    // do
    // {
    //     cout << str << ", ";
    // } while (next_permutation(str.begin(), str.end()));
    sort(temp.begin(), temp.end());
    do
    {
        cout << temp << ", ";
    } while (next_permutation(temp.begin(), temp.end()));
}

int main()
{
    string str = "AB", str2 = "CD";
    soln(str, str2);
}