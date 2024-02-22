#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int low = 0;
    int high = str.size() - 1;
    while (low < high)
    {
        if (str[low] != str[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int main()
{
    string str1 = "abbba";
    string str2 = "abdcba";
    if (isPalindrome(str1))
    {
        cout << str1 << " is palindrome" << endl;
    }
    else
    {
        cout << str1 << " is not a palindrome" << endl;
    }

    if (isPalindrome(str2))
    {
        cout << str2 << " is palindrome" << endl;
    }
    else
    {
        cout << str2 << " is not a palindrome" << endl;
    }
}