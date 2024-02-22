#include <bits/stdc++.h>
using namespace std;

int bTod(string s)
{
    int decimal = 0, power = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            decimal += pow(s[i], power);
        }
        power++;
    }
    return decimal;
}

string dTob(int x)
{
    string binary;
    while (x > 0)
    {
        binary = (x % 2 == 0 ? '0' : '1') + binary;
    }
    return binary;
}

int main()
{
    int x = 5;
    string binary = dTob(x);
    int decimal = bTod(binary);
    cout << "Bianry: " << binary << " Decimal: " << decimal << endl;
    return 0;
}