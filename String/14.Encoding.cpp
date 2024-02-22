#include <bits/stdc++.h>
using namespace std;

void soln(string str)
{
    int n = str.length();
    for (int i = 0; i < str.length(); i++)
    {
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1])
        { // jehetu same char gulo porpor royeche so just check korbo str[i]=str[i+1] kina and also check korte hbe whether i is in range or not
            count++;
            i++;
        }
        cout << str[i] << count;
    }
}

int main()
{
    string str = "wwwwaaadexxxxxx";
    soln(str);
}