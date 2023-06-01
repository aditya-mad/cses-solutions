#include <iostream>
using namespace std;

int main()
{
    long long int num, ans = 0;
    cin >> num;
    long long int denominator = 5;
    while (num / denominator != 0)
    {
        ans += num / denominator;
        denominator *= 5;
    }
    cout << ans;
}