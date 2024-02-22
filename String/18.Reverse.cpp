#include <bits/stdc++.h>
using namespace std;

void reverse(string str)
{
    // if (str.length() == 0)
    // {
    //     return;
    // }
    // reverse(str.substr(1));
    // cout << str[0];

    // reverse(str.begin(), str.end());
    // cout << str << endl;

    for (int i = str.size() - 1; i >= 0; i--)
    {
        cout << str[i];
    }
}

int main()
{
    string str = "rahul";
    cout << "Before reverse: " << str << endl;
    cout << "After reverse: ";
    reverse(str);
    // cout<<"After reverse: "<<str<<endl;
}