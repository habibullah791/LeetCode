#include <iostream>
using namespace std;

int hammingWeight(uint32_t n)
{

    int sumOfOnesBit = 0;
    while (n != 0)
    {

        if (n & 1)
        {
            sumOfOnesBit++;
        }

        n = n >> 1;
    }

    return sumOfOnesBit;
}

int main()
{
    uint32_t n = 00000000000000000000000000001011;
    cout << hammingWeight(n) << endl;
    return 0;
}