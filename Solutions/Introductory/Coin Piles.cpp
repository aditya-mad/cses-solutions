#include <iostream>
using namespace std;

int main()
{
    long long int test, pile_a, pile_b;

    cin >> test;

    while (test--)
    {
        cin >> pile_a >> pile_b;

        if ((pile_a + pile_b) % 3 != 0 || pile_a > 2 * pile_b || pile_b > 2 * pile_a)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}