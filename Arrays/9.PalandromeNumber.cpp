#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(int x)
{
    string str = to_string(x);
    string temp = str;

    for (int i = 0; i < str.length(); i++)
    {
        temp[i] = str[str.length() - i - 1];

    }

    if (temp == str)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    bool isPalandrome  = isPalindrome(789);
    cout << isPalandrome << endl;
    return 0;
}