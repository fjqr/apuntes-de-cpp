#include <iostream>
#include <algorithm>
using namespace std;

// Define is_palindrome() here:
bool is_palindrome(string text)
{
    string rev;
    for (int i = text.length() - 1; i >= 0; i--)
    {
        rev += text[i];
    }
    if (rev == text)
    {

        return true;
    }
    return false;
}

int main()
{

    cout << is_palindrome("madam") << "\n";
    cout << is_palindrome("ada") << "\n";
    cout << is_palindrome("lovelace") << "\n";
}