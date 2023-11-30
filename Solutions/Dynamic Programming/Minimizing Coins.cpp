#include <iostream>
#include <vector>
using namespace std;

int solve(int);
int mod = 1e9 + 7;
vector<int> dp;
vector<int> coin;
int target, sizen;

int main()
{
    cin >> sizen >> target;

    coin.resize(sizen);

    for (int i = 0; i < sizen; i++)
        cin >> coin[i];

    dp.resize(sizen + 1, -1);
    dp[0] = 1;

    cout << solve(target);
    return 0;
}

int solve(int n)
{
    if (n < 0)
        return target + 1;

    if (n == 0)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = target;

    for (auto x : dp)
    {
        dp[n] = min(dp[n], 1 + solve(n - x));
    }

    return dp[n];
}
