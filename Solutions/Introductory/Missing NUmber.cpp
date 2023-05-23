#include <iostream>
using namespace std;

int main()
{
    unsigned long long int test, input, sum = 0;
    cin >> test;

    for (int i = 1; i < test; i++)
    {
        cin >> input;
        sum += input;
    }

    sum = ((test * (test + 1)) / 2) - sum;

    cout << sum;

    return 0;
}