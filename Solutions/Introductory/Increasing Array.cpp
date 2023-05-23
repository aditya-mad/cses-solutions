#include <iostream>
using namespace std;

int main()
{
    unsigned long long int test, input, previous, temp, steps = 0;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> input;
        if (i != 0 && (previous > input))
        {
            steps += previous - input;
        }
        else
        {
            previous = input;
        }
    }

    cout << steps;
    return 0;
}