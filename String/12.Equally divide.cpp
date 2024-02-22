#include <bits/stdc++.h>
using namespace std;

void divide(string str, int n)
{
    if (str.size() % n != 0)
    {
        cout << "Invalid input" << endl;
        return;
    }

    int parts = str.size() / n, start = 0;
    while (start < str.size())
    {
        cout << str.substr(start, parts) << endl;
        start += parts;
    }
}
// substr(starting index, size of the string to be operated with)
// substr returns the sub string of the string
int main()
{
    string str = "a_simple_divide_string_quest";
    divide(str, 4);
}