#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &, int);
int mod = 1e9 + 7;

int main()
{
    int num;
    cin >> num;

    vector<int> memo(num + 1, -1);
    memo[0] = 1;
    cout << solve(memo, num);

    return 0;
}

int solve(vector<int> &memo, int n)
{
    if (n < 0)
        return 0;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = 0;

    for (int i = 1; i <= 6; i++)
    {
        memo[n] = (1LL * memo[n] + (solve(memo, n - i) % mod)) % mod;
    }

    return memo[n];
}
