#include <iostream>
using namespace std;

int getSum(int a, int b)
{

    int sum, carry;

    while (carry != 0)
    {
        sum = a ^ b;
        carry = (unsigned int)(a & b) << 1;

        a = sum;
        b = carry;
    }

    return sum;
}

int main()
{
    int a = 5;
    int b = 7;

    int sum = getSum(a, b);

    cout << "Sum of " << a << " and " << b << " is :" << sum;
}