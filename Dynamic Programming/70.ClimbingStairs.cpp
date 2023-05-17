#include <iostream>

using namespace std;
int climbStairs(int n)
{
    int one = 1, two = 1;
    int temp = 0;
    for (int i = 2; i <= n; i++)
    {
        temp = one;
        one = one + two;
        two = temp;
    }
    return one;
}

int main()
{
    int n = 3;
    int result = climbStairs(n);
    cout << result << endl;
    return 0;
}