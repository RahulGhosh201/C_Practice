#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "ABC";
    sort(str.begin(), str.end());
    do
    {
        cout << str << ", ";
    } while (next_permutation(str.begin(), str.end()));
    return 0;
}