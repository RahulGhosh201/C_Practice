#include <bits/stdc++.h>
using namespace std;

void search(string str1, string str2)
{
    int m = str1.length(), n = str2.length();
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (str1[i + j] != str2[j])
                break;
        }
        if (j == m)
            cout << "Pattern found at index " << i << endl;
    }
}

int main()
{
    string str1 = "AABAACAADAABAAABAA", str2 = "AABA";
    search(str1, str2);
}